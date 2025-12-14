/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49267
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)5)), ((+(((/* implicit */int) ((unsigned short) (signed char)-11)))))));
                arr_4 [i_0] [i_0] [0ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) < (((((/* implicit */_Bool) (short)5469)) ? (((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_0])) : (0)))))) % (min((((/* implicit */int) ((_Bool) var_12))), (((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1] [i_1])) ? (-15) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))));
                arr_5 [i_1] = ((/* implicit */signed char) var_7);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)18]))) >= (arr_0 [i_0]))))) & (arr_0 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)123))))));
                    var_17 = (unsigned char)136;
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_1] [i_3] &= ((/* implicit */unsigned long long int) var_5);
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1] [8U] [i_3])) - (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                        }
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_23 [i_6] [i_4] [21] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((-11) * (((/* implicit */int) arr_13 [i_0] [i_1] [i_6])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [(short)13] [i_6])) && (((/* implicit */_Bool) var_6)))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))));
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) 576460752303423487LL)) ? (((/* implicit */int) arr_3 [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_4] [i_6] [(unsigned char)14])))) : (((/* implicit */int) (signed char)8))));
                            arr_24 [i_0] = ((/* implicit */unsigned short) arr_11 [i_1] [i_4] [i_1]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_3] [i_7] [i_7] = ((/* implicit */signed char) (-(arr_16 [i_7] [i_3] [10LL] [i_0] [i_0])));
                        arr_28 [i_0] [i_1] [i_0] |= ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_3] [(_Bool)1])))) ? ((-(-2))) : (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)48930)))));
                    }
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (-(((1) + (((/* implicit */int) arr_2 [6ULL] [i_1] [i_1]))))));
                                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_9] [i_8] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)54539))));
                                arr_34 [i_9] [i_1] [i_3] [i_8] [i_9] = ((/* implicit */int) arr_33 [i_0] [i_0] [i_3] [i_8] [i_8] [i_9] [i_9]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_7 [i_1]))));
                        var_25 ^= ((/* implicit */signed char) (-((+(var_11)))));
                    }
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_1] [(short)15]));
                        var_26 *= ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) != (((/* implicit */int) ((signed char) (unsigned short)16606)))));
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_44 [i_0] [i_1] [i_12] [i_0] = ((/* implicit */unsigned char) ((long long int) ((short) ((((/* implicit */_Bool) 3)) ? (10871282599525954169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))));
                        arr_45 [i_0] [(short)5] [i_1] [i_1] [i_12] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_26 [i_0]) ? (((/* implicit */long long int) var_11)) : (-5661831303811594187LL)))) ? (((/* implicit */int) arr_40 [i_0] [i_12] [i_12] [i_1])) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_29 [(unsigned short)12]) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_12] [i_13] [i_13] [i_13]))))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (2147483647)))) | (var_3)))));
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */int) (unsigned short)16605)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_12] [i_12] [i_0] [i_0])))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))))))))) > (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (-5661831303811594199LL) : (((/* implicit */long long int) min((((/* implicit */int) var_2)), (-2044722567))))))));
                        arr_46 [i_1] [i_12] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -5661831303811594193LL))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) arr_42 [i_1]))))))));
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) (signed char)-6);
                            arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)1)) << (((/* implicit */int) (signed char)15))));
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_0] [i_1] [i_12] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)90)) : (0)));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_1]);
                            arr_56 [i_0] [i_1] [i_15] [11U] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_11 [14ULL] [14ULL] [i_15]))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)15)))));
                        arr_59 [i_0] [i_1] [i_16] [i_16] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-51)), (-1958479217)));
                        arr_60 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_47 [i_1] [i_1] [10] [i_16] [i_0]) ^ (((/* implicit */unsigned int) arr_29 [i_0]))))) - ((~(arr_18 [i_0] [(_Bool)1] [i_16])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        var_30 -= ((/* implicit */short) (-(((/* implicit */int) arr_57 [i_1]))));
                        arr_63 [i_12] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_12] [i_1] [i_17])) || (((/* implicit */_Bool) arr_35 [i_17] [i_12] [i_1] [i_0]))));
                        arr_64 [i_0] [i_0] [i_0] [6] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_40 [i_0] [i_1] [i_12] [i_17]))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)-104)))))));
                        var_31 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                    }
                }
                for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) /* same iter space */
                {
                    arr_67 [i_0] [21] [i_1] [i_18] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_1] [i_18] [i_18])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_18] [i_18] [i_1] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 21ULL))) ? (((((/* implicit */_Bool) -8)) ? (-2147483647) : (((/* implicit */int) (signed char)13)))) : (((/* implicit */int) ((signed char) -8)))))) : (min((((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21559))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-60)) + (((/* implicit */int) var_14)))))))));
                    var_32 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)-10570)), ((((_Bool)0) ? (1034133559U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_0] [i_1] [8])))))));
                }
            }
        } 
    } 
    var_33 -= var_8;
}
