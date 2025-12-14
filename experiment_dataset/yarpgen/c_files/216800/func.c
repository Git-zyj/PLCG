/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216800
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
    var_15 = ((/* implicit */unsigned char) max((var_15), ((unsigned char)216)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) min((min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_2)))) ? (max((2147483647), (-1920647116))) : (((/* implicit */int) ((arr_0 [i_0]) != (arr_1 [i_0 + 2])))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((((((arr_0 [i_0]) <= (arr_1 [i_0]))) ? (((arr_0 [i_0]) + (((/* implicit */long long int) var_3)))) : (max((arr_1 [i_0 - 1]), (arr_0 [i_0]))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0 + 2]) : (arr_1 [i_0 + 3]))) + (1984438008583932455LL))) - (28LL)))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)50)) < (((/* implicit */int) (unsigned short)50981))))) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) var_8))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) (unsigned short)14555)))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_19 ^= ((/* implicit */long long int) arr_5 [i_5]);
                            var_20 = ((/* implicit */long long int) (-((+(var_8)))));
                            arr_19 [i_1] [i_2] [i_3] [0ULL] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)36))))));
                            arr_20 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)50982))));
                            arr_21 [i_1 + 3] [i_1] [i_1 + 3] [i_4] [(_Bool)1] = ((var_6) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 3] [i_1 + 3] [i_1] [i_4] [i_4] [i_3]))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                            arr_24 [i_1] = ((/* implicit */unsigned char) arr_1 [i_3]);
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)14554), ((unsigned short)14555))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (-(arr_5 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)14533), ((unsigned short)50986))))) : (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                            arr_25 [i_1 - 1] [i_1] [i_6] [i_2] [i_6] = ((/* implicit */unsigned char) var_0);
                        }
                        for (int i_7 = 1; i_7 < 8; i_7 += 2) 
                        {
                            arr_29 [i_1] [i_2] [i_3] [i_4] [i_1] = max((arr_12 [i_1] [(short)0] [i_1] [i_7 + 3] [(short)0]), (arr_12 [i_1] [i_1] [i_3] [i_7 + 3] [i_7 + 1]));
                            arr_30 [i_1 + 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [i_1 - 1])))) ? (arr_5 [i_1 + 2]) : (max((((/* implicit */int) var_11)), (arr_5 [i_1 + 2])))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_4] [i_7]))) : (arr_22 [i_1] [7LL] [(unsigned short)2] [i_4] [i_4] [i_7 - 1]))) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (arr_8 [i_1 + 2] [i_3] [i_4]))))))) << (((arr_10 [i_1] [i_3] [i_3]) - (630908971)))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_1 [i_2]))));
                        }
                        var_25 -= ((/* implicit */signed char) (+(arr_8 [i_1] [i_2] [i_2])));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (arr_9 [i_2] [1] [i_4])))) / (min((((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_2] [i_4] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned short) (unsigned char)171)))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1 + 3]))));
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) (short)6542)), ((unsigned short)50981))), (var_12)));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((((/* implicit */_Bool) (+(arr_22 [i_3] [i_3] [i_3] [i_3] [(unsigned char)8] [i_3])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_4] [i_2] [i_3])), (arr_16 [i_9] [(unsigned char)4] [i_2] [i_9])))) : ((~(var_6))))), (((/* implicit */long long int) max((arr_10 [i_1 + 1] [i_1 + 1] [(unsigned char)3]), (arr_10 [i_1 + 3] [i_1 + 3] [i_9])))))))));
                        }
                        for (int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
                        {
                            arr_39 [(short)8] [i_2] [i_1] [i_4] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((((var_7) + (9223372036854775807LL))) << (((((arr_16 [i_1] [i_4] [i_1 - 1] [i_1]) + (1698571677))) - (41))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((((/* implicit */int) arr_9 [i_10] [i_10] [i_10])) == (((/* implicit */int) arr_11 [i_10] [i_2] [i_1] [i_1] [i_2] [i_1 - 1]))))))))))) : (((/* implicit */long long int) ((((((var_7) + (9223372036854775807LL))) << (((((((arr_16 [i_1] [i_4] [i_1 - 1] [i_1]) + (1698571677))) - (41))) - (1950671765))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((((/* implicit */int) arr_9 [i_10] [i_10] [i_10])) == (((/* implicit */int) arr_11 [i_10] [i_2] [i_1] [i_1] [i_2] [i_1 - 1])))))))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_18 [i_4]))));
                            arr_40 [i_1] [i_2] [i_3] [i_10] [i_2] |= ((int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_33 [i_1 + 2] [i_4] [i_1 + 2] [i_4] [i_10])), (var_3)))), (max((((/* implicit */unsigned long long int) (unsigned short)50981)), (arr_22 [i_10] [i_10] [6] [i_4] [i_10] [i_10])))));
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)7))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) var_12);
                            var_33 *= max((((/* implicit */unsigned short) ((((13854335529369096041ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))))) > (((/* implicit */unsigned long long int) arr_1 [i_1 + 3]))))), (var_5));
                        }
                        for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            var_34 = max(((+(((/* implicit */int) var_1)))), (((((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ^ (arr_27 [9LL] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))));
                            arr_48 [9LL] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)14572)), (4592408544340455586ULL))), (((/* implicit */unsigned long long int) var_11))))) ? ((+(arr_18 [i_1]))) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */int) var_11)), (1351560724)))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [(unsigned short)7])) ? (((((/* implicit */_Bool) ((arr_15 [i_1] [i_1] [i_1 + 3] [i_1] [(short)10] [i_1]) << (((/* implicit */int) (unsigned char)0))))) ? (-49030348) : ((+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [(signed char)5] [i_13])))))) : ((+(((/* implicit */int) (short)-22644))))));
                            var_36 = ((/* implicit */long long int) arr_26 [i_1] [i_11] [(signed char)4] [i_2] [i_1]);
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_51 [i_1] [i_2] [(_Bool)1] [i_1 + 1] [(_Bool)1] [i_3] |= ((/* implicit */long long int) ((((((((/* implicit */int) var_0)) - (var_3))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)50981)) <= (-47342549))))));
                            arr_52 [i_1] [i_1] [i_3] [(unsigned char)5] [2LL] [i_1] = ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1 + 3]);
                        }
                        arr_53 [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned short)50981)) : (((/* implicit */int) (unsigned short)14555))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        arr_57 [i_3] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_56 [i_1] [(unsigned char)7] [i_3] [i_1])), (max((((/* implicit */unsigned long long int) var_14)), (arr_43 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2])))));
                        var_37 = (+(((/* implicit */int) max((max(((unsigned char)139), (arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (8125943214025072472LL))))))));
                        arr_58 [i_1] = ((/* implicit */unsigned char) var_13);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_38 = ((/* implicit */int) arr_33 [i_1] [i_1] [i_2] [1LL] [i_2]);
                        /* LoopSeq 2 */
                        for (short i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            var_39 ^= ((/* implicit */unsigned short) (+(((arr_18 [i_1]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                            arr_63 [i_1] [2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -5934531861299086549LL)), (15ULL)));
                            var_40 = ((((/* implicit */unsigned long long int) max((arr_56 [i_1] [i_2] [i_1] [i_1]), (arr_31 [i_1 + 2] [i_2] [i_17])))) == (arr_47 [i_1] [i_1] [8] [i_16] [i_16] [i_17] [8]));
                            arr_64 [i_1] [i_17] = ((/* implicit */_Bool) var_14);
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)14555)) != (((/* implicit */int) (unsigned short)50997)))))))));
                            var_42 = ((/* implicit */int) arr_31 [i_1] [i_16] [i_18]);
                        }
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) arr_17 [i_3]))));
                    }
                }
            } 
        } 
        var_44 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (11981727769902774995ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)225)), (((((/* implicit */_Bool) (unsigned short)39278)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)61))) : (-8234254865934036596LL))))))));
    }
    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_14))));
}
