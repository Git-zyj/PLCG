/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245293
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
    var_20 &= ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2] [i_1]))) : (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : ((-(var_18)))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */int) arr_0 [i_0 + 2]))))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_13)) : (var_5))))));
                            var_21 += ((/* implicit */signed char) var_4);
                            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_8 [i_1]), (((/* implicit */unsigned long long int) var_7)))))))), (min((var_18), (((/* implicit */long long int) arr_3 [i_0 + 3] [i_1 - 1] [i_2 + 1]))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_8 [i_1]);
                arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) max((arr_5 [i_1] [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1] [i_1 - 1])))) ? (((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 - 1])))))));
            }
        } 
    } 
}
