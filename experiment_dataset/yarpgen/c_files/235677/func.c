/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235677
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
    var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_10)))) + (min((var_5), (((/* implicit */long long int) var_12)))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (219)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0 - 1] = ((/* implicit */int) min((min((((var_2) | (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4])))), (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_1]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) var_4);
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_7])), (((((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_5])) * (((/* implicit */int) ((var_11) <= (arr_12 [i_7 - 1] [i_6] [i_1] [i_1] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_1] [i_5]))) : (var_5))), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_5 - 2] [i_5 - 2]))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        arr_27 [i_5] = ((/* implicit */short) arr_18 [i_5 - 2] [i_0]);
                        arr_28 [i_0] [i_5] = arr_20 [i_0 - 1] [i_5] [i_8];
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        arr_31 [i_5] [i_1] [i_5] [i_9] = ((/* implicit */_Bool) arr_10 [i_0]);
                        var_18 += ((/* implicit */long long int) ((arr_19 [i_9] [i_5] [i_1] [i_0]) - (min((arr_19 [i_0] [i_0 - 2] [i_0] [i_0 - 2]), (arr_19 [i_0 - 1] [i_0 - 1] [i_5 - 2] [i_9])))));
                    }
                    arr_32 [i_5] [i_5] [i_5] [i_5 + 1] = ((/* implicit */_Bool) arr_4 [i_0]);
                }
                for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_1] [i_10] [i_10] [i_0] [i_11] = ((/* implicit */int) arr_30 [i_0] [i_0] [i_11] [i_11]);
                        var_19 *= ((/* implicit */unsigned long long int) arr_29 [i_0] [i_1] [i_10]);
                        arr_40 [i_0 + 1] [i_10] [i_10] [i_11] = ((/* implicit */long long int) arr_11 [i_11] [i_10] [i_1] [i_0 + 1]);
                        var_20 = ((/* implicit */_Bool) arr_20 [i_0 - 2] [i_10] [i_1]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_41 [i_0 + 1] [i_1] [i_10] [i_12])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12] [i_1] [i_0 - 1])))))))), (arr_13 [i_0] [i_0 - 1] [i_10])));
                        arr_44 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_20 [i_12] [i_10] [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_12 [i_12] [i_10] [i_0] [i_10] [i_1] [i_0])))))) ? (((/* implicit */int) arr_22 [i_12] [i_10] [i_12] [i_12] [i_12])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_10]))) >= (arr_19 [i_0 - 2] [i_1] [i_10] [i_1]))))));
                        arr_45 [i_12] [i_12] [i_10] [i_12] = ((/* implicit */_Bool) var_0);
                        var_22 = var_14;
                    }
                    arr_46 [i_0] [i_10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((min((arr_12 [i_0] [i_0] [i_1] [i_1] [i_10] [i_10]), (arr_18 [i_1] [i_1]))) & (((/* implicit */unsigned int) arr_37 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_1] [i_10]))))) : (((((/* implicit */unsigned long long int) arr_3 [i_0])) ^ (min((var_2), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_10] [i_10] [i_10] [i_0] [i_10]))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((var_14) * (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_1)), (arr_36 [i_1] [i_10]))) == (((/* implicit */unsigned long long int) var_5)))))))));
                }
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (min((((arr_5 [i_0 - 1]) > (((/* implicit */int) arr_33 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1])))), (((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_33 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_42 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_13])), (arr_4 [i_0 - 2]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            {
                                var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((arr_54 [i_18] [i_17] [i_14]) / (((/* implicit */int) arr_51 [i_16] [i_18])))) > (arr_52 [i_14] [i_16] [i_14])))) << (((((((((/* implicit */_Bool) arr_56 [i_14] [i_15] [i_16] [i_16] [i_18] [i_18])) ? (((/* implicit */unsigned int) var_13)) : (var_12))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_15]))))) - (141072558U)))));
                                var_27 = arr_56 [i_14] [i_14] [i_15] [i_17] [i_17] [i_14];
                                var_28 += ((/* implicit */unsigned char) arr_55 [i_15]);
                            }
                        } 
                    } 
                } 
                arr_61 [i_15] [i_14] = ((/* implicit */unsigned short) arr_60 [i_15] [i_15] [i_15] [i_14] [i_15]);
                /* LoopSeq 2 */
                for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    arr_64 [i_14] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_54 [i_14] [i_15] [i_19])) >= (arr_62 [i_15] [i_15] [i_14])));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((max((-4153649590016914563LL), (4153649590016914552LL))), (var_5))))));
                }
                for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        for (short i_22 = 0; i_22 < 20; i_22 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_7))));
                                arr_74 [i_21] [i_21] = ((/* implicit */_Bool) arr_67 [i_14] [i_15] [i_14] [i_21]);
                                var_31 = ((/* implicit */unsigned char) arr_72 [i_15] [i_21] [i_21] [i_21]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 3; i_23 < 18; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 20; i_24 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_79 [i_14] [i_15] [i_20] [i_23] [i_23])), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_15]))) & (var_12))), (arr_67 [i_23 - 3] [i_15] [i_20] [i_20])))));
                                var_33 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_65 [i_24] [i_14] [i_14])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_49 [i_15])), (arr_67 [i_14] [i_15] [i_23] [i_23])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_77 [i_23 + 1] [i_23 + 1]))))) : (((((arr_54 [i_20] [i_20] [i_20]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_52 [i_15] [i_15] [i_20])) ? (arr_58 [i_15] [i_15] [i_15] [i_15] [i_15] [i_14]) : (arr_75 [i_14] [i_15] [i_14]))) + (8951992289729151166LL)))))));
                            }
                        } 
                    } 
                    arr_80 [i_14] [i_15] [i_20] = ((/* implicit */_Bool) arr_62 [i_14] [i_15] [i_14]);
                    arr_81 [i_14] [i_14] [i_15] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_14) / (((/* implicit */int) arr_49 [i_14]))))) ? (arr_55 [i_20]) : (arr_67 [i_15] [i_20] [i_14] [i_20]))) / (min((max((var_8), (((/* implicit */unsigned int) arr_77 [i_15] [i_15])))), (arr_53 [i_14] [i_14])))));
                }
            }
        } 
    } 
    var_34 += ((/* implicit */unsigned int) var_0);
    var_35 = ((/* implicit */unsigned int) var_5);
}
