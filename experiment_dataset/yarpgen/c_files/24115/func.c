/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24115
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
    var_16 = var_2;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [11] [i_0] [i_2] = ((/* implicit */long long int) (_Bool)0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) 3203468282508604908LL);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (((((/* implicit */unsigned long long int) -302299939)) + (476312524776576081ULL)))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_3]))) | ((-(995009831U))))))));
                    }
                    var_19 = min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_0])), (var_1)))), (1625047244092951162LL));
                }
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_9)))))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */unsigned long long int) arr_7 [i_0])), (arr_4 [i_1 - 2] [i_1 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                arr_15 [i_0] = ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (arr_12 [11] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1 - 3] [i_1] [i_0] [i_0])))));
                arr_16 [(_Bool)1] &= ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_8))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_6))))))))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((3129379729U) < (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_7))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15131))))))))))))));
}
