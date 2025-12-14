/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201186
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) var_5);
        var_14 = ((/* implicit */_Bool) var_9);
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (+((-(4294967295U))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = ((/* implicit */int) min((var_16), ((-(var_6)))));
                arr_12 [i_3] [i_3] = ((/* implicit */_Bool) var_9);
                var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (1152921504606715904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_11 [i_3] [i_3] [14] [i_3]))))))));
                arr_13 [i_1] [7] [i_3] [i_1] = ((/* implicit */_Bool) ((arr_10 [i_2 + 2] [i_2]) ? (((/* implicit */int) arr_10 [i_2 - 3] [i_3])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_3]))));
            }
            var_18 = ((/* implicit */unsigned char) arr_1 [i_1] [i_2]);
            var_19 -= ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */int) arr_10 [i_1] [i_2 - 3]))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 - 2] [i_4 - 2])) ? (arr_6 [i_4 - 2] [i_4 + 1] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) var_5);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(arr_4 [i_7 - 1] [i_7] [i_7 + 1]))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) > (((0U) | (4294967274U)))));
                            var_24 = ((/* implicit */unsigned char) arr_21 [i_9]);
                            arr_37 [i_9] [(signed char)3] [i_10] [10] [i_9] [i_8] [i_9] = arr_16 [i_8] [i_9] [i_10];
                        }
                    } 
                } 
                arr_38 [i_1] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_9);
            }
            arr_39 [i_1] = ((/* implicit */unsigned short) ((arr_35 [i_1] [(unsigned char)14] [i_1] [i_1] [i_8]) << (((arr_35 [i_1] [i_8] [i_1] [i_8] [i_1]) - (2200386903U)))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_14 [i_8] [i_1]))));
        }
        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_51 [i_1] [i_12] [(signed char)10] [i_12] [i_15] |= ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_11))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_46 [i_1] [i_13 - 1]))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_16] [i_1] [i_1] [i_16] [i_12] [i_13 - 1])) ? (((/* implicit */int) arr_30 [13LL] [i_12] [i_13])) : (((/* implicit */int) arr_19 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_12]))));
                        arr_55 [i_12] [i_12] [i_13 - 1] [i_12] [14ULL] = ((/* implicit */_Bool) arr_48 [i_1] [i_1] [i_13 - 1] [i_13] [(unsigned char)4] [i_12]);
                        var_29 = ((arr_54 [i_12] [i_12] [i_12] [i_12] [i_16] [i_12] [i_12]) && (((/* implicit */_Bool) var_0)));
                        arr_56 [i_1] [i_12] [i_1] [i_1] [i_14] [i_16] [i_1] = ((/* implicit */unsigned short) ((((int) (unsigned char)180)) ^ (((/* implicit */int) arr_16 [i_13 - 1] [i_12] [i_16]))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_12] [i_13 - 1] [i_14])) > (((/* implicit */int) arr_30 [i_13 - 1] [i_12] [i_1]))));
                    }
                    arr_57 [i_1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (unsigned short)4096);
                    arr_58 [i_14] [i_12] [i_14] [i_14] = ((/* implicit */int) arr_23 [i_12] [i_12] [i_14] [i_1] [i_1] [i_12] [i_12]);
                    var_31 = ((/* implicit */_Bool) var_5);
                    var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_13 - 1])))));
                }
                for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    arr_62 [i_1] [i_12] [5LL] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (var_10)));
                    arr_63 [i_12] = ((/* implicit */unsigned int) arr_36 [i_12] [i_1] [i_12] [i_12]);
                    var_33 = ((((/* implicit */int) arr_47 [i_12] [i_13] [i_13] [14ULL] [i_12])) / (((/* implicit */int) var_11)));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(arr_21 [i_13]))))));
                }
                for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >= (-64560764)));
                    arr_66 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) 34U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6038596558622538994ULL)));
                    var_36 = ((/* implicit */int) var_5);
                    arr_67 [i_1] [i_12] [i_12] [i_13] [19] [i_18] = ((/* implicit */long long int) arr_49 [i_13] [i_18]);
                    arr_68 [i_12] [i_12] [i_12] [(unsigned short)11] = ((/* implicit */int) (_Bool)1);
                }
                for (unsigned char i_19 = 4; i_19 < 17; i_19 += 4) 
                {
                    arr_72 [i_1] [i_12] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_25 [i_19] [8LL] [i_19 + 1] [i_19] [10U] [i_19] [i_19]) : (arr_35 [i_19] [i_19] [i_12] [(unsigned short)5] [i_19])));
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((int) arr_48 [i_1] [i_1] [i_12] [i_13] [i_13] [i_19])))));
                }
                arr_73 [i_1] [i_12] [1U] = ((/* implicit */unsigned long long int) var_3);
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)31));
                            arr_79 [i_1] [i_1] [i_12] = ((3532209967U) >> (((/* implicit */int) arr_28 [i_13] [i_13 - 1])));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_84 [i_12] [i_1] [i_22] [i_12] = ((/* implicit */_Bool) 3888094520U);
                arr_85 [i_12] [i_12] [i_12] [i_12] = arr_26 [i_12] [1ULL];
            }
            for (unsigned char i_23 = 0; i_23 < 20; i_23 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((arr_23 [i_1] [i_1] [i_12] [i_12] [i_12] [i_1] [i_23]) * (arr_23 [i_12] [i_1] [i_12] [i_12] [i_12] [i_1] [i_1]))))));
                arr_88 [i_12] [i_12] [i_23] = ((((22U) + (22U))) + (((/* implicit */unsigned int) -1618820376)));
                var_40 = arr_65 [i_1] [i_12] [i_1] [i_1];
                arr_89 [i_1] [i_12] [i_12] [i_1] = ((/* implicit */_Bool) ((int) ((var_2) | (((/* implicit */unsigned int) -64560767)))));
            }
            for (unsigned char i_24 = 0; i_24 < 20; i_24 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    for (unsigned char i_26 = 0; i_26 < 20; i_26 += 2) 
                    {
                        {
                            var_41 = ((((((/* implicit */long long int) 2162151256U)) + (8560776398498960265LL))) / (((/* implicit */long long int) 1176599352U)));
                            arr_98 [i_25] [i_25] [i_24] [i_24] [(_Bool)1] [4U] &= 4294967295U;
                            arr_99 [i_1] [(signed char)6] [i_24] [i_1] [i_12] = ((/* implicit */unsigned int) arr_42 [i_1] [i_1] [i_12]);
                            arr_100 [i_26] [i_25] [i_25] [i_12] [i_26] = ((/* implicit */int) (unsigned char)113);
                            arr_101 [i_12] [i_25] [i_24] [i_12] [i_1] [i_12] = ((/* implicit */unsigned int) (~(var_9)));
                        }
                    } 
                } 
                arr_102 [i_1] [i_1] |= ((((/* implicit */_Bool) -117540132)) ? (arr_44 [i_1] [i_1]) : (((/* implicit */int) (signed char)126)));
            }
            arr_103 [i_1] [i_12] [i_1] &= ((/* implicit */_Bool) arr_43 [i_1]);
        }
        var_42 = ((/* implicit */int) (signed char)-22);
        var_43 = ((/* implicit */unsigned short) (-(1258640765U)));
    }
    for (unsigned int i_27 = 4; i_27 < 23; i_27 += 2) 
    {
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 25; i_28 += 2) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((arr_105 [i_27 - 4] [i_27]) / (arr_105 [i_27 - 4] [i_27]))))));
                                var_45 = ((/* implicit */signed char) max((max((arr_105 [i_27 + 1] [i_27 + 1]), (arr_105 [i_27 - 1] [i_27 - 4]))), (((/* implicit */unsigned int) arr_110 [i_27 - 2] [i_27 - 2] [i_27 - 2]))));
                                var_46 |= ((_Bool) max((((/* implicit */unsigned short) arr_110 [i_27 + 1] [i_27 + 1] [i_31])), (max((arr_113 [i_27] [i_28] [i_31]), (((/* implicit */unsigned short) arr_111 [i_27] [i_28] [i_28]))))));
                            }
                        } 
                    } 
                    var_47 = ((arr_105 [i_28] [i_27 - 4]) > ((-(22U))));
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)109)) ? (4373338006179187493LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
        arr_117 [i_27] = ((/* implicit */_Bool) ((unsigned char) ((arr_114 [i_27] [i_27] [i_27] [i_27] [i_27]) <= ((((_Bool)0) ? (arr_109 [i_27]) : (((/* implicit */int) (unsigned char)200)))))));
        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 64560767)) || (((/* implicit */_Bool) var_5))));
    }
    var_50 ^= (!(((/* implicit */_Bool) -239119188)));
    var_51 = ((/* implicit */int) max((var_51), (-64560743)));
}
