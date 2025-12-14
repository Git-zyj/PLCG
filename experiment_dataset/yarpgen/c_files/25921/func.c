/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25921
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
    var_14 = (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1763374633U)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_6 [i_1] [4LL] [i_1] = ((/* implicit */short) arr_0 [i_0]);
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(2531592663U))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18315))) + (2531592669U))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_17 = arr_3 [i_3] [i_3];
                            arr_16 [i_0] [(short)11] [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((arr_0 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_1] [i_2])))));
                            var_18 |= ((/* implicit */short) (~((-(2531592659U)))));
                            var_19 += ((/* implicit */short) (~(4294967284U)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_1)) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_21 |= arr_15 [(unsigned char)5] [i_1] [i_2] [i_5] [i_6];
                            var_22 = ((/* implicit */unsigned int) ((arr_12 [i_0] [i_0] [17LL] [i_0] [(_Bool)1] [(unsigned short)16]) + (((/* implicit */long long int) (+(1763374627U))))));
                            var_23 = ((/* implicit */unsigned long long int) ((-7228963093827105803LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */long long int) (-(arr_21 [i_0] [i_6] [i_2] [i_2] [i_6] [i_6])));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */int) ((((1763374631U) >> (((arr_12 [i_0] [i_0] [i_0] [(short)19] [i_0] [i_0]) + (66069969158301031LL))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    arr_27 [i_1] [(unsigned short)18] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))));
                    var_26 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                    var_27 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_1]))) < (var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_17 [i_1]))))) : (arr_0 [i_0])));
                }
            }
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_35 [i_9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_8] [i_9])) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_9] [i_10])) : ((~(((/* implicit */int) (signed char)44))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_8] [i_1] [i_8] [i_8])))))));
                            arr_36 [i_0] [(signed char)1] [9U] [i_9] [i_1] = ((/* implicit */unsigned char) (-(arr_2 [i_1] [i_0])));
                        }
                    } 
                } 
                var_29 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_1] [i_1] [(unsigned char)1] [i_8])))))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1] [i_1]);
                    var_31 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_11]);
                }
                arr_41 [19] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [(signed char)12] [i_8] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_4)))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((int) 3427484147U)))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                var_34 += ((/* implicit */short) ((((/* implicit */int) arr_25 [10U] [i_1] [i_0] [i_1] [i_1] [i_0])) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_13] [i_13] [i_13]))))));
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_13] [i_14])) : (((/* implicit */int) arr_31 [18U] [i_1] [(signed char)6] [i_14]))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_0] [i_14] [(unsigned char)14])) ? (arr_38 [i_0] [i_0] [i_0]) : (arr_38 [i_0] [i_1] [i_13])));
                        arr_53 [i_13] [i_13] &= ((/* implicit */short) ((arr_50 [i_13]) | (arr_50 [i_13])));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        arr_56 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_13] [i_14])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)));
                        var_36 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_0] [i_0])) < (((/* implicit */int) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_2 [i_1] [i_16])));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)9] [(signed char)9] = ((/* implicit */unsigned long long int) ((short) var_2));
                        arr_61 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_14] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_13] [i_13] [i_13] [i_1] [i_13] [17]))));
                    }
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_20 [i_0]))));
                        var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2531592686U)) ? (2531592662U) : (((92333984U) / (3392950663U)))));
                        var_39 = ((/* implicit */int) arr_2 [i_18] [i_13]);
                        var_40 |= ((/* implicit */short) var_7);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        arr_69 [8ULL] [6] [i_19] [8ULL] |= ((/* implicit */unsigned short) var_8);
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) ((var_2) != (((/* implicit */int) var_6))))) != (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-26)))))))));
                        var_42 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_66 [i_19] [i_14] [i_0] [i_13] [i_0] [i_0]))));
                    }
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (~(-448250673))))));
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                    {
                        arr_72 [i_1] [i_1] = ((/* implicit */short) var_10);
                        var_44 = ((/* implicit */short) ((long long int) arr_46 [i_0] [i_20] [i_0]));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [13LL] [(short)13] [i_20]))) : (arr_12 [2ULL] [2ULL] [i_13] [i_14] [i_20] [i_20])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_3 [i_0] [i_0])));
                        arr_73 [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_63 [i_1] [i_1]);
                        var_46 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)));
                    }
                    for (int i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
                    {
                        var_47 -= ((/* implicit */unsigned long long int) var_10);
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0] [i_1] [i_1] [19LL]))) < (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_13] [i_14] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11793353415602083392ULL)))));
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_0] [i_14] [i_21])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (11793353415602083392ULL)));
                    }
                }
                for (long long int i_22 = 0; i_22 < 22; i_22 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned int) var_6);
                    arr_79 [i_0] [i_0] [i_1] [(unsigned char)10] [i_1] [i_22] = ((/* implicit */short) 1763374623U);
                    var_51 ^= ((/* implicit */unsigned int) 4898839877193349685ULL);
                    var_52 = arr_71 [i_0];
                }
                var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [6U]) : (1763374633U)));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    for (short i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        {
                            var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            arr_85 [i_0] [(signed char)5] [i_1] [i_1] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (arr_18 [i_0] [i_1] [i_0] [4LL] [(signed char)18] [i_23]) : (((((/* implicit */_Bool) (short)-1)) ? (arr_67 [i_23] [i_1] [i_1] [i_23] [i_1] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (signed char i_25 = 0; i_25 < 22; i_25 += 1) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_27 = 0; i_27 < 22; i_27 += 2) 
                    {
                        arr_95 [i_25] [i_26] [i_25] [(unsigned short)6] [i_25] = ((/* implicit */unsigned int) var_3);
                        arr_96 [i_0] [i_25] [i_26] [i_25] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) % (8U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25046)) % (((/* implicit */int) (short)11129)))))))) ? (max((((/* implicit */unsigned long long int) (short)5026)), ((-(3007471174312020583ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_78 [i_25] [i_27])))))))))));
                        var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) (-(min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_81 [i_0] [i_0] [i_0] [i_26] [2])))))))));
                    }
                    var_56 = ((/* implicit */long long int) (short)-6718);
                    /* LoopNest 2 */
                    for (unsigned char i_28 = 0; i_28 < 22; i_28 += 2) 
                    {
                        for (unsigned int i_29 = 0; i_29 < 22; i_29 += 3) 
                        {
                            {
                                arr_103 [5ULL] [16LL] [i_25] [i_25] [(_Bool)1] [8ULL] [i_29] = ((/* implicit */unsigned long long int) arr_42 [i_26] [i_25]);
                                var_57 = ((/* implicit */unsigned long long int) min((var_57), ((((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)11] [i_28])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))), (((1ULL) << (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((long long int) 14816738125390415166ULL)))))));
                                var_58 = ((/* implicit */long long int) (+(((/* implicit */int) arr_81 [i_0] [19LL] [i_26] [i_28] [16LL]))));
                                arr_104 [i_25] = ((/* implicit */short) ((_Bool) var_10));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_30 = 0; i_30 < 22; i_30 += 3) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL)));
                                var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_57 [i_0] [i_31])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_42 [i_0] [(unsigned short)4])))))))));
                                var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)5013)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_62 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 523264U)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)65531))))) ? (arr_76 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)16376)))))));
        /* LoopNest 3 */
        for (unsigned short i_32 = 0; i_32 < 22; i_32 += 2) 
        {
            for (unsigned long long int i_33 = 0; i_33 < 22; i_33 += 3) 
            {
                for (short i_34 = 0; i_34 < 22; i_34 += 4) 
                {
                    {
                        arr_118 [i_0] [i_0] = ((/* implicit */long long int) var_13);
                        arr_119 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)240);
                        var_63 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_0] [i_32] [i_32])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_5)), (-448250673)))) : (((((/* implicit */_Bool) arr_32 [(unsigned char)6] [i_32] [i_34])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_50 [i_32]))))));
                        var_64 = ((/* implicit */short) min((((var_11) < (arr_117 [i_0] [i_32] [i_34] [i_34]))), (((((/* implicit */_Bool) max((2ULL), (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_112 [i_0] [i_32] [i_33])), (var_7))))))));
                        var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) var_6)) ? (5632425508425828043LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_32] [3]))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_35 = 0; i_35 < 22; i_35 += 2) 
        {
            for (unsigned int i_36 = 0; i_36 < 22; i_36 += 4) 
            {
                {
                    var_66 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((arr_65 [i_0] [(_Bool)1] [i_35] [i_35] [i_35] [i_35] [i_36]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */int) (unsigned char)127)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)1))))));
                    var_67 = ((/* implicit */short) ((((((/* implicit */int) (short)-5047)) + (2147483647))) << (((((/* implicit */int) arr_82 [i_36] [i_35] [i_35] [10ULL] [i_0])) - (176)))));
                    arr_124 [i_0] [i_0] [(short)20] = ((/* implicit */short) var_1);
                    arr_125 [i_36] [i_35] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) 5632425508425828028LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (5632425508425828049LL)))));
                    var_68 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0] [i_35])) : (((/* implicit */int) arr_8 [i_0] [i_0]))))) < (((((/* implicit */_Bool) arr_50 [i_35])) ? (min((var_7), (((/* implicit */long long int) arr_115 [i_0] [(unsigned short)11] [i_36])))) : (((((/* implicit */_Bool) arr_70 [(signed char)18] [i_35] [i_35] [i_0] [i_0])) ? (arr_54 [i_0] [i_0] [i_35] [(short)13] [i_36]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_35] [i_0] [i_36] [8U])))))))));
                }
            } 
        } 
    }
    var_69 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)104)) || (((/* implicit */_Bool) 5632425508425828043LL)))))))));
}
