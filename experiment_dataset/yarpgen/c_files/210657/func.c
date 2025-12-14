/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210657
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_3)) <= (var_11)))), (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [1U]))))))) ? ((+(min((arr_1 [11U]), (arr_1 [(unsigned short)13]))))) : ((~(-1))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_4 [i_1] &= ((/* implicit */int) max(((-(min((((/* implicit */unsigned int) (unsigned short)5904)), (var_6))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-1114385437), (((/* implicit */int) (unsigned short)59632))))))))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)59632)))))))));
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_2] [i_0] [(unsigned short)8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        var_19 = var_9;
                        var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_1])) || (((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned short)5920)), (2872112902U))), (((/* implicit */unsigned int) (~(var_8)))))))));
                        var_21 = ((/* implicit */int) arr_0 [i_0] [i_3 + 4]);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        arr_21 [i_1] [i_1] |= var_15;
                        var_22 ^= arr_2 [i_0] [i_0] [i_1];
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) (-((-(arr_17 [i_3] [i_3])))));
                        var_24 += (-((-(((/* implicit */int) var_12)))));
                        var_25 = ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_1] [i_1] [i_3] [i_2 + 1])) ? (arr_7 [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_20 [i_2 - 2] [i_3 + 2] [i_3 + 2] [i_3] [i_7])));
                        var_26 *= ((/* implicit */unsigned short) (-(var_11)));
                    }
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) max((var_27), (var_3)));
                        arr_27 [i_8 - 2] [i_2] [i_2 - 1] [i_2] [i_0] = var_15;
                    }
                    for (int i_9 = 2; i_9 < 14; i_9 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */unsigned int) min((1024), (((/* implicit */int) (unsigned short)30685))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max(((~(((/* implicit */int) var_12)))), (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_14 [1] [1] [i_2] [i_2 - 1] [i_2])))))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)5904)), (3946193529U))) <= (max((((/* implicit */unsigned int) arr_26 [i_9] [i_9 - 2] [i_9 + 1] [i_9] [i_9] [0])), (arr_9 [i_9] [i_9]))))))));
                        var_30 = ((/* implicit */int) max((var_30), (arr_10 [i_0] [i_0] [i_3])));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_2 - 2] [i_2] [i_10] [i_10]))));
                    /* LoopSeq 1 */
                    for (int i_11 = 4; i_11 < 11; i_11 += 3) 
                    {
                        var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_14))))));
                        arr_36 [i_2] [i_10] [i_2] [i_2] [i_2] = arr_30 [i_11] [i_2] [i_1] [5];
                    }
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 13; i_12 += 3) 
                    {
                        var_33 &= ((((/* implicit */_Bool) arr_25 [i_12] [i_12 + 1] [i_12] [i_12] [i_12])) ? (arr_25 [i_12] [i_12 + 1] [i_12] [i_12] [i_12 + 1]) : (arr_25 [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12]));
                        var_34 = ((/* implicit */int) var_1);
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_12] [i_10] [i_12 - 1] [1U])) ? (arr_3 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        arr_39 [i_2] [0] [i_2] [i_10] [i_12 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_0] [8U] [i_2] [i_2] [i_2] [i_12]))));
                        var_36 -= ((/* implicit */unsigned short) (~(arr_7 [i_0] [i_0] [i_0])));
                    }
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_10] [i_1] [i_1] [i_0])) ? (arr_3 [i_2 - 2] [i_2 - 1] [6U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1])))));
                }
                var_38 = ((((/* implicit */_Bool) (-(var_3)))) ? (max((((((/* implicit */int) var_15)) ^ (arr_37 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))), ((~(((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_17 [i_0] [i_1]))))))));
                /* LoopSeq 3 */
                for (int i_13 = 2; i_13 < 12; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        arr_45 [i_0] [i_14] [i_2] [i_2] [i_2] = (~(max((arr_35 [8] [i_14] [i_13 + 3] [7U] [i_13 + 3]), (arr_35 [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_14] [i_13 + 3]))));
                        var_39 = ((/* implicit */unsigned int) max((var_39), ((-(max((arr_23 [i_13] [i_14] [i_13] [i_14] [i_13]), (((/* implicit */unsigned int) arr_20 [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
                        var_40 = ((/* implicit */int) (-((~(max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) var_14))))))));
                        var_41 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_10 [8] [i_13] [i_0])))))) ? (((/* implicit */int) min((arr_32 [i_0] [i_1] [i_2] [i_13 - 1] [i_13] [i_14]), (arr_32 [i_0] [i_1] [i_0] [i_13 + 1] [i_1] [i_14])))) : ((((~(((/* implicit */int) var_1)))) | ((~(((/* implicit */int) var_2))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        arr_48 [i_2] [i_2] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))), (arr_42 [i_15] [i_15] [i_15])))) ? (max((arr_40 [i_0] [i_0] [i_0] [i_0]), (max((var_11), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) max(((-(arr_37 [(unsigned short)13] [i_2] [(unsigned short)13] [i_13 + 1] [i_15] [(unsigned short)13] [i_0]))), (max((arr_22 [i_0] [i_2]), (arr_18 [i_0] [i_1] [i_2] [i_13] [i_13] [i_15])))))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((int) min((arr_26 [i_13] [i_13 + 2] [i_13] [i_13] [i_13 + 1] [i_13]), (arr_26 [i_13] [i_13 - 2] [10] [i_13] [i_13 + 1] [i_13])))))));
                        var_43 ^= (-(arr_25 [i_0] [i_0] [i_0] [i_0] [10U]));
                        var_44 = (~((+(((/* implicit */int) var_1)))));
                        var_45 ^= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) max((2147483631), (((/* implicit */int) (unsigned short)0))))), (min((((/* implicit */unsigned int) var_15)), (arr_19 [i_15] [i_15]))))), (min((min((arr_9 [i_1] [i_13]), (((/* implicit */unsigned int) arr_5 [i_0])))), (((/* implicit */unsigned int) max((arr_25 [i_0] [i_0] [i_0] [8] [8]), (arr_6 [i_0] [i_0]))))))));
                    }
                    arr_49 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(max((min((var_9), (((/* implicit */int) arr_32 [i_0] [i_0] [10] [i_0] [4] [i_0])))), (max((arr_10 [3] [i_2] [i_0]), (((/* implicit */int) var_13))))))));
                }
                for (unsigned short i_16 = 2; i_16 < 14; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        var_46 *= ((/* implicit */unsigned int) (~((~(((/* implicit */int) min((var_7), (var_7))))))));
                        var_47 = ((/* implicit */unsigned int) (-(max((arr_35 [i_16] [i_16] [i_16 + 1] [i_16] [i_16 + 1]), (arr_33 [i_17] [i_2])))));
                        var_48 -= max((max((max((var_8), (((/* implicit */int) var_5)))), (var_3))), (((/* implicit */int) var_16)));
                    }
                    var_49 = min((max(((~(var_8))), (min((((/* implicit */int) var_1)), (arr_55 [10] [i_0] [4] [i_0] [i_0]))))), (max(((+(((/* implicit */int) arr_14 [i_2 - 1] [i_16] [i_2 - 1] [i_1] [5])))), (min((((/* implicit */int) var_16)), (arr_47 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))))));
                }
                for (int i_18 = 2; i_18 < 11; i_18 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 2; i_19 < 14; i_19 += 4) /* same iter space */
                    {
                        var_50 &= ((/* implicit */int) min((((/* implicit */unsigned int) var_8)), ((~(max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) -866534405))))))));
                        arr_60 [0] [i_1] [i_2] [i_2] [i_19] = ((((/* implicit */_Bool) 63306126)) ? (((/* implicit */int) (unsigned short)41763)) : (((/* implicit */int) (unsigned short)59639)));
                        var_51 &= (~((~(((((/* implicit */_Bool) (unsigned short)23773)) ? (159818897U) : (((/* implicit */unsigned int) 2147483634)))))));
                        var_52 = ((((/* implicit */_Bool) (unsigned short)20063)) ? (201326592) : (-407644702));
                        var_53 += ((/* implicit */unsigned int) max(((~(264241152))), (min((2147483631), (((/* implicit */int) (unsigned short)59633))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_20 = 2; i_20 < 14; i_20 += 4) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned short) var_4);
                        var_55 = ((/* implicit */int) var_15);
                        arr_64 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_20 - 2] [i_20 + 1] [i_20] [i_20] [i_20 - 2]))));
                    }
                    var_56 &= ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_7)))), ((+(arr_7 [i_2] [i_2 - 3] [i_0])))));
                }
            }
        }
    }
    var_57 ^= ((/* implicit */int) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (var_11)))));
    var_58 += ((/* implicit */int) var_15);
}
