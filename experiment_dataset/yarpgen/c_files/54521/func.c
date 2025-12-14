/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54521
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
    var_14 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) (((~(((((/* implicit */_Bool) 1703607537U)) ? (2591359759U) : (var_10))))) << (((arr_8 [i_0] [i_1] [i_2] [i_3]) - (2491893237U)))));
                            var_16 = ((/* implicit */signed char) var_3);
                            var_17 = arr_0 [i_1];
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((2944559317U), (var_0))))));
                arr_9 [(signed char)0] &= ((1703607547U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((2591359752U) << ((((-(((((/* implicit */int) (signed char)74)) >> (((arr_6 [i_0] [i_1] [i_1] [i_1]) - (1818096218))))))) + (26))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((max((2591359759U), (((/* implicit */unsigned int) 570957926)))) > (((/* implicit */unsigned int) var_3))));
}
