/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2784
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 - 1] [14LL]))))))));
                                var_13 = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */signed char) (unsigned char)255);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned int) (~(var_6)));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))));
                            var_16 = ((/* implicit */_Bool) var_5);
                        }
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            arr_25 [i_1] [i_1 + 2] [i_1 + 2] = ((/* implicit */int) ((var_0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) : ((+(267676474U)))));
                            arr_26 [i_0] [9ULL] [(unsigned char)10] [(unsigned short)3] [i_6 - 1] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_6 + 1])) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_5])))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 14; i_9 += 2) 
                        {
                            arr_30 [i_1] [i_1] [i_5] [i_6] [i_9] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                            var_17 = ((/* implicit */unsigned short) var_2);
                        }
                        var_18 = ((/* implicit */signed char) arr_11 [i_0] [i_5] [i_5] [i_6] [i_0]);
                    }
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) var_3);
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) (+(((long long int) 2632877095U))));
                            var_21 ^= ((/* implicit */int) (unsigned char)0);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))));
                            arr_38 [(unsigned short)1] [i_1] [8U] [i_10 + 1] [i_1] = ((/* implicit */unsigned short) arr_37 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_10 - 1]);
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) -4105827941840329059LL);
                            arr_43 [i_1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)238))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_10 + 1] [i_1])) ? (arr_12 [i_1 - 1] [i_10 - 1] [i_1]) : (arr_12 [i_1 + 1] [i_10 + 1] [i_1])));
                            arr_44 [i_1] [i_1] [i_1] [i_5] [i_10 + 1] [i_12] = ((/* implicit */int) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48235)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 536870911)))))) : (var_11)));
                        }
                    }
                    for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        arr_48 [i_1] [i_1] [0U] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_13 + 2])) ? (((((/* implicit */_Bool) (short)6945)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_0] [(unsigned short)1] [i_5] [i_5] [i_1])))) : (((/* implicit */int) var_9))));
                        var_26 = ((/* implicit */unsigned long long int) var_10);
                        var_27 |= ((/* implicit */unsigned int) ((arr_23 [i_13 + 1] [6ULL] [6ULL] [i_1 + 1] [i_0] [i_0]) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1 + 1] [i_0] [i_5] [1LL])))));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        arr_49 [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) arr_20 [0] [i_13 + 1] [i_13 - 1] [i_5] [0] [0] [i_1 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_20 [i_5] [i_13 + 1] [(unsigned short)0] [i_5] [i_5] [i_5] [i_5])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 3; i_14 < 14; i_14 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (-1618539150) : (((/* implicit */int) var_1))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (var_5)))) ? (((/* implicit */int) var_4)) : (1804113500)));
                            var_31 = ((/* implicit */unsigned char) var_11);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)33945)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_51 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_14 - 2] [i_0])))));
                        }
                        for (short i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1))))));
                            var_34 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)32))))));
                            var_35 *= ((/* implicit */_Bool) var_10);
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3301506865U)))) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) arr_52 [i_5] [i_1] [i_16] [i_14] [(signed char)14])) : (((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) var_2))));
                        }
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            var_37 += ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_14] [i_14 - 1] [i_14] [i_14] [0LL]))));
                            arr_58 [i_1] [i_1] [3LL] [6LL] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_14] [i_14 - 3] [i_14 - 1] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_1])) + (((/* implicit */int) var_4))));
                            var_38 = ((/* implicit */int) ((long long int) ((7134817520294902179LL) - (9223372036854775807LL))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        for (short i_18 = 1; i_18 < 13; i_18 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -986664328)) ? (arr_27 [i_0] [i_0] [i_1 - 1] [i_14 - 1] [i_18] [i_18 - 1]) : (1964872766)));
                            var_41 = ((/* implicit */short) var_1);
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_1 - 1] [i_18 + 1] [i_1])));
                            var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)38))));
                            var_44 = arr_20 [i_0] [i_0] [i_0] [i_14 - 1] [i_0] [i_0] [i_14 + 1];
                        }
                        var_45 = ((/* implicit */unsigned short) var_2);
                    }
                    var_46 = ((/* implicit */unsigned int) arr_7 [i_5] [i_1 + 2] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        for (long long int i_20 = 4; i_20 < 12; i_20 += 2) 
                        {
                            {
                                arr_66 [i_0] [i_1] [i_1] [i_19] [i_20 - 4] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_9))))));
                                var_47 = ((/* implicit */_Bool) ((long long int) arr_37 [i_20 + 1] [i_1 + 1] [i_19] [i_19] [i_1]));
                            }
                        } 
                    } 
                }
                for (int i_21 = 0; i_21 < 15; i_21 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 2) 
                    {
                        for (int i_23 = 3; i_23 < 14; i_23 += 2) 
                        {
                            {
                                var_48 = ((((/* implicit */int) (unsigned char)17)) | (((var_0) ? (arr_67 [i_23 - 1] [(_Bool)1] [i_21] [i_22 + 1]) : (((/* implicit */int) (unsigned char)214)))));
                                var_49 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((signed char) arr_68 [i_21] [i_22 + 4] [i_23 + 1]))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -789452759)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (arr_51 [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        for (unsigned int i_25 = 1; i_25 < 13; i_25 += 3) 
                        {
                            {
                                var_50 = 0;
                                var_51 = -1528754402077518622LL;
                                var_52 = ((/* implicit */signed char) var_1);
                                var_53 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_73 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_25 + 2] [i_25 + 1] [i_25 + 2] [i_1])) ? (arr_73 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_25 + 2] [i_25 + 2] [i_25 - 1] [i_1]) : (((/* implicit */int) (signed char)-67)))) / ((-(((((/* implicit */_Bool) 8104949216572089241LL)) ? (var_7) : (arr_73 [(unsigned short)2] [(unsigned short)14] [(unsigned short)14] [i_24] [i_25] [i_1] [i_1])))))));
                                var_54 |= ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) ((arr_22 [i_25] [i_25 - 1] [i_25] [i_25 + 1] [i_25 - 1]) >= (arr_22 [i_25 + 2] [i_25 - 1] [i_25 - 1] [i_25 + 1] [i_25])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_55 = ((/* implicit */_Bool) ((var_7) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (501010)))));
    var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_1))) + ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) var_7)) != (var_11))))) : (((/* implicit */int) var_10))));
}
