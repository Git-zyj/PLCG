/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207687
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) (-(890383611828764476ULL)));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [9U] [19U] [i_2] [19U]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967274U)) ? (var_13) : (var_7)))))))) < (((unsigned int) ((((/* implicit */_Bool) (short)-4331)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        var_15 ^= ((/* implicit */unsigned long long int) ((((((4294967262U) / (22U))) & (4294967250U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((signed char) var_14)))));
                        arr_17 [i_1] [18LL] [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
                        var_17 = ((/* implicit */unsigned char) arr_12 [(signed char)9] [i_1] [i_4 + 2] [i_2 - 1] [i_1] [i_0 + 1]);
                        arr_18 [i_0 + 1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [15U] [i_0] [i_2 + 1] [i_2 + 1]);
                        arr_19 [i_4] [i_4 + 3] [i_1] [7U] [7U] = ((/* implicit */unsigned int) arr_15 [i_1]);
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_2] [i_5] &= -3040876215263319915LL;
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(4294967253U)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4045708352U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1]))) : (2631989389U))), (((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_2 + 3]))))) : (((134217728ULL) >> (((4194303ULL) - (4194263ULL)))))));
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)59))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 4045708352U))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 1) 
                    {
                        arr_26 [7LL] [i_1] = arr_10 [i_1];
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) arr_16 [i_6])), (arr_3 [i_0] [i_2 + 3] [i_0])))))));
                        arr_27 [i_0] [i_1] [i_0] [i_0 - 1] [19LL] = ((/* implicit */unsigned int) ((unsigned char) arr_24 [i_6 - 1] [i_2 - 1] [i_1] [i_1] [i_0 - 1] [i_0 - 1]));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned char i_8 = 1; i_8 < 23; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned int) 18446744073709551614ULL);
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) 31U))));
                                var_24 = ((/* implicit */long long int) ((short) 4227858432U));
                            }
                            arr_37 [i_1] [i_1] [i_7] = (-(((((/* implicit */_Bool) ((short) arr_12 [i_8] [i_1] [(signed char)14] [19ULL] [i_1] [8LL]))) ? (((((/* implicit */_Bool) 8049604760804239435LL)) ? (-5176609148043411532LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23826))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 603904107U)))))));
                            arr_38 [i_8] [i_1] [i_1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1])) >> (((arr_14 [i_7] [i_1] [i_1] [i_0]) - (3757634893U))))))) : (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1])) >> (((((arr_14 [i_7] [i_1] [i_1] [i_0]) - (3757634893U))) - (961082487U)))))));
                            var_25 = ((/* implicit */unsigned char) min((arr_16 [i_0 - 2]), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)214)) && (((/* implicit */_Bool) 18446744073707454464ULL)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    arr_41 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 4294967253U);
                    var_26 += ((/* implicit */short) (~(arr_35 [i_0] [i_0])));
                    arr_42 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_35 [i_0 - 1] [i_0 - 2])))) ? (((/* implicit */int) ((signed char) -7394424893913909292LL))) : (((/* implicit */int) var_0))));
                    arr_43 [i_1] [i_1] = ((long long int) 2381954177821076956LL);
                }
                /* vectorizable */
                for (unsigned int i_11 = 3; i_11 < 21; i_11 += 4) 
                {
                    arr_46 [i_0] [i_11] |= ((/* implicit */signed char) ((long long int) arr_28 [i_0 + 1] [i_0 - 2] [i_1] [i_11 - 2]));
                    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2297904262212395352LL)) ? (-4303424070544246209LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))));
                    arr_47 [2ULL] [i_1] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                    /* LoopSeq 4 */
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        arr_50 [i_1] [i_1] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [14U] [i_0] [i_0 - 2] [(unsigned char)2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [3ULL])))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((unsigned long long int) arr_4 [0ULL] [i_11])))))));
                    }
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 3; i_14 < 21; i_14 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_11 [i_14] [i_13] [i_0] [(signed char)19] [i_1] [i_0]);
                            arr_56 [i_0] [i_1] [i_0] [i_0] [i_0] = (-(var_8));
                            var_30 = ((/* implicit */unsigned char) var_13);
                        }
                        arr_57 [i_0] [21LL] [i_0 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_0])) / (((/* implicit */int) var_6))));
                        arr_58 [17LL] [i_1] [i_1] [i_1] [i_1] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) (~(14199644988044013641ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [8ULL] [3ULL])) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned char)230))))) : ((-(4294967252U)))));
                        var_31 = ((/* implicit */unsigned long long int) (~(arr_44 [i_1] [i_11 - 1])));
                    }
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        arr_62 [i_15] [i_1] [i_1] [21U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0 - 2]))) | (arr_11 [i_0] [i_0] [i_11] [i_11 + 1] [i_11] [i_11])));
                        arr_63 [i_1] [i_1] [i_1] [i_11] [i_15] = ((/* implicit */_Bool) 2297904262212395352LL);
                    }
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        arr_66 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) 1662977903U));
                        var_32 = ((unsigned char) (-(((/* implicit */int) arr_1 [i_0] [i_11]))));
                        var_33 = ((/* implicit */_Bool) (short)1);
                        var_34 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_30 [i_1])))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)104))));
                    arr_70 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_61 [i_17] [i_17] [i_17] [i_1] [i_0])))) ? (((/* implicit */int) (short)8348)) : (((/* implicit */int) arr_21 [i_0 - 2] [(_Bool)1] [i_0 + 1] [i_0] [i_0 + 1]))));
                    arr_71 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_25 [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1]);
                    var_36 += ((/* implicit */unsigned char) var_3);
                }
                /* vectorizable */
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) 9223372036854775784LL))));
                    var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_18] [i_1] [0LL] [0LL]))));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */short) var_14);
    var_40 = ((/* implicit */long long int) (_Bool)1);
}
