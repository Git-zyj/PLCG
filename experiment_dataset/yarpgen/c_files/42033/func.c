/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42033
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_1] [7LL]))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_16 [(short)12] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */long long int) ((unsigned short) (signed char)108));
                            var_15 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)20496))));
                            var_16 *= ((/* implicit */signed char) var_3);
                            var_17 -= ((/* implicit */short) (-(-24LL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    arr_20 [i_2] [i_2] [22U] [i_1] [i_2] [(signed char)12] = ((/* implicit */_Bool) ((short) var_10));
                    arr_21 [i_2] [i_5] = ((unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_2 + 4] [i_1])) >= (((/* implicit */int) var_1))));
                    var_19 = ((/* implicit */_Bool) (+(arr_12 [i_2] [i_2 + 2] [i_2 + 3])));
                }
                var_20 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)));
                var_21 = ((/* implicit */long long int) var_14);
            }
            for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))))));
                            arr_28 [i_0] [10LL] [i_6] [i_7] [11LL] = ((/* implicit */_Bool) ((-1233204205931277260LL) & ((+(var_11)))));
                            var_23 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_6])) ? ((+(((/* implicit */int) arr_27 [i_0] [10U] [i_0] [i_0] [10U] [i_0] [i_6])))) : ((+(((/* implicit */int) var_1))))));
                arr_29 [i_6] [20U] [4ULL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((5ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20499)))))) >> (((3560020748U) - (3560020726U)))));
                arr_30 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) (+(-2349169215047390237LL)));
            }
            /* LoopSeq 1 */
            for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)63326));
                    arr_37 [8ULL] [i_1] [i_9] [12U] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-77)))))));
                }
                for (int i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
                {
                    arr_40 [i_9] [i_11] [i_11] [i_11] [(short)11] [i_0] = ((/* implicit */short) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_1] [i_0] [i_11 + 2])) ? (((/* implicit */int) (short)14444)) : (((/* implicit */int) ((var_1) && (var_6))))));
                }
                var_26 = ((/* implicit */unsigned char) ((((unsigned long long int) var_13)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1]))) : (var_0))))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_9] [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) 10ULL))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [24ULL])) >= (((/* implicit */int) (unsigned short)38204)))))));
            }
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_2))))) <= (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 22; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            arr_49 [i_0] [i_0] [i_12] [i_13] [i_13] [(unsigned short)6] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_29 = ((unsigned short) arr_41 [i_13 - 2] [(short)6] [i_13 + 1] [(unsigned short)13]);
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned short) var_4)))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned char)253))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248)))))));
                        }
                    } 
                } 
                arr_50 [i_12] [i_0] [i_0] |= ((/* implicit */signed char) (unsigned char)3);
            }
        }
        for (long long int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
        {
            arr_55 [i_0] = ((unsigned char) -1914646860);
            arr_56 [i_0] [(unsigned short)6] [i_0] = var_3;
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (arr_14 [i_0] [i_0] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_44 [i_0] [i_16])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) : ((-(var_13)))));
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    for (unsigned char i_19 = 1; i_19 < 23; i_19 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned short)14))))));
                            arr_68 [i_17] [i_16] [i_0] = ((/* implicit */unsigned short) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_19 + 2])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    arr_71 [i_17] [i_17] [i_16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 4; i_21 < 24; i_21 += 3) 
                    {
                        arr_75 [i_0] [i_0] [i_17] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [(signed char)16] [i_16] [i_16] [i_20] [i_16] [i_21 - 4] [i_16])) : (((/* implicit */int) var_2))));
                        arr_76 [i_0] [i_16] [i_17] [i_16] [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        var_35 = ((/* implicit */signed char) ((unsigned short) (unsigned short)52570));
                    }
                    for (unsigned char i_22 = 1; i_22 < 23; i_22 += 3) 
                    {
                        var_36 += ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_22] [i_22 + 1] [i_22 + 2] [i_22] [i_22] [i_22 - 1])) ? (((/* implicit */int) arr_46 [i_22] [i_22 + 1] [i_22 + 2] [i_22 + 1] [i_22] [i_22 + 2])) : (((/* implicit */int) var_10))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((6948126892275860779LL) <= (2349169215047390228LL))))));
                        var_39 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) < (8052208277395846047ULL)))));
                        var_40 += ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_16] [i_0])) <= (((/* implicit */int) arr_46 [i_16] [i_16] [i_16] [i_16] [i_22 + 2] [i_0]))));
                    }
                    var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3584))) : (arr_22 [i_0] [i_16] [i_17] [i_16]))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_23 = 1; i_23 < 21; i_23 += 2) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_88 [i_17] [i_0] [i_17] [i_16] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 8052208277395846066ULL))));
                            var_42 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_16] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_44 [i_16] [i_23])) : (((/* implicit */int) var_14)))));
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_25 = 0; i_25 < 25; i_25 += 4) 
        {
            arr_92 [i_0] [i_25] [16LL] = ((/* implicit */unsigned int) (-(2327156397210686106LL)));
            var_44 = ((/* implicit */unsigned long long int) (+(var_8)));
            var_45 += ((/* implicit */long long int) var_12);
        }
        var_46 = ((/* implicit */signed char) arr_66 [i_0] [i_0] [i_0] [2U] [i_0]);
    }
    /* LoopSeq 1 */
    for (long long int i_26 = 1; i_26 < 21; i_26 += 3) 
    {
        var_47 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 736827594)) > (2305843009213693920ULL)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_27 = 2; i_27 < 20; i_27 += 3) 
        {
            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33437)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)25722))));
            var_49 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)63)) > (((/* implicit */int) (short)-16224))))) > (((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            for (unsigned int i_28 = 2; i_28 < 21; i_28 += 2) 
            {
                var_50 = ((/* implicit */unsigned int) (((!(arr_52 [20U] [i_26]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) arr_18 [i_28] [i_27] [(unsigned short)2])))));
                var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */long long int) arr_10 [(short)15] [i_26 + 1])) : (-2349169215047390233LL)));
                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_51 [i_27 - 1] [i_27 + 1] [i_27 - 1])) : (((/* implicit */int) arr_42 [i_28] [i_28 - 2] [i_28 - 2] [i_28]))));
                var_53 = ((/* implicit */unsigned short) arr_41 [i_27] [i_27 - 2] [i_27 - 1] [i_27 + 1]);
            }
            for (unsigned char i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_30 = 0; i_30 < 22; i_30 += 1) 
                {
                    var_54 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 4 */
                    for (signed char i_31 = 0; i_31 < 22; i_31 += 3) 
                    {
                        arr_107 [i_26 - 1] [16U] [i_27] [i_26 - 1] [i_30] [i_31] [(short)1] = ((/* implicit */unsigned int) (~(3581760516391910094ULL)));
                        arr_108 [i_26] [i_26] [i_29] [(unsigned short)16] [i_31] = ((/* implicit */short) (unsigned short)14);
                    }
                    for (unsigned int i_32 = 0; i_32 < 22; i_32 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 168448782U)) ? (((/* implicit */unsigned long long int) var_11)) : (var_9))));
                        var_56 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_0))));
                    }
                    for (unsigned char i_33 = 0; i_33 < 22; i_33 += 3) /* same iter space */
                    {
                        var_57 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_60 [i_30] [i_30] [i_27 + 1] [i_26])))))));
                    }
                    for (unsigned char i_34 = 0; i_34 < 22; i_34 += 3) /* same iter space */
                    {
                        arr_119 [i_34] [i_34] [(unsigned short)20] [i_34] [i_26 - 1] = ((/* implicit */unsigned short) ((unsigned char) arr_110 [i_26] [11LL] [i_26 + 1] [i_27 - 1] [i_34]));
                        var_59 += ((/* implicit */unsigned short) ((short) (_Bool)1));
                        arr_120 [i_26] [i_27 - 2] [i_34] [i_30] [i_34] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)37635))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_26 + 1] [i_29] [i_29])))));
                        arr_121 [i_34] = ((/* implicit */signed char) var_4);
                    }
                    arr_122 [i_26] [i_26] [i_29] = ((/* implicit */short) ((int) (short)-26377));
                    arr_123 [6ULL] [6ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                }
                for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                {
                    arr_126 [i_26] [i_35] [i_35] [i_35 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_27] [i_35 - 1] [i_26 - 1] [i_27 - 1] [i_29])) ? (((/* implicit */int) (short)-26378)) : (((/* implicit */int) var_5))));
                    var_60 = ((/* implicit */short) ((unsigned int) arr_95 [i_27 + 1] [i_27 + 1] [i_35 - 1]));
                    arr_127 [i_26] = ((/* implicit */short) ((_Bool) var_7));
                }
                var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3614116608U)) ? (30ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14197))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_36 = 1; i_36 < 19; i_36 += 2) 
                {
                    arr_130 [i_27] [(short)13] [i_29] [(unsigned char)8] = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 260096)) : (2646213731280413089ULL));
                    var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) (_Bool)1))));
                }
                for (signed char i_37 = 1; i_37 < 19; i_37 += 1) 
                {
                    var_63 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-89)) ? (1198569384U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) <= (((/* implicit */unsigned int) 736827565))));
                    var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                }
                arr_135 [i_29] [(unsigned char)11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                arr_136 [i_29] [(unsigned char)13] [i_26] = ((/* implicit */unsigned int) ((signed char) (signed char)-1));
            }
        }
        for (unsigned short i_38 = 0; i_38 < 22; i_38 += 3) 
        {
            arr_139 [i_26] [(unsigned char)8] &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((unsigned int) (_Bool)1))) <= (arr_69 [i_26] [i_26 + 1] [i_26 + 1] [i_26]))));
            arr_140 [19U] [19U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_112 [i_26] [i_26 + 1] [i_26 - 1] [i_26] [i_26 - 1] [i_26 + 1] [i_38]))))));
            arr_141 [i_26] = ((/* implicit */unsigned short) 1977600994U);
            /* LoopNest 2 */
            for (unsigned long long int i_39 = 1; i_39 < 21; i_39 += 3) 
            {
                for (signed char i_40 = 0; i_40 < 22; i_40 += 1) 
                {
                    {
                        var_65 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((_Bool) var_7))), (max((((/* implicit */unsigned int) arr_78 [i_40] [i_39 - 1] [15LL] [i_26] [i_26])), (var_0))))), (((/* implicit */unsigned int) ((short) 511ULL)))));
                        var_66 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_26] [i_38] [i_39] [16LL] [i_39]))) : (var_0)))) ? (((((/* implicit */_Bool) (unsigned char)177)) ? (arr_105 [i_40]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))), (((/* implicit */unsigned int) var_14))));
                        arr_147 [i_39] [9LL] = ((/* implicit */unsigned char) var_3);
                        var_67 &= ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        }
    }
    var_68 = ((/* implicit */short) var_4);
}
