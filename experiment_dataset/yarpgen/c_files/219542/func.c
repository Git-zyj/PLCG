/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219542
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_1)) : (var_13)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) arr_0 [(_Bool)1] [i_0]);
        arr_4 [i_0] [4] = ((/* implicit */unsigned char) var_11);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] = arr_1 [i_0];
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_0 [i_2] [i_1]))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_3])))))))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(unsigned char)12] [i_2]))))))));
                                var_20 = ((/* implicit */unsigned char) var_13);
                                var_21 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_2]);
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_4))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2]))) : (arr_7 [i_0 - 1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = arr_7 [i_1] [i_0 + 1];
                        arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [1ULL]);
                        var_25 = ((/* implicit */signed char) arr_2 [i_0 + 2]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((arr_13 [i_0] [i_2] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0]))))) : (var_8)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2] [i_7])) : (((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_2] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_8 [i_7] [i_0 + 1])) : (((/* implicit */int) arr_12 [(short)8] [i_1] [i_2] [i_6] [i_7] [i_7])))))) : (((/* implicit */int) arr_8 [i_0] [(signed char)12])))))));
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)65531))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((var_9) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_6])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [2])))))) : (arr_23 [i_1] [i_2] [i_6])))));
                            var_28 = ((/* implicit */int) arr_9 [i_0] [i_6] [i_7]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_29 &= ((/* implicit */_Bool) var_4);
                            arr_29 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 1] [i_1] [i_2] [12LL])))))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) arr_16 [i_2] [i_6]))))))) ? (((/* implicit */long long int) var_1)) : (arr_16 [i_0] [i_1])));
                            var_30 = ((/* implicit */long long int) var_6);
                        }
                        arr_30 [i_0] [i_0] [i_2] [i_6] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_6))));
                        var_31 += ((/* implicit */unsigned long long int) var_12);
                    }
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            arr_38 [i_0] [i_1] [i_2] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */unsigned long long int) 16948497)) : (7846064016126753026ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))));
                            var_32 = ((/* implicit */long long int) var_15);
                            arr_39 [i_0] [i_0 - 1] [i_0] [(unsigned char)5] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 10600680057582798611ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))) : (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_9]))) : (arr_34 [i_2] [i_2]))) : (var_3))) : (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_33 [i_2])))))));
                            var_33 = ((/* implicit */unsigned long long int) arr_18 [i_1]);
                            var_34 = ((/* implicit */unsigned short) var_4);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            arr_42 [9ULL] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) arr_27 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);
                            var_35 ^= arr_25 [i_2] [i_1] [i_2] [i_2] [i_11];
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) var_0))));
                            var_37 = ((/* implicit */_Bool) var_12);
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [4ULL])) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_2))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16948497)) ? (((/* implicit */int) (signed char)-104)) : (0)))) ? (arr_18 [i_1]) : (((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [i_2] [i_9] [i_12])))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16294)) ? (((/* implicit */int) (unsigned short)46721)) : (((/* implicit */int) (signed char)-47))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_44 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_2] [(unsigned char)7] [(unsigned char)12])))))) ? (((/* implicit */long long int) var_4)) : (var_8))) : (((((/* implicit */_Bool) arr_12 [(signed char)12] [i_1] [i_2] [i_9] [i_13] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13)))));
                            var_41 *= ((/* implicit */long long int) arr_15 [i_0 + 2] [(unsigned char)10] [i_2] [i_0 + 2] [i_2]);
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */signed char) var_15);
                            var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [(signed char)0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [i_1])) ? (arr_14 [i_0] [i_1] [i_2] [i_9] [i_1]) : (((/* implicit */long long int) var_1))))))) ? (((/* implicit */unsigned long long int) var_1)) : (var_7));
                            var_44 = ((/* implicit */short) arr_48 [i_0] [i_0] [(short)1] [i_0] [i_14 - 1]);
                        }
                        var_45 = var_8;
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (unsigned short i_17 = 3; i_17 < 12; i_17 += 3) 
                {
                    {
                        arr_56 [i_0] [i_0] = ((/* implicit */unsigned int) var_15);
                        var_46 -= ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
            var_47 = ((/* implicit */int) var_8);
            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_0 + 2] [i_0])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) ? (var_1) : (((((/* implicit */_Bool) arr_41 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_24 [(short)3] [i_15] [(signed char)4] [(signed char)8] [i_15] [i_15])) : (((((/* implicit */_Bool) arr_21 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_15])) : (((/* implicit */int) var_9))))))));
        }
        /* vectorizable */
        for (unsigned short i_18 = 3; i_18 < 12; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
            {
                arr_62 [i_0] [i_18 - 3] = ((/* implicit */unsigned short) arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]);
                var_49 += ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        {
                            arr_69 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_55 [i_18 - 2] [i_20])) ? (((/* implicit */int) arr_61 [i_20] [i_19] [i_18])) : (((/* implicit */int) var_9)))) : (var_4)));
                            arr_70 [i_0] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0]))) : (var_14));
                            var_50 = ((/* implicit */int) arr_8 [i_0] [i_21]);
                        }
                    } 
                } 
            }
            for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 3) 
                {
                    var_51 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_18 - 1] [i_22] [i_23] [i_18] [i_22])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_46 [i_23] [i_23] [i_23 - 1] [i_23 + 1] [i_23] [i_23] [i_23]))))) : (arr_32 [i_0] [i_18] [i_22] [i_23 + 1] [i_23 + 3])));
                    var_52 = ((((/* implicit */_Bool) arr_73 [(unsigned char)2] [i_18] [10ULL] [(signed char)6])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_58 [i_0] [i_22] [i_23 + 3])));
                    arr_75 [(_Bool)1] |= ((/* implicit */unsigned short) var_5);
                }
                for (long long int i_24 = 0; i_24 < 13; i_24 += 3) 
                {
                    var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) var_10))));
                    var_54 |= var_10;
                }
                var_55 = ((/* implicit */long long int) arr_47 [7ULL] [7ULL] [i_0] [7ULL] [(unsigned short)7] [i_22]);
                arr_78 [(unsigned char)4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30741)) ? (-8570995076685255141LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20016)))));
            }
            arr_79 [i_18] [i_0] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_72 [i_0] [(unsigned char)4] [i_0 + 1])) : (arr_23 [i_0] [i_0] [i_0 + 1])));
        }
    }
}
