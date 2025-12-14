/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26229
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49011))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_15)))))));
    var_19 = ((/* implicit */unsigned long long int) var_13);
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((var_11) & (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [12] = ((/* implicit */signed char) arr_4 [i_0]);
                var_21 = ((/* implicit */int) arr_2 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_9);
}
