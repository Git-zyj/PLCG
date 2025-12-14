/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227239
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 3955312688U))));
    var_21 = ((/* implicit */_Bool) ((var_6) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (max((339654620U), (1000785313U)))));
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (((arr_1 [i_0]) >> (((max((339654601U), (((/* implicit */unsigned int) var_2)))) - (339654590U)))))));
                arr_6 [i_1] [i_1] [i_0] &= ((/* implicit */_Bool) ((max(((-(arr_2 [i_0 - 2] [i_1] [i_0]))), (max((339654608U), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))))) % (max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) 4294967289U))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_11 [i_0 - 1] [i_1] [i_1] = ((((max((var_11), (arr_3 [i_0] [i_1] [i_1]))) != (1315049301U))) ? ((~(arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 3]))) : (max((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (arr_1 [i_0]) : (arr_9 [i_0] [i_1] [i_0]))), (((339654610U) | (4294967295U))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) var_11);
                        arr_14 [i_0] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_1] [i_2] [i_3];
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((1198769349U) - (1198769332U)))))) ? (arr_9 [i_0 - 2] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))))), (arr_12 [i_4] [i_2] [i_1] [i_0 - 2])));
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_16 [i_4 + 1] [i_2] [i_1] [i_1] [i_0]))))) ? (((max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1] [i_1] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))))) : (max((arr_10 [i_0] [i_2] [i_0]), ((~(arr_12 [i_4] [i_0 - 3] [i_1] [i_0 - 3])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)0);
                            var_25 += ((/* implicit */_Bool) (~(((/* implicit */int) var_16))));
                            var_26 ^= max(((!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_4 + 1] [i_5])))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (3955312688U))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_1 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_2] [i_1] [i_0]))))) ? (arr_1 [i_6]) : (((((/* implicit */_Bool) arr_10 [i_2] [i_0] [i_0])) ? (arr_15 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_2] [i_0 - 2] [i_0 - 2])))))));
                        arr_25 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(var_1)));
                        var_27 |= ((((/* implicit */_Bool) arr_19 [i_6] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_15))))) : (((var_9) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (9U))));
                        arr_26 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 2]);
                        arr_27 [i_0 + 1] [i_0 + 1] [2U] [2U] [i_0 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_0] [i_0]))));
                    }
                }
                var_28 ^= ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_1]) << (((max((1315049301U), (((/* implicit */unsigned int) var_5)))) - (1315049280U)))))) && (var_19));
            }
        } 
    } 
    var_29 = max((max((((548208022U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (max((var_14), (var_14))))), (((max((4294967295U), (4294967268U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
}
