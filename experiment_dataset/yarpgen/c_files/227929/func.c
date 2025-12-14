/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227929
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
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (var_1))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */unsigned long long int) -1967276002)) & (arr_0 [i_0 - 2])))))));
        var_19 = ((/* implicit */int) min((var_19), (max((((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) >> (((var_5) + (1125934042))))), (max((((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])), (1967275979)))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 3])), (max((((/* implicit */int) var_10)), (-1967276021))))), ((((-(1967276020))) / (max((((/* implicit */int) arr_1 [i_0] [i_0 + 1])), (1333705547))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 3])), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 3])), (var_13)))))) ? (min((var_5), (var_12))) : (((/* implicit */int) ((((((/* implicit */long long int) 2147483637)) ^ (var_9))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_21 = max(((~(((/* implicit */int) var_11)))), (-1967276002));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_5) : (var_4)))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (2456520594693316602LL)))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [(short)16] [i_0] [i_0])) << (((((var_5) + (1125934058))) - (13)))))), (((((/* implicit */_Bool) (short)-21881)) ? (var_3) : (((/* implicit */unsigned long long int) -1719201513))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_8 [(unsigned short)19] [i_0 - 3] [i_0] [i_0] [i_0 + 1] [i_0 - 1]))) ? (var_5) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_10)))))));
                            var_24 = ((/* implicit */unsigned short) -1967276028);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_16 [i_0] = ((/* implicit */int) max(((-(-2440531465980076587LL))), (((/* implicit */long long int) max((arr_10 [i_3] [10] [i_3] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_10 [i_3] [2LL] [i_3] [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 3]))))));
                            arr_17 [i_0 - 1] [i_1] [i_0] [i_1] [i_5] [i_2] [i_3] = ((/* implicit */unsigned char) var_10);
                        }
                        arr_18 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (max((var_6), (((/* implicit */long long int) var_15)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_25 += max((((/* implicit */int) arr_5 [i_7] [i_0])), (max((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) var_1)) : (var_5))), (((((/* implicit */int) (unsigned char)23)) | (-1967276008))))));
                        var_26 = ((int) max((max((((/* implicit */long long int) var_2)), (var_14))), (((/* implicit */long long int) (~(arr_10 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0 + 1] [10LL]))))));
                    }
                } 
            } 
        }
    }
    for (int i_8 = 1; i_8 < 8; i_8 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) arr_23 [i_9] [i_8]);
            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_8] [i_8]))));
            var_29 = (~(arr_14 [i_8 - 1] [i_8]));
        }
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_3)))) ? (((/* implicit */int) arr_11 [i_8 - 1] [i_8 + 1] [i_8] [i_8 - 1])) : (((int) 1274706661))))) ? (((((/* implicit */_Bool) (+(var_6)))) ? (arr_19 [1] [i_8] [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (_Bool)0)))))))) : (((/* implicit */unsigned long long int) max((arr_22 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 - 1]), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (8621307041212670934LL))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) arr_27 [i_10] [i_10])) ? (arr_27 [i_10] [i_10]) : (var_0)))));
        /* LoopSeq 1 */
        for (int i_11 = 4; i_11 < 9; i_11 += 4) 
        {
            var_32 = ((/* implicit */long long int) arr_12 [i_10] [i_11 + 1] [i_11 - 1] [i_11 - 3] [i_10]);
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        arr_37 [i_10] [i_11 - 2] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_8);
                        arr_38 [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)203)) ^ (var_4)));
                        arr_39 [i_10] [i_10] [i_12] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                arr_44 [i_14] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */int) arr_1 [i_11 + 1] [i_11 - 4]))));
                var_33 += ((/* implicit */short) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119)))));
            }
            for (long long int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_16 = 1; i_16 < 7; i_16 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (~(var_8)));
                    arr_50 [(unsigned char)7] [i_15] [(unsigned char)2] [i_10] [i_15] [i_11] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_10] [i_16 + 3] [i_10] [i_10] [i_15] [i_11]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))))) || (((/* implicit */_Bool) var_12))));
                    var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10] [i_11 + 1] [i_15] [3]))) : (arr_7 [i_11] [i_10])))) ? (((((/* implicit */int) var_10)) & (var_12))) : (((/* implicit */int) (unsigned short)50812))));
                }
                for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    var_36 += ((/* implicit */int) var_11);
                    var_37 = (-2147483647 - 1);
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_22 [i_11] [i_15] [i_15] [i_11 - 4] [i_11]) >= (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ^ (((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_33 [i_10] [i_11] [i_17])))))))));
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_7)))))));
                }
                for (int i_18 = 1; i_18 < 7; i_18 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
                    {
                        var_40 = ((((/* implicit */_Bool) 6315530664286645792LL)) ? (((238062680) / (1967276017))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) var_7)))));
                        var_41 = var_4;
                        arr_58 [1ULL] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) var_14)))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((arr_53 [i_11 + 1] [i_18 + 3] [i_20] [i_20] [i_20]) + (arr_24 [i_18 - 1]))))));
                        var_43 &= ((/* implicit */unsigned char) (-(arr_9 [i_20] [i_10] [i_11 + 1] [i_10] [i_18 + 2])));
                    }
                    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                    {
                        arr_64 [i_18] [i_10] = (unsigned char)174;
                        var_44 = ((/* implicit */short) (~(arr_23 [i_11 - 3] [i_18 + 2])));
                        arr_65 [i_21] [i_15] [i_18] [i_15] [i_11] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [0LL] [i_11 - 1] [i_11 - 2] [i_11 - 1])) ? (var_15) : ((-(var_12)))));
                    }
                    arr_66 [i_10] [i_11 - 4] [i_10] [i_18] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                }
                var_45 ^= ((/* implicit */long long int) (~(var_4)));
                arr_67 [i_10] [i_11 + 1] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) << (((((((((/* implicit */long long int) ((/* implicit */int) var_11))) + (-6366216180666426844LL))) + (6366216180666363249LL))) - (29LL)))));
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))));
            }
            for (long long int i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
            {
                var_47 = (((!(((/* implicit */_Bool) (unsigned short)24913)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_3)))));
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) 12557206689123580756ULL)) ? (arr_68 [i_10] [i_11 - 1] [i_22] [i_10]) : (var_9)));
            }
        }
        arr_70 [i_10] = ((/* implicit */int) ((arr_31 [9]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10])))));
        /* LoopSeq 1 */
        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) 
        {
            var_49 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (var_12) : (arr_8 [i_10] [i_10] [i_10] [i_23] [i_23] [i_23])));
            var_50 = ((((/* implicit */_Bool) arr_72 [i_23] [i_10])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_2)) ? (arr_55 [i_10] [i_10] [i_10] [i_23] [i_23] [i_23]) : (((/* implicit */int) (unsigned char)130)))));
            arr_74 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_23]) : (((/* implicit */unsigned long long int) var_4))));
        }
        /* LoopNest 3 */
        for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
        {
            for (long long int i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                for (unsigned short i_26 = 2; i_26 < 8; i_26 += 1) 
                {
                    {
                        arr_83 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((arr_63 [i_26 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_26 - 2] [i_26 - 1] [i_10] [i_26 - 2] [i_26 - 2])))));
                        arr_84 [i_26 + 1] [i_25] [i_25] [i_24] [i_10] [i_10] = ((/* implicit */unsigned char) (~(var_9)));
                    }
                } 
            } 
        } 
    }
    var_51 &= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) min((var_10), (var_16)))) ^ (((((/* implicit */_Bool) var_14)) ? (var_12) : (var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_27 = 0; i_27 < 17; i_27 += 4) 
    {
        for (unsigned char i_28 = 1; i_28 < 14; i_28 += 3) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 17; i_30 += 1) 
                    {
                        for (int i_31 = 0; i_31 < 17; i_31 += 1) 
                        {
                            {
                                var_52 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_28 + 1])))) ? (max(((+(2147483643))), (min((((/* implicit */int) (unsigned char)59)), (arr_96 [i_28] [i_30] [i_31]))))) : (((((/* implicit */int) min((((/* implicit */unsigned short) arr_94 [i_29] [i_28] [i_30] [i_30] [i_31] [i_29])), (var_1)))) | (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_20 [i_27] [i_27])))))))));
                                var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) var_15))));
                            }
                        } 
                    } 
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (((max((((/* implicit */long long int) (unsigned short)42202)), (var_14))) | (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)197)), (-1992003572))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_32 = 0; i_32 < 14; i_32 += 2) 
    {
        for (long long int i_33 = 0; i_33 < 14; i_33 += 2) 
        {
            {
                arr_103 [i_32] [i_32] [i_32] = min((((/* implicit */int) (unsigned short)52423)), (((((/* implicit */_Bool) max((var_5), (var_8)))) ? (max((((/* implicit */int) var_10)), (var_4))) : (((((/* implicit */_Bool) var_16)) ? (-2147483643) : (((/* implicit */int) var_11)))))));
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 14; i_34 += 1) 
                {
                    for (int i_35 = 3; i_35 < 10; i_35 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_11 [i_32] [i_32] [i_34] [i_32])))), (max((var_0), (((/* implicit */int) (unsigned short)44010)))))))));
                            var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) var_3))));
                            var_57 = ((var_14) & (((/* implicit */long long int) ((/* implicit */int) var_16))));
                            arr_111 [i_32] [i_33] [i_34] = ((/* implicit */_Bool) max((max((((/* implicit */int) var_11)), (var_15))), ((~(((/* implicit */int) var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))));
}
