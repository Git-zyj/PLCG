/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218186
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            arr_11 [i_0] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = var_9;
                            var_14 = ((/* implicit */long long int) max((var_14), (((((arr_3 [i_4] [i_1] [i_0]) + (9223372036854775807LL))) >> (((-982828051) + (982828061)))))));
                            arr_12 [(unsigned short)8] [i_0] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) -982828063)) ? (arr_7 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4]) : (((/* implicit */int) arr_6 [i_0]))))) + ((+(arr_0 [i_1]))));
                            var_15 = ((/* implicit */int) arr_0 [i_0]);
                        }
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_15 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */long long int) var_5)), (var_12))))), (-1891502114122990953LL)));
                            var_16 = ((((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [(signed char)2])))) * (arr_14 [i_0] [i_1] [(signed char)0] [i_2] [i_2] [i_5]));
                            arr_16 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */int) var_8)), (-982828076)))), (min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_5])), (arr_14 [3] [i_3] [i_3] [i_2] [i_1] [(_Bool)1])))));
                        }
                        arr_17 [i_0] [6LL] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [8LL] [i_3])) || (((/* implicit */_Bool) -434017795)))) ? (var_4) : (min((((/* implicit */int) (signed char)-109)), (32767)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))))))))) : (((long long int) var_12))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (arr_1 [i_0]))))));
                        arr_20 [i_0] = ((/* implicit */unsigned int) arr_8 [i_6] [i_0] [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((264941060) % (982828051)))) ? (arr_3 [i_0] [(unsigned short)4] [(unsigned short)4]) : (((/* implicit */long long int) ((((((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_7])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)16320)) - (16320))))))))) ? ((+(982828075))) : (((/* implicit */int) (_Bool)0))));
                        arr_24 [i_7] [i_7] [i_0] &= ((/* implicit */signed char) arr_18 [i_0] [i_0]);
                        var_19 = ((/* implicit */int) min((var_19), (min((((-32768) ^ (982828051))), (((/* implicit */int) var_3))))));
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            var_20 = (-(((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (var_1)));
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1851441726)) ? (-982828076) : (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */int) var_6);
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_0] [i_10] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_10] [(_Bool)1] [(_Bool)1] [i_1] [i_0])) / (1190473515)));
                            arr_33 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) -982828063));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_8] [i_8] [i_10])) - (((int) arr_22 [(unsigned short)4] [6] [i_2] [i_2]))));
                        }
                        arr_34 [i_0] [i_0] [i_0] [(signed char)3] = ((/* implicit */_Bool) 5759644094662339243LL);
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((var_0), (((/* implicit */short) ((arr_9 [9] [i_1] [(unsigned short)8] [i_8] [(_Bool)1]) == (((/* implicit */long long int) ((int) 5759644094662339243LL)))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1735541548) : (((/* implicit */int) arr_22 [i_11] [i_8] [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_8] [3LL]))))) : (((/* implicit */int) max((var_13), (arr_22 [i_0] [i_0] [(_Bool)1] [i_0]))))));
                            arr_37 [i_0] [i_0] [i_0] [(short)7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) & (((((/* implicit */long long int) arr_18 [i_2] [i_2])) / (9223372036854775807LL)))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -32768);
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_12 + 1] [i_12] [i_12 + 1])) ? (arr_28 [i_1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1]) : (((/* implicit */int) var_13)))));
                            var_28 = (+(((-32767) + (((/* implicit */int) (_Bool)1)))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) (~((+(-32767)))));
                            var_30 *= ((/* implicit */unsigned int) arr_1 [i_1]);
                        }
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_2] [i_1] [i_1] [4LL])) ? (((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2])) : (arr_28 [i_0] [i_1] [i_2] [0] [0])))) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) 907498881)) && (((/* implicit */_Bool) 32767))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                arr_48 [i_15] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32768)) ? (((/* implicit */long long int) -1916877054)) : (9223372036854775807LL)))));
                                arr_49 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (982828063)))) < (var_9))));
                                var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(-5759644094662339263LL))))))));
                                arr_50 [0LL] [0] [(short)2] [i_2] [i_1] [i_0] [0LL] |= ((/* implicit */signed char) max((((/* implicit */int) arr_10 [6])), (arr_39 [i_15] [0] [i_14] [i_1] [i_1] [(signed char)1] [i_14 - 2])));
                                var_33 = min((((/* implicit */int) (!(arr_27 [i_0] [i_1] [i_0] [i_14 + 1] [i_1] [i_1] [i_2])))), (var_11));
                            }
                        } 
                    } 
                    var_34 ^= arr_6 [(short)10];
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */_Bool) var_6);
}
