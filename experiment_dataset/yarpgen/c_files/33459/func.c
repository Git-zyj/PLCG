/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33459
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (_Bool)0))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0])) >> ((((((-(((/* implicit */int) (_Bool)1)))) % (((((/* implicit */int) arr_2 [i_1] [i_2])) + (((/* implicit */int) var_15)))))) + (2)))));
                /* LoopSeq 3 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_0] [i_1] [i_2 - 2] [i_3 - 1] [i_4] = ((long long int) -9202897157970673603LL);
                        arr_16 [i_4] [i_1] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (min((((/* implicit */int) (_Bool)1)), (613150525)))));
                    }
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        var_22 &= (((((_Bool)1) || (((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_2])), (-613150521)))))) ? (((var_18) >> (((((/* implicit */int) (short)3727)) - (3727))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) (unsigned char)97)) : ((+(((/* implicit */int) (short)-14389))))))));
                        arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] = min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)14045));
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_3] [10ULL] &= ((/* implicit */unsigned int) 5648798312296501734LL);
                    }
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 11; i_6 += 1) 
                    {
                        arr_25 [i_0 + 1] [9U] [9] [i_0] [9] = 18446744073709551615ULL;
                        var_23 &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108))))) : (((/* implicit */int) (unsigned char)181))));
                        var_24 = ((((/* implicit */_Bool) arr_7 [i_3 - 1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [2ULL] [i_3])));
                        var_25 = ((/* implicit */long long int) var_15);
                    }
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_23 [i_3 - 1] [i_3 - 1] [5U] [i_3 - 1] [i_2 - 2])))));
                    var_27 &= ((/* implicit */short) (+(((((/* implicit */_Bool) 613150525)) ? (arr_10 [i_0 + 1] [i_2 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) : (arr_18 [i_0 + 2] [i_2 + 1] [i_3 - 1] [i_3 - 1])))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (var_13) : (var_13)))) ? (((/* implicit */int) (short)32740)) : ((~(((/* implicit */int) var_19)))))), ((+(((/* implicit */int) min((var_19), ((unsigned char)120))))))));
                    arr_28 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0] [i_0])) < (var_14)));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)33)) ? (5443344923343778069LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_11))));
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        arr_34 [i_0] [i_9] = ((/* implicit */short) var_17);
                        arr_35 [i_0] [i_1] [i_2] [i_0] [i_8] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)102))))) ? (((/* implicit */int) (!(arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_8] [i_0 - 1] [i_10])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_10 + 1] [i_2] [i_0])) : (((/* implicit */int) (unsigned char)115))))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_22 [5LL] [i_10 + 1] [i_2] [i_8] [i_10] [(short)5]))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 613150525)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))) : (max((0ULL), (((/* implicit */unsigned long long int) 2950154937U))))))));
                        var_33 = ((/* implicit */short) ((int) max((max((arr_40 [i_0]), (((/* implicit */int) (unsigned short)38158)))), (arr_40 [i_0]))));
                        arr_43 [i_0] [i_0] [i_2] [i_8] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_6 [i_8] [i_0 + 1] [i_1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                        arr_44 [i_0] = ((/* implicit */short) ((((((((var_16) + (2147483647))) << (((((((/* implicit */int) (short)-10145)) + (10152))) - (6))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_9 [i_0 + 2] [(short)11] [i_2 - 1] [i_8] [i_11] [i_11])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2950154937U)))));
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        arr_47 [(unsigned char)5] [i_0] [i_2] [i_0] [i_0 - 1] = ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-4925)));
                        var_34 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_33 [i_0 + 1])), (((((/* implicit */_Bool) arr_7 [i_0 + 3])) ? (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_1))))) : (min((10058862170789428029ULL), (((/* implicit */unsigned long long int) (short)-21))))))));
                    }
                    arr_48 [i_8] [i_1] [(unsigned char)2] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) -7058511848344329865LL);
                    arr_49 [i_0] = ((/* implicit */unsigned int) (signed char)102);
                    arr_50 [i_8] [i_8] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */short) var_3);
                    var_35 = ((/* implicit */unsigned short) max((-5818186750290025232LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9)))))));
                }
            }
            arr_51 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_55 [i_0] [i_0] [1LL] = arr_52 [i_0 + 3] [i_0 + 1] [i_0 - 1];
            /* LoopNest 3 */
            for (unsigned char i_14 = 2; i_14 < 9; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (unsigned short i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_46 [i_14 + 1] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)27592)))));
                            arr_66 [i_0 - 1] [i_13] [i_13] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_22 [i_14 - 2] [i_13] [i_16 + 2] [i_16 - 1] [i_0 + 3] [i_14 + 1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            arr_69 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)18)) ^ (((((/* implicit */int) (short)21711)) >> ((((-(((/* implicit */int) arr_37 [i_17] [i_17] [i_0] [i_0] [i_0])))) + (13759)))))));
            arr_70 [i_0] [i_0] = ((/* implicit */short) (+(((unsigned int) min((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_0 + 3] [i_17] [i_17] [i_17])), (var_18))))));
            arr_71 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-4907)) : (((/* implicit */int) ((signed char) 1615321861527457024LL)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((unsigned short) var_19))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56580))))))) : (((/* implicit */int) arr_27 [2ULL] [(signed char)1] [i_17] [6ULL]))));
            var_37 = (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [(short)11] [(short)11] [i_17] [i_17]))))) > (((/* implicit */int) (unsigned short)8955))))));
        }
        arr_72 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) var_19)), (((((var_14) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_0] [i_0 + 2] [i_0] [1ULL])) - (38507)))))));
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        arr_75 [i_18] [(unsigned short)0] = (unsigned short)56585;
        var_38 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned short)63636)))))))));
        var_39 = ((/* implicit */unsigned short) (unsigned char)201);
        var_40 &= ((/* implicit */short) (((!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)56580))))))) ? (min((((((/* implicit */_Bool) (unsigned char)123)) ? (2086283656U) : (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) ((signed char) (unsigned char)123))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))));
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 16; i_19 += 4) 
    {
        var_41 &= ((/* implicit */unsigned long long int) (unsigned short)8955);
        var_42 = ((/* implicit */unsigned char) ((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_19] [i_19]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
    {
        arr_80 [i_20] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_20])) ? (((/* implicit */long long int) ((unsigned int) (signed char)-1))) : (((((/* implicit */_Bool) (unsigned char)54)) ? (var_7) : (arr_76 [i_20]))))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14))))), (max((arr_78 [i_20] [i_20]), (((/* implicit */unsigned long long int) var_0)))))) - (6474982192933567999ULL)))));
        var_43 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_20])) ? (((/* implicit */int) arr_3 [i_20] [i_20] [i_20])) : (((/* implicit */int) (short)(-32767 - 1)))))) ^ (2208683626U)));
        arr_81 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) != (arr_19 [11ULL] [i_20] [i_20] [0U] [i_20] [i_20] [i_20])));
        /* LoopSeq 4 */
        for (signed char i_21 = 2; i_21 < 6; i_21 += 3) 
        {
            arr_84 [(unsigned char)6] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_21] [i_21 + 4] [i_21 + 3]))));
            var_44 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)123)))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (!(arr_9 [i_20] [i_20] [i_20] [(signed char)3] [i_21] [i_21]))))))));
            arr_85 [i_21] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_19 [i_21 + 3] [i_21 + 3] [i_21 + 2] [i_21] [5LL] [i_21] [i_21])), (max((((/* implicit */long long int) (unsigned char)221)), (7973385351436767608LL))))) ^ (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)8866)))), ((+(((/* implicit */int) (short)-333)))))))));
        }
        for (int i_22 = 1; i_22 < 8; i_22 += 4) 
        {
            arr_89 [i_20] [i_22 - 1] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 1077135875481434748LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [4U] [i_22] [11] [i_22 + 1] [6LL] [i_20] [i_20]))) : (arr_64 [i_20] [i_20] [i_20] [i_20] [0])));
            arr_90 [i_22] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_20])), ((~(((/* implicit */int) (unsigned short)43661))))))) ? (((/* implicit */int) arr_39 [i_22])) : (((/* implicit */int) var_9))));
            /* LoopNest 3 */
            for (unsigned short i_23 = 2; i_23 < 9; i_23 += 4) 
            {
                for (long long int i_24 = 0; i_24 < 10; i_24 += 4) 
                {
                    for (unsigned int i_25 = 4; i_25 < 9; i_25 += 4) 
                    {
                        {
                            arr_100 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */_Bool) var_1);
                            var_45 &= ((/* implicit */short) min((((2233538802U) << (((var_18) - (3520546531092042332ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -1)), ((-9223372036854775807LL - 1LL))))))))));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) arr_58 [i_25] [i_24] [i_23] [i_20]))));
                            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)65528)) <= (((/* implicit */int) arr_0 [i_25 - 3])))) ? ((+(0))) : (min((-1342479515), (((/* implicit */int) (short)-18981)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_26 = 0; i_26 < 10; i_26 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 4) 
            {
                for (unsigned short i_28 = 0; i_28 < 10; i_28 += 3) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_48 &= ((/* implicit */unsigned int) 5021282730570791317LL);
                            arr_112 [i_29] [i_29] [i_27] [3ULL] [i_29] = (unsigned char)233;
                        }
                    } 
                } 
            } 
            arr_113 [i_26] [i_26] [i_26] &= ((/* implicit */_Bool) max((-5021282730570791327LL), (((/* implicit */long long int) (unsigned char)221))));
        }
        /* vectorizable */
        for (unsigned char i_30 = 0; i_30 < 10; i_30 += 1) 
        {
            var_49 = ((/* implicit */int) 5992666388649535865LL);
            arr_116 [i_30] = ((/* implicit */long long int) arr_64 [i_20] [i_30] [i_30] [i_30] [(unsigned char)4]);
            arr_117 [i_30] = ((/* implicit */signed char) (short)-27225);
            var_50 &= ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-16096))))) ? (((((-1342479528) + (2147483647))) >> (((((/* implicit */int) (unsigned short)43282)) - (43273))))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) (short)365)))));
        }
    }
    for (unsigned short i_31 = 0; i_31 < 21; i_31 += 4) 
    {
        var_51 = ((/* implicit */unsigned char) var_13);
        var_52 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_119 [i_31] [i_31]))) || ((!(((/* implicit */_Bool) ((unsigned long long int) var_9)))))));
        arr_120 [i_31] [i_31] = ((/* implicit */unsigned char) (_Bool)1);
        arr_121 [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5021282730570791317LL)) ? ((((!(((/* implicit */_Bool) var_1)))) ? (max((((/* implicit */int) (short)-18966)), ((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) <= (2439136706U)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((5U), (((/* implicit */unsigned int) (_Bool)1))))))))));
    }
}
