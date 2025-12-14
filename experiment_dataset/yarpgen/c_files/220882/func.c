/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220882
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (max((max((arr_1 [i_0]), (((/* implicit */unsigned char) var_14)))), (((/* implicit */unsigned char) var_15))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) min(((+(arr_3 [i_0] [i_3]))), (((/* implicit */unsigned int) 1293906497))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            var_21 = ((((((/* implicit */unsigned int) ((/* implicit */int) (short)12405))) != (min((1831828942U), (((/* implicit */unsigned int) arr_7 [i_4] [i_1] [(unsigned short)13] [i_1] [i_1] [i_0])))))) ? ((~(var_2))) : (((/* implicit */long long int) 2474783710U)));
                            var_22 = min((((unsigned int) -969473110813830510LL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))) ? (arr_12 [i_4] [i_4]) : ((+(var_8)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_5] = 4041394800U;
                            arr_17 [i_0] [i_0] [(unsigned char)9] [i_3] [i_5] = ((/* implicit */long long int) arr_8 [i_2] [i_1]);
                            arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned int) var_12);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (-1293906498) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_2)))));
                            var_24 = ((/* implicit */unsigned int) (short)20025);
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) (-(min((-1481530427), (((/* implicit */int) (unsigned char)80))))));
        var_26 ^= ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_27 = ((969473110813830512LL) + (((/* implicit */long long int) (-(2147483647)))));
        var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_4 [i_6] [i_6]), (((/* implicit */unsigned char) var_4))))), (var_5)));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (int i_11 = 4; i_11 < 15; i_11 += 1) 
                    {
                        {
                            arr_35 [i_11] [i_10] [i_8] [i_8] [i_8] [i_7] |= ((/* implicit */unsigned char) (+(arr_30 [i_11 - 3] [i_11] [i_11 + 1] [i_11 - 1])));
                            var_29 = ((/* implicit */unsigned short) ((long long int) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]));
                            arr_36 [i_8] [i_8] [(short)2] |= ((/* implicit */long long int) (-(1831828942U)));
                            var_30 = arr_23 [i_8];
                            var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_11 - 3] [i_10] [i_11 - 2] [i_10] [i_11]))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned short) var_8);
        }
        /* LoopSeq 2 */
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
        {
            arr_39 [i_12] = ((((((/* implicit */long long int) arr_30 [i_7] [i_7] [i_7] [(unsigned short)0])) == (arr_32 [16U] [16U]))) ? (((/* implicit */int) var_17)) : (((arr_28 [i_7]) ? (((/* implicit */int) (short)-20006)) : (var_19))));
            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_7] [i_12]))));
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_7] [i_13] [12LL] [i_14] [i_15]))));
                            arr_49 [i_13] [i_14] [i_7] [13U] [i_13] = ((/* implicit */unsigned int) -1685658123);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_16 = 1; i_16 < 16; i_16 += 2) 
                {
                    for (unsigned int i_17 = 3; i_17 < 15; i_17 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */int) 1322524822890055867ULL);
                            var_36 *= ((/* implicit */unsigned char) ((short) var_14));
                            var_37 = ((/* implicit */short) (+(arr_51 [i_12] [i_13] [i_13] [i_17])));
                            arr_54 [(unsigned short)7] [i_13] [i_13] = ((/* implicit */signed char) (+(((var_17) ? (((/* implicit */int) (short)-20007)) : (451257575)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_19 = 4; i_19 < 14; i_19 += 4) 
                {
                    for (short i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (!(arr_25 [i_19 - 1] [i_19 + 1] [i_19 - 3])));
                            arr_61 [i_7] [i_18] [(unsigned char)9] [i_7] [i_19 + 3] [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) -451257575))));
                            var_39 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_3))) ? (var_19) : (((/* implicit */int) ((unsigned char) arr_31 [i_19])))));
                            var_40 ^= ((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_19] [i_7] [i_20]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    arr_64 [i_21] [13] [i_18] [i_18] [i_7] [i_7] = ((/* implicit */unsigned short) ((int) var_11));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 3; i_22 < 15; i_22 += 1) 
                    {
                        var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)34288)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_7)))));
                        arr_67 [i_7] [i_18] [i_18] [i_18] [i_7] = ((/* implicit */int) var_7);
                    }
                    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (short)-17784)))));
                        arr_70 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20040)) ? (var_12) : (((/* implicit */int) arr_6 [i_18]))));
                        arr_71 [i_18] [i_18] = ((/* implicit */short) (!((_Bool)1)));
                    }
                }
            }
            /* LoopSeq 2 */
            for (short i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
            {
                arr_75 [i_7] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [(signed char)10] [(signed char)10] [i_12] [(signed char)10] [(signed char)10]))));
                arr_76 [i_7] [i_24] [i_24] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16322073857340128297ULL)) ? (var_12) : (((/* implicit */int) var_6))))) ? (-280913081) : (((/* implicit */int) arr_2 [i_7] [i_7] [i_7]))));
                /* LoopNest 2 */
                for (unsigned char i_25 = 1; i_25 < 14; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        {
                            var_43 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                            var_44 = ((/* implicit */long long int) var_12);
                        }
                    } 
                } 
                var_45 = ((/* implicit */long long int) arr_38 [i_24] [i_12] [(unsigned char)5]);
            }
            for (short i_27 = 0; i_27 < 17; i_27 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_28 = 2; i_28 < 15; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 17; i_29 += 3) 
                    {
                        {
                            arr_89 [i_29] [i_7] [i_7] [i_27] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_27 [i_7] [i_7]);
                            arr_90 [(unsigned char)7] [i_27] [i_7] [i_7] = ((/* implicit */unsigned int) arr_42 [(unsigned char)10] [i_28 - 1] [i_29] [i_29]);
                            arr_91 [i_7] [i_7] [i_27] [i_28] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_28 - 1] [i_28 + 1] [i_28 + 2] [i_28 - 1])) ? (((/* implicit */int) arr_13 [i_28 - 1] [(unsigned char)2] [i_28 + 2] [i_28] [i_28 - 2])) : (593585755)));
                            arr_92 [i_7] [i_12] [10] [i_12] [i_7] = ((/* implicit */unsigned char) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                    } 
                } 
                arr_93 [i_7] [i_12] [i_7] = ((((/* implicit */int) arr_42 [(unsigned short)0] [(unsigned short)0] [i_27] [i_7])) | (arr_50 [(short)6] [(short)6] [i_27] [(short)6] [(short)6]));
                arr_94 [(short)0] [(short)0] [i_7] = ((/* implicit */long long int) var_4);
            }
            arr_95 [i_12] [i_12] = ((/* implicit */unsigned short) (-((-(var_12)))));
        }
        for (unsigned short i_30 = 0; i_30 < 17; i_30 += 1) /* same iter space */
        {
            arr_99 [i_7] [i_30] [i_30] = ((/* implicit */signed char) var_7);
            var_46 ^= ((/* implicit */unsigned short) (~(arr_60 [i_7] [i_7] [i_7] [(unsigned char)4] [i_30] [(_Bool)1] [i_30])));
            arr_100 [i_7] [i_7] [i_30] = ((/* implicit */unsigned char) var_15);
        }
    }
    for (unsigned char i_31 = 0; i_31 < 14; i_31 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_32 = 4; i_32 < 10; i_32 += 4) 
        {
            for (signed char i_33 = 3; i_33 < 12; i_33 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_34 = 0; i_34 < 14; i_34 += 4) 
                    {
                        for (long long int i_35 = 0; i_35 < 14; i_35 += 1) 
                        {
                            {
                                arr_115 [i_31] [i_31] [i_33] = ((((/* implicit */_Bool) ((unsigned short) max((arr_8 [i_33] [i_33]), (((/* implicit */unsigned int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1836162899792496870LL) : (((/* implicit */long long int) var_13)))))))) : (((/* implicit */int) ((unsigned short) arr_51 [i_33 - 3] [i_33] [i_33] [i_32 + 4]))));
                                arr_116 [i_32] [i_33] [13U] [i_33] = ((/* implicit */unsigned char) min((((max((arr_77 [i_33] [i_33] [(unsigned short)5]), (var_4))) ? (((/* implicit */long long int) min((1132045737), (var_5)))) : (min((arr_106 [i_33] [i_32 - 1]), (((/* implicit */long long int) arr_87 [i_35] [i_34] [i_34] [i_33] [i_32] [i_32] [i_31])))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 2124670216369423319ULL)) ? (((/* implicit */int) (unsigned short)38528)) : (((/* implicit */int) (short)7720))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_33 + 1]))) : (4086752487099704312LL)))))));
                            }
                        } 
                    } 
                    arr_117 [i_31] [i_33] = ((/* implicit */signed char) var_18);
                    arr_118 [i_31] [i_33] = (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_18))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_36 = 0; i_36 < 14; i_36 += 4) 
                    {
                        for (unsigned char i_37 = 1; i_37 < 12; i_37 += 3) 
                        {
                            {
                                arr_124 [6ULL] [(unsigned char)9] [6ULL] [i_36] [i_33] = ((/* implicit */unsigned int) arr_57 [i_31] [i_32] [i_31] [i_37 - 1]);
                                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (+(8U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_48 = ((/* implicit */short) var_6);
        arr_125 [i_31] = ((/* implicit */signed char) (short)7241);
    }
    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (var_7) : (((/* implicit */unsigned long long int) (~(max((var_5), (-155246975)))))))))));
    var_50 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) >> ((((-(var_16))) - (754767056U)))));
}
