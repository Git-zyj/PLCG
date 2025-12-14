/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206429
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [(unsigned char)3] [(unsigned char)2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) max((arr_2 [i_0 - 3]), (var_5)))) > (((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_3 - 1] [(unsigned char)2] [i_1] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                var_15 = var_6;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) / ((~(((/* implicit */int) var_0))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_0 - 3] [i_0] [i_0] [(unsigned char)6] [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_6] [i_0 - 3] [i_6] [i_6] [i_0 - 3] [i_0]))));
                            arr_23 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] = arr_3 [i_0] [i_0 - 3];
                        }
                        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                            var_18 = arr_1 [i_0];
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_29 [i_0] [i_1] [i_2] [(unsigned char)5] [i_5] [i_8] [i_8] = arr_5 [i_0] [i_0] [i_0];
                            arr_30 [i_1] [(unsigned char)8] [i_2] [i_2] [i_2] [i_5] [(unsigned char)12] = var_6;
                        }
                        arr_31 [i_0] [i_1] [i_0] [i_1] = arr_9 [i_5] [i_2] [i_2] [i_2] [(unsigned char)11] [i_0];
                        arr_32 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0 + 2])) != (((/* implicit */int) var_11))));
                    }
                    for (unsigned char i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        var_19 |= min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (min((var_9), (var_12))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 4; i_10 < 11; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_10 - 1] [i_2])) ^ (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_0] [i_10 - 4] [i_2])))))))))))));
                            var_21 = min((min((arr_34 [i_1] [i_1]), (var_12))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_2] [i_9] [i_10 - 2] [i_10] [i_10] [i_10 - 1] [i_10 + 1])) == (((/* implicit */int) var_12))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) max((arr_19 [i_9 - 2]), (arr_19 [i_9 + 1]))))));
                            arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_0 - 3])) || (((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 3])))))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 11; i_12 += 2) 
                        {
                            arr_44 [i_12] [(unsigned char)5] [i_9] [i_2] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_28 [i_0] [i_0] [i_0 + 1]), (arr_28 [i_0] [i_0] [i_0 + 1])))), ((+(((/* implicit */int) min((var_6), (var_12))))))));
                            arr_45 [i_0 + 2] [i_1] [i_2] [i_9] [i_1] = var_14;
                            var_23 |= ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_24 [i_9 + 1] [i_12 - 2] [i_12 - 1] [i_12 - 2] [i_12] [i_12] [i_12 - 2]))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_1] [i_1])) / (((/* implicit */int) var_14)))))))) / (((((/* implicit */_Bool) arr_2 [i_9 - 2])) ? (((/* implicit */int) arr_2 [i_9 - 4])) : (((/* implicit */int) arr_2 [i_9 + 1]))))));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) != (((/* implicit */int) var_5)))))));
                        }
                        for (unsigned char i_13 = 1; i_13 < 12; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_9] [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [(unsigned char)11])) || (((/* implicit */_Bool) arr_26 [i_0] [i_2] [i_13] [i_13] [i_2] [i_13 - 1] [(unsigned char)7]))))) > (((/* implicit */int) max((arr_12 [i_1] [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [i_13]), (var_4)))))))));
                            arr_49 [i_13] [i_13] [i_9] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_24 [i_13] [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_2] [i_2])) > (((/* implicit */int) var_11))))));
                        }
                    }
                    arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_0 - 3] [i_0 - 3]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_7))));
    var_28 += ((/* implicit */unsigned char) (!(((((/* implicit */int) max((var_8), (var_2)))) <= (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11)))))))));
    var_29 -= var_2;
    var_30 = var_7;
}
