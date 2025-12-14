/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51552
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((arr_5 [i_0] [i_1] [(unsigned short)2] [i_1]) + (((/* implicit */unsigned long long int) ((((arr_3 [i_0]) + (9223372036854775807LL))) << ((-(((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) var_2);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (+(arr_8 [i_0])));
                        arr_12 [i_1] [i_1] [(short)8] [i_3] = ((/* implicit */long long int) (_Bool)1);
                        arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * (var_13)))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) 14970007288261473661ULL)) && (((/* implicit */_Bool) 0ULL))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1])))))));
                        var_17 *= ((unsigned char) (short)3690);
                    }
                    for (unsigned short i_4 = 4; i_4 < 13; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1 + 4] [i_2] [i_4] [i_1] [i_1 + 4] = ((/* implicit */unsigned long long int) arr_6 [i_0] [13LL] [i_4 - 4]);
                        arr_17 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((signed char) (+(arr_8 [i_0]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((long long int) arr_4 [i_4 - 1] [i_1 + 1]));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [(_Bool)1] [i_5]))));
                            var_20 = ((/* implicit */unsigned long long int) ((((-9223372036854775799LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) >= (((/* implicit */long long int) ((((/* implicit */int) (short)-3177)) % (((/* implicit */int) var_5)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_21 = (-((-(min((2147221504U), (((/* implicit */unsigned int) (unsigned char)128)))))));
                            arr_22 [i_6] [i_4 - 3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_20 [i_1 + 2] [i_4 - 3] [i_4 - 3] [i_4] [i_6]), (arr_20 [i_1 + 3] [i_4 - 1] [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_1 + 4] [i_1] [i_2] [i_4]))))) : (var_11)));
                            arr_23 [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1]))));
                            arr_24 [i_1 - 1] [i_1 - 1] [i_1] = (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)63))))) ? ((+(arr_8 [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-54)) <= (((/* implicit */int) (_Bool)0))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            arr_27 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) arr_14 [i_1 - 1] [5U] [i_4 - 4] [5ULL]));
                            var_22 = ((/* implicit */_Bool) (unsigned char)111);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (0ULL) : (5901278915123153585ULL)));
                            arr_28 [i_7 + 1] [i_1] [i_1] = arr_0 [i_2];
                        }
                        /* vectorizable */
                        for (long long int i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            arr_32 [i_0] [i_1 + 1] [i_0] [i_4] [i_8 - 1] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)0))))) ? (((8479131465320763896LL) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [1LL] [i_2] [i_4 - 4] [5U] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                            var_24 = ((/* implicit */unsigned long long int) (~(-1LL)));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [13LL] [i_8 - 3])) ? (7260743597438286467ULL) : (7260743597438286467ULL)))))))));
                            var_26 = ((/* implicit */unsigned int) ((signed char) 9219286917793083545ULL));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7412362761704107312ULL)) ? (((/* implicit */int) arr_30 [i_0] [i_8 - 1] [i_2] [i_1 + 4] [i_4 - 4] [i_2])) : (((/* implicit */int) var_8)))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((arr_18 [i_9 - 1] [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL))))))))));
                        arr_35 [i_1] = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            arr_38 [i_0] [i_1 + 1] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * (arr_0 [i_9 - 1])));
                            var_29 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)10]))));
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (((+(arr_41 [9ULL] [i_11] [i_2] [i_2] [i_0]))) - (((/* implicit */int) (signed char)21)))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_1 + 3] [i_1 + 1] [i_2] [i_1 + 1] [i_11])) ? (-6003893207153810944LL) : (((/* implicit */long long int) ((unsigned int) var_2)))));
                            var_32 += ((/* implicit */signed char) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_1]))))));
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                        {
                            var_33 -= ((/* implicit */unsigned long long int) ((long long int) arr_33 [i_0] [i_1] [i_12]));
                            var_34 = ((/* implicit */long long int) min((var_34), (arr_18 [13LL] [i_2] [i_12])));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9 - 1] [i_1] [i_1] [i_1] [i_1 + 2])) || (((arr_4 [i_9 - 1] [i_2]) && (((/* implicit */_Bool) arr_36 [i_0] [i_1] [7ULL] [i_9 - 1] [i_12]))))));
                        }
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((unsigned int) (-(-2147483634)))))));
                    }
                    var_37 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)-26)), ((unsigned char)225))), (((/* implicit */unsigned char) arr_4 [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 1; i_13 < 14; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_4))));
                                var_39 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) ((var_1) ? (((/* implicit */unsigned long long int) arr_34 [i_14] [i_13 + 1] [i_0] [i_1] [i_0])) : (var_6))))), (min((((/* implicit */unsigned long long int) ((arr_10 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_1 - 1] [i_0] [i_13 - 1] [i_14]))) + (arr_10 [i_0])))))));
                                arr_51 [i_0] [i_1 + 1] [i_1] [i_0] [i_2] [i_13] [i_14] = ((/* implicit */_Bool) (unsigned char)60);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_40 = (unsigned char)3;
    var_41 = (_Bool)1;
    var_42 = ((/* implicit */unsigned int) ((long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
}
