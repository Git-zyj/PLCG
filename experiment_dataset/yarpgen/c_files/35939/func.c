/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35939
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (((-(var_4))) + (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) : (3664692088005919330ULL)))));
        var_14 |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) + (arr_5 [i_1])))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2832384134U) < (870754335U)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)160)))))) : ((-(((/* implicit */int) arr_2 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (short)-28079)) ? (((/* implicit */int) arr_4 [7])) : (((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min(((unsigned char)157), (arr_4 [i_1])))), (max((((/* implicit */unsigned long long int) 2465865235U)), (arr_5 [i_1]))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) 8360035533481382267ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [4ULL]))) : (arr_5 [i_1]))))))))));
    }
    for (short i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            arr_16 [i_3 - 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (2504334484U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))) : (min((arr_9 [i_2] [10U]), (((/* implicit */unsigned int) (short)-24716)))))), (arr_9 [6U] [6U])));
            arr_17 [i_2] [i_2 - 1] [8U] = ((unsigned int) (+(((/* implicit */int) min(((unsigned char)120), (var_0))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                for (short i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) arr_26 [i_6 - 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_26 [i_6 + 1] [i_5 + 2] [i_7])) : (((/* implicit */int) arr_26 [i_6 + 2] [i_5 - 2] [i_5 + 1]))))));
                            var_17 = ((/* implicit */unsigned int) ((int) (signed char)-83));
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2631)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3585)))))));
                            arr_29 [i_4] = ((short) arr_18 [i_4] [i_6 - 2]);
                            var_19 ^= ((/* implicit */unsigned long long int) (unsigned char)230);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    for (int i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            arr_39 [i_2 + 1] [i_4] [i_8] [i_9] [i_2 + 1] [18] = ((/* implicit */unsigned char) (-(arr_35 [(unsigned char)6] [i_2 + 1] [i_4])));
                            var_20 |= ((/* implicit */unsigned char) 1255072496);
                            var_21 += ((/* implicit */short) arr_33 [i_10 + 1] [i_9] [i_8] [i_4] [i_2]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    var_22 *= ((/* implicit */short) ((((/* implicit */long long int) arr_1 [i_2 + 1])) / (arr_10 [i_2 + 1] [i_8 + 4])));
                    arr_44 [i_4] [i_4] = ((((/* implicit */_Bool) arr_4 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2 - 1] [i_8 - 1]))) : (arr_35 [i_8 + 3] [11U] [i_4]));
                    arr_45 [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)217)) * (((/* implicit */int) arr_25 [(unsigned char)2] [i_8] [i_11])))) << (((((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (var_7))) - (239U)))));
                }
                for (unsigned int i_12 = 2; i_12 < 16; i_12 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2 - 1])) - (((/* implicit */int) ((unsigned char) (unsigned char)253))))))));
                    var_24 *= ((((/* implicit */_Bool) (short)-27050)) && (((((/* implicit */int) (short)22780)) < (((/* implicit */int) (unsigned char)172)))));
                }
                for (unsigned int i_13 = 2; i_13 < 16; i_13 += 2) /* same iter space */
                {
                    arr_52 [i_2] [i_2] [(unsigned short)17] [i_8] [i_4] = ((/* implicit */short) (signed char)-124);
                    arr_53 [i_13] [(short)1] [i_4] [i_4] [i_4] [i_2 - 1] = (!(((/* implicit */_Bool) ((5891021637619892269ULL) & (((/* implicit */unsigned long long int) 2956649724U))))));
                }
                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [(unsigned char)0] [i_2 - 1] [i_8 + 2] [i_8 + 4])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_2 + 1] [i_4] [i_8 + 4]))))) : (((((/* implicit */_Bool) 2873926754U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_2] [i_2] [i_4] [i_4] [6ULL]))) : (arr_34 [i_4] [i_4])))));
                var_26 += ((/* implicit */unsigned long long int) ((arr_28 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [14U]) | (((((/* implicit */_Bool) 4757091997258366511ULL)) ? (965272473U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_2])))))));
                arr_54 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned short)41352)) : (((/* implicit */int) (unsigned char)6))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_27 |= ((/* implicit */short) (-(((/* implicit */int) arr_58 [i_2 - 1] [i_2] [i_2 - 1]))));
                arr_59 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_2] [i_4] [i_14])) / (((/* implicit */int) arr_37 [i_2 - 1] [i_2 - 1] [i_14]))));
            }
            for (short i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((unsigned char) arr_28 [i_2] [16] [i_2 - 1] [i_2 - 1] [i_15])))));
                            arr_68 [i_16] [i_4] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)209))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_18 = 2; i_18 < 18; i_18 += 1) 
                {
                    for (unsigned char i_19 = 2; i_19 < 19; i_19 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) 452604918)) ? (((/* implicit */int) arr_19 [i_18 + 2] [i_18 - 1] [i_4])) : ((((_Bool)1) ? (-1008930367) : (((/* implicit */int) (unsigned short)25058)))))))));
                            var_30 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18509))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (+(((long long int) 1140109039)))))));
                            var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_4] [i_4] [i_4] [i_4] [i_19]))) : (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (8929982184022728672LL)))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((_Bool) arr_62 [i_2 + 1] [i_2 - 1])))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (unsigned char)186))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 3; i_20 < 18; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        {
                            var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_74 [i_2 - 1] [i_2 - 1] [i_20 + 1] [i_20 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4481))) : (arr_74 [i_2 - 1] [i_15] [i_20 - 2] [i_20 - 3])));
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) 3286800406U)) || (((/* implicit */_Bool) 2076217863U)))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14250)) ? (((/* implicit */int) arr_46 [i_2] [i_2 + 1] [i_20 - 2] [i_20 + 1] [i_20])) : (((/* implicit */int) (unsigned char)46))));
                        }
                    } 
                } 
            }
            var_38 ^= ((/* implicit */int) arr_37 [17ULL] [i_4] [i_4]);
        }
        arr_77 [i_2] [7ULL] = ((/* implicit */unsigned long long int) max((min(((~(arr_69 [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)17596))))))), ((~(((arr_63 [(unsigned char)12] [(unsigned char)12]) ^ (var_2)))))));
    }
    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
    {
        arr_80 [i_22] = ((/* implicit */unsigned short) max((((arr_78 [i_22]) != (max((((/* implicit */unsigned long long int) (short)1111)), (arr_78 [i_22]))))), (((((/* implicit */unsigned long long int) (+(arr_1 [i_22])))) >= (arr_78 [i_22])))));
        arr_81 [i_22] = ((/* implicit */unsigned int) var_3);
        /* LoopNest 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 21; i_24 += 3) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    {
                        arr_92 [2ULL] [(unsigned short)5] [i_23] [i_23] [i_23] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11054788591663326642ULL))));
                        arr_93 [i_22] [i_23] [i_23] [i_24] [10U] |= ((/* implicit */unsigned long long int) (+(((arr_79 [i_25]) ^ (((/* implicit */int) (short)-19686))))));
                    }
                } 
            } 
        } 
        var_39 += ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_79 [i_22])))) ? (max((((/* implicit */unsigned long long int) arr_82 [i_22] [20U])), (arr_86 [i_22] [(unsigned short)10] [i_22]))) : (((((/* implicit */_Bool) 1412838930U)) ? (arr_89 [i_22] [i_22] [(signed char)20] [i_22]) : (var_9))))))));
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) -457230772))));
    }
    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -7537582038176684791LL)) ? ((-(3113550187U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))))));
}
