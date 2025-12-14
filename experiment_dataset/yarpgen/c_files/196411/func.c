/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196411
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))), (var_0))), (((/* implicit */unsigned int) var_1)))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_4)) <= (var_10))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((var_10), (((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) var_7))))) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) var_6))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) var_5)))))));
            }
        } 
    } 
}
