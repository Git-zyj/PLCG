/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25772
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 - 3] [i_0] = (+(((/* implicit */int) var_0)));
        var_17 = ((/* implicit */signed char) min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 3])) ^ (((((((/* implicit */int) var_11)) + (2147483647))) << (((4682777537785981143LL) - (4682777537785981143LL))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) var_12);
                var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (-4682777537785981143LL))) << ((((~(((/* implicit */int) (short)-15657)))) - (15648)))));
            }
            for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])))))));
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 24; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (min(((+(arr_7 [i_1] [21ULL] [i_1 - 1]))), (arr_8 [i_1] [i_6] [(signed char)20])))));
                            arr_19 [11LL] [11LL] [i_2] [11LL] [i_1] [0ULL] = (i_1 % 2 == 0) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_1 + 1] [i_1 - 1] [i_1]) << (((((/* implicit */int) (unsigned char)255)) - (255)))))))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_8 [i_1 + 1] [i_1 - 1] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)255)) - (255))))))))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) ((signed char) max((arr_18 [(short)20] [(signed char)14] [i_4] [12LL] [(signed char)14] [i_1 - 1]), (((/* implicit */long long int) 3802523U)))))))));
                            var_23 = ((/* implicit */unsigned short) (~(((max((((/* implicit */unsigned int) -591572473)), (4067110828U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 1] [1]))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_24 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [(unsigned short)9] [i_7] [i_2]))) == (arr_8 [i_1] [i_2 + 2] [(unsigned char)2])));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_2 + 1] [i_2 + 2] [i_1 - 1] [i_1 + 1])) ^ ((~(((/* implicit */int) (_Bool)1)))))))));
                    var_26 = ((/* implicit */short) ((((int) 1108725019U)) < ((~(-1137668982)))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 3])) & (((/* implicit */int) arr_22 [i_2 + 3] [i_2 + 3] [i_7] [i_1 - 1] [i_1 - 1] [i_1]))));
                    var_28 = ((/* implicit */short) ((4291164773U) + (3186242281U)));
                    var_29 = ((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1] [i_1 - 1]);
                }
            }
            arr_25 [i_1] = arr_18 [i_1] [i_2] [i_1] [i_1] [(unsigned char)22] [i_1 - 1];
        }
        arr_26 [(unsigned char)17] [i_1] = arr_6 [i_1 + 1] [i_1];
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (unsigned int i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                {
                    var_30 = arr_7 [i_1] [6] [6LL];
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((-1LL) != (((/* implicit */long long int) (+((~(((/* implicit */int) var_4))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 24; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((min(((+(arr_27 [i_1] [i_12]))), ((-(((/* implicit */int) var_2)))))) & (arr_21 [i_1 + 1] [i_9] [0U] [i_12])));
                                var_33 = ((/* implicit */signed char) var_3);
                                var_34 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_32 [i_10 - 2] [i_10 - 1] [(_Bool)1] [i_10 - 1] [i_10 + 3]))) || ((!(((/* implicit */_Bool) (short)-25164))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            arr_42 [(short)2] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(arr_21 [i_9] [i_9] [i_9] [(signed char)10])))), (((((/* implicit */_Bool) 3802523U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) 3802530U)) ? (4010292919U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))))));
                            arr_43 [(short)2] [(_Bool)1] [i_1] [i_1] [i_10 + 4] [i_9] [(signed char)19] = ((/* implicit */unsigned short) max((max((0), (((/* implicit */int) (signed char)113)))), ((+(((/* implicit */int) arr_22 [i_1] [i_9] [i_10 + 3] [i_13] [7LL] [i_1]))))));
                        }
                        for (signed char i_15 = 4; i_15 < 23; i_15 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned short) (+((~(var_14)))));
                            arr_48 [i_1] [i_9] [i_10 - 1] [i_1] [i_1] [0LL] [i_15 - 3] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_16 [i_10 + 3] [i_1 + 1] [i_1] [i_1] [(signed char)22]))));
                        }
                        for (signed char i_16 = 4; i_16 < 23; i_16 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_16 - 3] [i_1 + 1] [i_10 - 2] [i_16] [i_1])) || (((/* implicit */_Bool) var_14))))) & (((/* implicit */int) (!(((/* implicit */_Bool) -560759750)))))));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))));
                            var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_10 + 3] [i_10 + 4] [i_10] [i_10 + 4] [i_10 + 3])) || ((!(((/* implicit */_Bool) ((int) (short)-20529)))))));
                        }
                        arr_51 [i_1] [i_10] |= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_10 + 4] [i_13] [i_13]))) - (-7925587348842321627LL))), (min((max((8645887280578458704LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) arr_38 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))))));
                    }
                    for (short i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
                    {
                        var_39 = arr_34 [i_17];
                        var_40 += ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) / (1108725019U)))));
                        var_41 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_49 [i_1 + 1] [(unsigned short)24] [i_1] [(unsigned short)24] [(unsigned short)24])))) + (2147483647))) << (((((long long int) min((((/* implicit */unsigned short) (unsigned char)249)), (arr_37 [(signed char)17] [i_9])))) - (249LL)))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) arr_12 [i_9] [4LL] [i_10] [(unsigned short)15])) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_17]) : (((/* implicit */unsigned int) arr_35 [i_17] [i_17] [i_17] [i_17] [i_17])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)15657)))))))) ? ((~(min((512914833102481339LL), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) (-(7))))));
                        var_43 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))) - (arr_28 [i_1 - 1] [i_1 - 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                    for (short i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_19 = 3; i_19 < 23; i_19 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) arr_12 [i_1 - 1] [i_1 - 1] [20] [i_9])), (3186242290U)))));
                            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) 227856468U)) ? (((((((/* implicit */_Bool) arr_44 [i_18] [(unsigned char)11] [i_19 - 2] [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))) * (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_11)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1049781390)) ? (6631202086289083146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [24ULL] [24ULL] [24ULL] [i_18] [i_19]))))))))));
                        }
                        for (signed char i_20 = 3; i_20 < 23; i_20 += 1) /* same iter space */
                        {
                            var_46 = ((/* implicit */unsigned short) max(((~(arr_60 [i_1] [i_20 + 1] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_9] [i_10 + 1] [(short)23] [i_10 - 2])))))));
                            arr_65 [i_1 + 1] [i_1 + 1] [i_10] [i_10] [i_1] = (((-(((/* implicit */int) (unsigned char)255)))) * (((/* implicit */int) ((short) 284674390U))));
                            var_47 += ((/* implicit */short) ((((arr_7 [i_9] [i_9] [24ULL]) + (((/* implicit */long long int) (+(((/* implicit */int) (short)-32755))))))) > (((var_12) - (512914833102481339LL)))));
                        }
                        var_48 = ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) -1918035145)), (1209338690U)))))) ? (-2147483628) : ((~((+(((/* implicit */int) arr_37 [i_1 - 1] [14LL])))))));
                        arr_66 [i_1 + 1] [i_1 + 1] [i_10] [i_1 + 1] [i_18] |= ((/* implicit */short) arr_20 [i_10] [i_10]);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_21 = 4; i_21 < 24; i_21 += 2) 
                    {
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) var_6))));
                        var_50 = arr_4 [i_1 + 1];
                        var_51 = ((/* implicit */unsigned char) arr_13 [i_1] [i_1] [i_1]);
                        var_52 = ((/* implicit */_Bool) -567270061);
                    }
                    for (int i_22 = 0; i_22 < 25; i_22 += 2) 
                    {
                        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) 182823829119817708ULL))));
                        var_54 = ((/* implicit */unsigned short) var_16);
                        var_55 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_55 [i_22] [(signed char)0] [(signed char)0] [(unsigned short)24] [i_9] [i_1 - 1]))));
                        var_56 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_1])) ? (((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_44 [i_1] [i_9] [i_10 + 3] [7LL] [7LL])))) & (((((/* implicit */_Bool) arr_15 [i_1] [i_9] [i_10] [i_22] [19])) ? (-647559406) : (var_10))))) : (((((/* implicit */int) ((1108725015U) >= (((/* implicit */unsigned int) arr_69 [i_1] [i_1 + 1] [i_1] [i_1]))))) * (((((/* implicit */int) arr_29 [i_1] [i_9] [i_10 + 1])) / (((/* implicit */int) arr_54 [10LL] [i_1] [10LL] [i_1] [i_22] [i_22]))))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
    {
        var_57 = var_4;
        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_56 [i_23])) <= (((((/* implicit */long long int) var_14)) - (9223372036854775807LL)))));
        var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0)) - (arr_28 [i_23] [i_23])))))))));
        var_60 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) var_14)) : (arr_3 [i_23] [i_23])));
    }
    var_61 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))), (2979197312976874025ULL)));
    var_62 -= ((/* implicit */unsigned short) min(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (15467546760732677591ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
}
