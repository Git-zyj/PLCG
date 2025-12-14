/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231977
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */int) (unsigned char)91);
                    arr_9 [i_2] [i_1] [i_2 + 1] = -2092580919;
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2] [i_2 + 1]);
                        arr_12 [i_2] = arr_3 [i_3] [i_1];
                    }
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
                            var_16 = ((/* implicit */unsigned char) arr_17 [i_0] [i_2 - 2] [i_2 - 2]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_17 *= ((/* implicit */unsigned char) ((arr_18 [i_0] [i_0] [(signed char)1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_4 - 1]))) : (arr_15 [i_0] [i_1])));
                            arr_21 [i_0] [i_2] [i_0] [i_4] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) : (arr_2 [i_0])));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_2] [i_1] [i_4 + 1] [i_2 + 1] [i_4 + 1] [(unsigned short)8] [i_6])) % (((/* implicit */int) arr_4 [i_4 + 2] [i_1] [i_2 - 2]))));
                        }
                        arr_22 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    }
                    arr_23 [i_0] [i_2] [i_2] = (unsigned char)21;
                }
                for (long long int i_7 = 2; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_11 [i_7 - 2] [i_1] [i_7 - 2] [i_1])))));
                    var_19 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [12U] [i_1])) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_7]))))), (7826526789932605358LL))), (((/* implicit */long long int) (~(min((-2092580919), (((/* implicit */int) arr_27 [i_0] [i_0] [i_0])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_31 [i_8] [i_7] [i_1] [i_8] = ((/* implicit */unsigned char) 3656898478U);
                        var_20 = ((/* implicit */_Bool) arr_0 [8LL]);
                        arr_32 [i_0] [i_8] [i_7 + 1] [i_8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7 - 2] [i_7 - 1])) ? (arr_25 [i_7 + 1] [i_7 - 2] [i_7 - 1]) : (((/* implicit */long long int) -2092580943)))));
                        var_21 ^= arr_13 [i_0] [i_8] [i_7] [(unsigned short)9];
                        /* LoopSeq 3 */
                        for (long long int i_9 = 2; i_9 < 13; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) arr_7 [i_9 - 2] [i_8]);
                            arr_36 [i_0] [i_8] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */signed char) (unsigned char)229);
                            arr_37 [i_0] [i_0] [i_8] [i_0] [(_Bool)1] = ((/* implicit */_Bool) 6717874192641093778LL);
                        }
                        for (signed char i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) ^ (6717874192641093795LL)));
                            var_24 = ((/* implicit */short) var_1);
                        }
                        for (signed char i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
                        {
                            var_25 = max((((int) arr_18 [i_0] [i_1] [i_7 - 1] [i_8])), (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_7 - 1] [i_8])), (arr_34 [i_0] [i_1] [i_8] [i_0] [i_11])))));
                            arr_44 [i_0] [i_1] [i_11] [i_8] [i_8] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) -559507179686590235LL)) ^ (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) 0U))));
                            var_26 = ((/* implicit */signed char) ((long long int) 4294967287U));
                            var_27 = ((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL));
                        }
                    }
                    for (signed char i_12 = 2; i_12 < 13; i_12 += 1) 
                    {
                        arr_47 [i_0] [i_12] [4LL] = ((/* implicit */_Bool) min((max((((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])), (6144))), (((/* implicit */int) (signed char)-32))));
                        arr_48 [(signed char)7] [i_7] [i_7] [(unsigned char)4] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)91)) * (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_12 + 1]))));
                    }
                }
                /* vectorizable */
                for (long long int i_13 = 2; i_13 < 14; i_13 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)255))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        for (int i_15 = 1; i_15 < 14; i_15 += 3) 
                        {
                            {
                                arr_57 [i_13] [i_13] [i_13 - 2] [i_14] [(signed char)7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_40 [i_0] [i_14] [11U] [i_14] [i_15 + 1]))));
                                var_29 = ((/* implicit */_Bool) arr_49 [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_13 [i_13] [i_13] [i_13 - 2] [i_13 - 2]))))))));
                        arr_60 [i_0] [i_16] [i_13] = ((/* implicit */unsigned long long int) (+(9223372036854775807LL)));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((arr_33 [i_13 + 1] [i_1] [i_13] [i_16] [i_1] [i_13] [4ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) : (8ULL))))));
                        var_32 = ((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_13 - 2] [i_13 - 2] [i_0] [i_13 - 1]));
                    }
                    arr_61 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 6150)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_50 [(_Bool)1] [i_1] [i_13 - 1])))) & (((/* implicit */int) arr_3 [i_0] [i_13 - 2]))));
                }
                arr_62 [i_0] [i_0] &= ((/* implicit */unsigned short) arr_35 [i_0] [i_0] [(short)6] [i_1] [i_0] [6U] [(short)6]);
                var_33 = (signed char)-19;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_17 = 3; i_17 < 18; i_17 += 3) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    var_34 ^= ((/* implicit */_Bool) ((int) (+(6717874192641093795LL))));
                    var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_64 [i_17 + 2] [2ULL])) : (((/* implicit */int) arr_64 [i_17 - 3] [(_Bool)1]))));
                    var_36 = ((/* implicit */long long int) (!((_Bool)0)));
                    arr_70 [(signed char)3] [18LL] [i_17] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_17] [i_17])) ? (((/* implicit */int) arr_66 [i_17] [i_17 - 2])) : (((/* implicit */int) (unsigned char)239))));
                    var_37 = ((/* implicit */short) (-(((/* implicit */int) arr_66 [i_17] [(_Bool)1]))));
                }
                arr_71 [i_17] [i_18] [i_17] = ((/* implicit */unsigned char) max((arr_69 [i_17 + 1] [i_18]), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)55))))));
            }
        } 
    } 
}
