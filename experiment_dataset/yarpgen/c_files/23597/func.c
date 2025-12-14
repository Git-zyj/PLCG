/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23597
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
    var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-2890827615221915648LL))) / (((((/* implicit */_Bool) 2890827615221915649LL)) ? (-6793442509602465443LL) : (((/* implicit */long long int) 2608218027U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) -6793442509602465437LL))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) -2890827615221915647LL)) ? (arr_2 [i_0]) : (18446744073709551610ULL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) (unsigned char)126);
                            arr_17 [i_4] [i_3 - 2] [7LL] [i_1] [7LL] [i_0] = ((unsigned long long int) (short)22839);
                            var_20 |= ((/* implicit */int) (_Bool)1);
                            var_21 = ((/* implicit */long long int) ((unsigned long long int) arr_8 [i_1] [i_3 + 2] [i_3] [i_3]));
                        }
                        for (short i_5 = 1; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_3] [i_3 - 1] [i_3] [i_2])) ? (((/* implicit */int) ((short) (unsigned short)64228))) : (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) arr_4 [i_0]);
                            var_25 = ((arr_13 [9] [i_6 - 1] [i_6 + 1] [i_3 + 1] [i_3 + 2] [i_1]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [(_Bool)1] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2890827615221915644LL)))));
                        }
                        arr_24 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [(_Bool)1] [i_1] [(_Bool)1]))) ? (((long long int) 18446744073709551610ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 14702315125177436548ULL))))));
                        arr_25 [i_0] [i_0] [7ULL] [(_Bool)1] [i_3] = ((/* implicit */short) 18446744073709551610ULL);
                    }
                    arr_26 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) 1686749287U);
                    var_26 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13632882015003181069ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (-6793442509602465412LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        for (signed char i_8 = 4; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned long long int) arr_8 [i_7 + 1] [i_8 - 4] [i_8 - 1] [i_8])))));
                                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((_Bool) -2890827615221915649LL)))));
                                var_30 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)43085)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                                var_31 ^= ((/* implicit */signed char) ((short) (_Bool)1));
                                arr_32 [(unsigned char)11] [i_7] = ((/* implicit */signed char) ((unsigned long long int) arr_19 [i_0] [i_2] [i_2] [i_7 + 1] [i_8]));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1170830758)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) (signed char)-124)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            for (unsigned int i_10 = 3; i_10 < 14; i_10 += 3) 
            {
                {
                    arr_38 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_20 [i_10 + 2] [i_10 + 2] [i_10 - 3] [i_10] [i_10 + 2]);
                    var_32 = ((/* implicit */_Bool) 0LL);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_33 &= ((/* implicit */signed char) ((unsigned char) arr_35 [i_12] [i_11] [i_9]));
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (((/* implicit */int) arr_15 [i_12] [i_10] [i_10 - 1] [i_10] [i_10] [i_10])) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
                                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((unsigned short) ((long long int) arr_3 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        arr_46 [i_13] = ((/* implicit */unsigned long long int) (signed char)119);
        /* LoopNest 2 */
        for (long long int i_14 = 4; i_14 < 12; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                {
                    var_36 = ((/* implicit */short) 2147483647);
                    arr_53 [i_14] [i_14] [i_13] [i_14] = ((/* implicit */_Bool) ((long long int) 1686749261U));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        var_37 ^= ((/* implicit */short) ((long long int) ((unsigned char) arr_30 [i_16 + 2] [i_16 + 2] [i_16] [i_16 + 2] [i_14 - 3] [i_14] [i_14 - 3])));
                        var_38 |= ((/* implicit */signed char) (unsigned short)65535);
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1170830753)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (6793442509602465442LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_14] [i_14 - 4])) ? (((/* implicit */int) arr_23 [i_14] [i_14])) : (((/* implicit */int) arr_40 [i_14] [i_14]))))) : (6411782145414888445ULL)));
                    }
                    for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        var_40 += ((((/* implicit */_Bool) max((-6793442509602465432LL), (((/* implicit */long long int) arr_56 [(signed char)6] [i_14 + 1] [(signed char)6] [(signed char)6]))))) ? (((/* implicit */int) min(((short)-32757), (((/* implicit */short) arr_44 [i_14] [i_14]))))) : (((/* implicit */int) max((((unsigned char) arr_57 [12ULL])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)158)) && (((/* implicit */_Bool) arr_3 [i_13])))))))));
                        var_41 = ((/* implicit */short) ((long long int) 1ULL));
                        arr_59 [i_13] [i_14] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) arr_5 [i_17] [i_14] [i_13]);
                    }
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) 9218949168584496145LL))));
                        var_43 = ((/* implicit */long long int) min((var_43), (max((((/* implicit */long long int) ((int) 5ULL))), (((((/* implicit */_Bool) arr_6 [i_14 - 4] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14 - 4] [(unsigned short)6] [i_15] [i_15] [i_15]))) : (6793442509602465448LL)))))));
                        arr_63 [i_14] [i_14] [i_14] [i_13] = ((/* implicit */long long int) ((unsigned short) 9087524925089795099LL));
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            arr_68 [i_18] [i_14] [i_14] [i_13] = ((/* implicit */int) ((unsigned short) max((18446739675663040512ULL), (((/* implicit */unsigned long long int) 9087524925089795078LL)))));
                            arr_69 [10LL] |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((1851582915) % (((/* implicit */int) (unsigned short)10598))))) ? (((/* implicit */unsigned long long int) ((long long int) 18080656508475253492ULL))) : (min((arr_16 [i_13] [i_13] [i_13] [i_14] [11LL] [i_18] [i_19]), (((/* implicit */unsigned long long int) (unsigned short)52332)))))));
                            var_44 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52341)))));
                        }
                        for (unsigned int i_20 = 3; i_20 < 10; i_20 += 2) 
                        {
                            arr_72 [i_14] [i_18] [i_14] [i_14 + 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_40 [i_13] [i_13]))) ? (-2492069711020916238LL) : (((/* implicit */long long int) ((int) 9223372036854775779LL)))))) ? (((unsigned long long int) min((0ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) : (min((((/* implicit */unsigned long long int) ((_Bool) -812399467893792090LL))), (min((18446744073709551615ULL), (18080656508475253492ULL)))))));
                            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_36 [i_15])), (963543422844602686LL)))), (arr_34 [i_20 - 1] [i_14 - 2] [i_15])))))));
                            arr_73 [i_18] [i_14] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (min((((/* implicit */unsigned long long int) (signed char)113)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13203))) | (arr_2 [i_14])))))));
                        }
                        arr_74 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned long long int) max(((unsigned short)65517), ((unsigned short)13201)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 13; i_22 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) (unsigned short)4);
                                arr_82 [i_22] [i_14] [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) ((short) 1ULL));
                                arr_83 [i_22] [i_14] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) arr_23 [i_14] [(unsigned char)3]);
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_13] [i_14 - 1] [8ULL])), (8257089359674440109ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_27 [i_15] [i_14 - 2] [i_13] [i_13]))))) : (((((/* implicit */_Bool) 9647861283010524109ULL)) ? (arr_35 [i_13] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)-21535))))))), (((/* implicit */long long int) arr_78 [i_14] [i_14] [i_14] [i_14 - 1]))));
                }
            } 
        } 
    }
}
