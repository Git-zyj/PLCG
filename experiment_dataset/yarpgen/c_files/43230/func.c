/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43230
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_17 |= (+(((/* implicit */int) ((short) (unsigned char)162))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)3803))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                            {
                                var_19 ^= (!(var_16));
                                var_20 = ((/* implicit */unsigned int) var_4);
                                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) arr_3 [i_2 + 1] [i_0]);
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0 - 1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((short) 2118240468U));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)8] [(unsigned char)4]))) + (arr_20 [i_0] [21] [i_1 + 1] [i_5] [i_5] [i_6] [i_7 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))))))));
                            arr_22 [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_7 [i_7 + 1] [i_0 - 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) + (118)))));
                        }
                    }
                    var_24 = ((/* implicit */unsigned char) ((_Bool) 2324282947U));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_27 [i_0] = ((/* implicit */signed char) var_16);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (var_3)))) ? (((/* implicit */int) min((arr_25 [i_0] [i_0] [i_0] [i_0 + 2]), (var_5)))) : ((+(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_28 [i_0] [i_1] [i_1 - 1] [i_8] [i_9] [i_9])));
                        var_26 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_15)))));
                        var_27 = ((/* implicit */unsigned char) min((min((var_9), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0])))))));
                        arr_32 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) var_1);
                    }
                    var_28 = ((/* implicit */signed char) -6180651429942422313LL);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) arr_15 [i_0] [i_0]);
                        var_30 = min((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */short) arr_31 [i_0 + 2] [i_0] [i_8] [i_8]))))), (min((arr_28 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_8] [i_1 - 1]), (arr_28 [i_0] [(short)21] [i_1 + 1] [i_8] [i_10] [i_10]))));
                        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_29 [0ULL] [(signed char)8])))) ? (((/* implicit */int) arr_29 [(unsigned short)18] [(unsigned short)18])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [8ULL])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_4))), (var_13))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_8])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)20] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3799)))))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 3) 
                    {
                        arr_37 [i_0] [i_1] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_9)))));
                        var_32 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_11 - 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_7 [i_11 - 3] [i_1 - 1])))));
                        var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) -2658919015109743770LL)) ? (((/* implicit */long long int) -572718552)) : (2658919015109743769LL)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_12 = 3; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_34 *= var_15;
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)12] [(signed char)12])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_1])) >= (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned long long int) -1543875776)) : (11581026895079934653ULL))))))));
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (arr_40 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]))))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((unsigned char) -2734660635079980486LL)))));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (6865717178629616963ULL))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (var_8) : (var_8)));
                            arr_45 [i_0 + 2] [i_0] [i_0] [(unsigned char)1] [13U] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) var_13))))));
                        }
                    }
                    for (unsigned int i_15 = 3; i_15 < 20; i_15 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [(short)14] [i_0] [i_15 - 1] [(short)1] [i_8])), (var_3))))));
                        arr_49 [(unsigned short)13] [i_0] [(unsigned short)4] [i_15 - 3] = ((/* implicit */signed char) var_6);
                        arr_50 [i_0 - 1] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_36 [i_0] [i_1 + 1] [9ULL] [i_15 - 3])))))))));
                        arr_51 [(unsigned short)14] [i_0] [i_0] [4] = ((/* implicit */short) var_4);
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            arr_56 [i_0] [i_1 - 1] [i_8] [i_15] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_44 [i_0 - 1] [i_15 - 1]) : (((/* implicit */long long int) var_6)))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (_Bool)1)))))));
                            var_42 = ((/* implicit */signed char) arr_7 [i_15] [i_16]);
                        }
                    }
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        arr_62 [(_Bool)1] [i_0] [i_0] [21] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned char) -1911007470236216905LL))))) ? (((((/* implicit */_Bool) ((short) arr_14 [i_0] [(_Bool)1]))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned char) var_6))))) : (((/* implicit */int) var_12))));
                        var_44 = ((/* implicit */unsigned short) (~(((min((var_11), (var_11))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_15))))))));
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15453784829255039142ULL))))));
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    arr_65 [i_0] [17LL] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_52 [i_0] [i_1 + 1]))));
                    var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 861480722U)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [5LL] [5LL] [i_0])) : (((/* implicit */int) (unsigned char)12))))), (var_2)))));
                }
            }
        } 
    } 
    var_47 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (var_6) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) var_0)))))))));
    var_48 = ((/* implicit */short) var_2);
    var_49 = ((/* implicit */int) var_9);
}
