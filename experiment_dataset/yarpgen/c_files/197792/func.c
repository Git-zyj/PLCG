/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197792
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(16398977180859013626ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_16 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */long long int) ((unsigned char) var_5)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_13)) - (16288)))))), (((unsigned long long int) var_11))))) ? ((~(((((/* implicit */int) var_13)) | (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned short)30753)) - (30736)))))))));
    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (unsigned short)34788)) << (((/* implicit */int) (signed char)4))))));
}
