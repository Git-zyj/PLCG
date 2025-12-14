/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211716
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
    var_10 = max((((/* implicit */int) ((signed char) var_5))), (((((/* implicit */_Bool) var_1)) ? (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (var_5))));
    var_11 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))));
    var_12 = ((/* implicit */unsigned short) ((signed char) (-9223372036854775807LL - 1LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -5540787306702969274LL)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)1))));
                arr_8 [i_1 + 3] [i_1 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 18446744073709551613ULL))) ? (18446744073709551603ULL) : (max((((/* implicit */unsigned long long int) (unsigned short)65527)), (11937180648734077604ULL)))));
                var_14 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_0])) : (((/* implicit */int) (unsigned char)253)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1 + 4])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)8))))))) ? ((-(((/* implicit */int) arr_0 [i_1 + 1])))) : (((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_0] [i_1]))) ? (((/* implicit */int) arr_1 [i_0])) : (((arr_2 [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)115)))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            arr_17 [i_2] [i_2] [i_2] [i_2] [2] = (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2])) : (((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_3])) ? (((/* implicit */int) arr_4 [i_4] [i_2] [(short)17])) : (((/* implicit */int) arr_11 [i_2] [i_1 + 2] [i_1 + 2])))))));
                            arr_18 [i_0] [3U] [4] [i_2] [i_0] = arr_4 [i_1 - 1] [i_1 + 2] [i_1 + 1];
                            var_15 *= ((unsigned int) ((((/* implicit */int) (short)31164)) - (((/* implicit */int) (unsigned short)65516))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) ((_Bool) arr_21 [i_1 + 3] [i_2] [3]));
                            var_17 += ((/* implicit */short) max((((unsigned long long int) (~(((/* implicit */int) arr_0 [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 0ULL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)16])) ? (((/* implicit */int) arr_21 [(short)12] [i_0] [i_5])) : (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) arr_13 [i_0])) ? (-9LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 4] [i_1 + 4]))))))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)9764))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2]))) : (arr_19 [i_1 - 1] [i_2] [i_3] [i_5])))))) ? (((/* implicit */unsigned long long int) max((((long long int) arr_15 [i_1 + 3] [(_Bool)1] [i_1 + 3] [i_1 + 3] [(_Bool)1] [i_1 + 3] [i_0])), ((~(-5540787306702969305LL)))))) : (((unsigned long long int) ((arr_1 [i_0]) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8] [i_0] [(signed char)4])))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) min((((/* implicit */int) (short)(-32767 - 1))), ((-2147483647 - 1))));
                            var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551605ULL))))));
                        }
                        arr_24 [i_2] [i_1 + 1] = ((/* implicit */long long int) arr_5 [i_1 + 3] [i_1 + 3] [i_1 + 4]);
                        arr_25 [i_3] [i_2] [i_2] [i_2] [5ULL] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 3] [i_2])) ? (((/* implicit */int) arr_7 [i_1 + 4] [i_1 + 4] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_2] [i_1 + 1] [i_3])))));
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [(short)1] [i_2] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0])))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) : (((/* implicit */unsigned long long int) ((int) arr_13 [i_1 + 3])))));
                    var_22 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_1 + 1] [i_1 + 1] [(unsigned short)13] [i_8] [i_1 + 1] = ((/* implicit */short) ((unsigned short) ((arr_23 [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                                var_23 = ((/* implicit */long long int) arr_1 [i_1 + 3]);
                                var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_20 [6U] [i_0] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_23 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_8] [i_1 + 1] [i_7] [i_8])))))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1])))))));
                            }
                        } 
                    } 
                    arr_34 [i_7] [i_1 + 2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [3ULL] [12ULL])))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                {
                    var_27 ^= ((unsigned short) arr_10 [i_1 - 1] [i_1 + 2] [i_1 + 4]);
                    var_28 = ((/* implicit */unsigned long long int) ((arr_23 [i_1 + 2]) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [(signed char)7] [i_0] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_13 [i_0])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(18446744073709551614ULL)))))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)(-32767 - 1)))) ? (2146435072U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32741)))));
                        /* LoopSeq 3 */
                        for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((signed char) arr_30 [i_12 - 1] [i_12] [i_0] [i_1 + 1] [i_0] [i_0]));
                            arr_43 [i_10] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_1 + 2]) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_12 - 1])))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 17; i_13 += 4) 
                        {
                            var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_1 + 4] [i_1 + 3] [i_1 + 4] [i_1 + 4])) ? (((int) (short)-6)) : (((/* implicit */int) arr_32 [2] [i_1] [4] [i_1 + 4] [i_1]))));
                            var_33 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)65512))))));
                        }
                        for (signed char i_14 = 2; i_14 < 17; i_14 += 2) 
                        {
                            var_34 = ((unsigned long long int) (~(arr_16 [i_0] [i_0] [i_10] [i_11] [i_10])));
                            arr_50 [i_0] [i_0] [(signed char)6] [i_1] [i_14 - 2] &= ((/* implicit */_Bool) ((arr_1 [i_1 + 3]) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_32 [i_0] [i_1 + 1] [i_14 + 1] [i_1 + 1] [i_14 - 1]))));
                            arr_51 [i_1] [i_1] [8LL] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_10] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)0)))) : (arr_19 [i_1 + 3] [(short)14] [i_14 - 2] [i_14 - 1])));
                            arr_52 [i_0] [i_0] [i_10] [i_14 + 1] [i_14 + 1] = ((/* implicit */_Bool) arr_45 [i_1 + 3]);
                        }
                        arr_53 [i_10] [4LL] [i_10] [i_11] [i_10] [(signed char)5] = ((/* implicit */unsigned short) arr_29 [i_0] [i_1 + 3] [i_0] [i_1 + 1]);
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                            var_36 = ((/* implicit */unsigned int) (signed char)112);
                        }
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_1 + 2] [i_10] [i_1 + 4]))));
                        arr_59 [i_0] [(short)10] [i_0] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)18377)) ? (((/* implicit */int) (short)32741)) : (0))) <= ((~(((/* implicit */int) arr_1 [i_0]))))));
                    }
                }
            }
        } 
    } 
}
