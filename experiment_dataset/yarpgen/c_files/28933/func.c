/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28933
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [(signed char)13] [i_1] [i_1] = ((/* implicit */long long int) min((var_4), (var_3)));
                                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) - (min((var_11), (min((((/* implicit */long long int) var_9)), (var_12)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = max((((/* implicit */int) var_15)), (max((((/* implicit */int) max((var_7), (var_2)))), (((var_6) - (((/* implicit */int) var_8)))))));
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_7))))) : (var_14)))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */short) var_9);
                                var_20 = ((/* implicit */signed char) var_4);
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_14))), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_2))))) : (max((((/* implicit */unsigned int) var_7)), (1502292274U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)6), ((unsigned char)26)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) + (7599365144343147852ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */int) var_8)))))))));
                                var_23 ^= ((/* implicit */signed char) ((((/* implicit */int) max((min((var_3), (var_2))), (var_5)))) / (max((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) var_10))))))));
                            }
                            arr_23 [i_6 + 1] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (var_9)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_16)) : (var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 4) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */signed char) var_9);
                                arr_34 [i_0] [i_0] [i_10 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) var_3))))) ? (max((var_14), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)12)) / (var_13))))))) ? (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))) : (((((/* implicit */int) max((var_2), (var_3)))) / (((/* implicit */int) max(((unsigned char)5), ((unsigned char)26))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30644)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34335))) : (((((/* implicit */_Bool) (short)5787)) ? (-1062521964511500942LL) : (((/* implicit */long long int) var_6))))))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)198)));
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) min((var_3), (var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_12)))) ? (max((((/* implicit */long long int) var_0)), (var_16))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_16))))));
                        arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) var_3);
                    }
                    arr_39 [i_0] [10LL] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_5)))))))) ? (min((max((var_11), (((/* implicit */long long int) var_9)))), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (min((var_5), (var_4)))))))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        arr_42 [(unsigned short)10] [i_1] [i_8] [i_8] [i_12] = ((/* implicit */unsigned long long int) var_3);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1062521964511500936LL)) ? (-1062521964511500942LL) : (((/* implicit */long long int) 1789272254))))) ? (((((/* implicit */int) var_1)) - (var_13))) : (((((/* implicit */int) var_3)) % (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 7672668949090658417LL)) ? (7672668949090658417LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62016))))) : (((var_11) << (((((/* implicit */int) var_15)) - (53990))))))))))));
                    }
                }
                for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_27 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_2))))) ? (max((var_13), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    arr_46 [13ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) max(((unsigned char)248), ((unsigned char)8))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_6) > (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_12)))))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1062521964511500957LL) : (-5074033073888643852LL)))) || (min((((((/* implicit */int) var_15)) != (((/* implicit */int) var_10)))), (((var_0) <= (((/* implicit */int) var_5))))))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) var_6)) | (-929636907299395987LL))))))));
                                var_31 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12))))))) ? (max((min((((/* implicit */long long int) var_0)), (var_11))), (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_1))))) : (max((var_11), (((/* implicit */long long int) var_10)))))));
                                var_32 += ((((/* implicit */_Bool) 8199512659878487008ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (929636907299395987LL));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    var_33 ^= ((/* implicit */unsigned short) var_13);
                    arr_54 [6LL] [i_1] [6LL] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (1LL) : (5074033073888643852LL)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14)))));
                }
                /* vectorizable */
                for (short i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        var_34 += ((/* implicit */short) ((1755695692) >> (((((/* implicit */int) (unsigned char)250)) - (239)))));
                        arr_62 [i_0] [i_0] [i_0 - 1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 4) 
                    {
                        for (int i_20 = 0; i_20 < 15; i_20 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) var_5);
                                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 15; i_21 += 4) 
                    {
                        for (int i_22 = 1; i_22 < 13; i_22 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */short) var_6);
                                var_38 = var_8;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_39 &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_6)))))) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */long long int) max((var_13), (((/* implicit */int) var_1))))) - (var_16))));
    /* LoopNest 3 */
    for (short i_23 = 0; i_23 < 20; i_23 += 2) 
    {
        for (unsigned short i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            for (long long int i_25 = 0; i_25 < 20; i_25 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_26 = 0; i_26 < 20; i_26 += 2) 
                    {
                        arr_88 [i_23] [i_24] [i_25] [i_23] [i_23] [i_25] = max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))), (((((/* implicit */long long int) var_0)) + (var_11))))), (((/* implicit */long long int) var_10)));
                        /* LoopSeq 1 */
                        for (unsigned char i_27 = 2; i_27 < 17; i_27 += 4) 
                        {
                            var_40 |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) -6749443839701386958LL)) ? (-10LL) : (1152358554653425664LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_41 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (var_9)))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_14))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (var_6))))))) || (((/* implicit */_Bool) var_5))));
                            arr_93 [i_23] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1535494662)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) : (var_11)))), (((((/* implicit */_Bool) var_9)) ? (var_14) : (var_14))))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) >= (2868747320945866648LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)63)), ((unsigned short)0)))))))));
                        }
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (short)-25801)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)26)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))) != (((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned short i_29 = 0; i_29 < 20; i_29 += 2) 
                        {
                            var_43 = var_0;
                            arr_101 [i_23] [i_23] [i_25] [i_28] [i_29] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((2005249228397140704LL) - (2005249228397140704LL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_9)))) : (max((var_14), (((/* implicit */unsigned long long int) var_13))))))));
                            arr_102 [i_23] [i_24] [i_25] = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -626885787)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) : (var_12)))) / (min((((/* implicit */unsigned long long int) var_10)), (11692965556483834909ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)34272)) : (1987035138))), (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_5))))))));
                            var_44 ^= ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) 1755695698)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */int) var_1)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))))));
                            arr_103 [i_23] [i_23] [i_23] [1] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) var_13)) : (min((562949953421311LL), (((/* implicit */long long int) (unsigned short)65519))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))));
                        }
                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 20; i_30 += 4) 
                        {
                            var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))));
                            arr_106 [i_24] [i_24] = var_13;
                        }
                        arr_107 [i_23] [i_24] [i_25] [14LL] = ((/* implicit */unsigned short) var_9);
                    }
                    arr_108 [i_23] [6] [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_6) : (var_0))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    } 
    var_46 = ((/* implicit */short) max((((/* implicit */unsigned short) ((var_12) > (max((var_16), (var_11)))))), (var_3)));
}
