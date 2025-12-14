/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52585
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_9))));
    var_16 |= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)9);
                arr_5 [i_0 - 1] [9LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [(signed char)0])) >= ((-((~(((/* implicit */int) arr_2 [i_0 + 2] [i_1] [(unsigned short)19]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */unsigned long long int) ((arr_0 [(short)14] [(unsigned char)0]) >> (((((/* implicit */int) arr_2 [i_0 + 1] [(short)14] [i_2])) - (33519)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])) < (((((/* implicit */int) arr_7 [(unsigned short)13] [i_2] [i_2] [i_4])) >> (((arr_12 [19ULL]) - (9127128211182561048ULL)))))));
                            var_18 = ((/* implicit */short) ((arr_6 [i_1] [(unsigned short)19] [i_3 + 1] [(unsigned short)10]) ? (((/* implicit */int) arr_6 [i_0 + 1] [3LL] [i_3 - 1] [3LL])) : (((/* implicit */int) arr_6 [i_3 + 1] [11U] [i_3 - 1] [i_4]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [(signed char)5]))))) <= ((-(((/* implicit */int) arr_6 [i_0] [i_1] [9LL] [i_5 - 1]))))));
                            arr_16 [(short)13] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23539)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned short)15])) : (((/* implicit */int) ((((/* implicit */int) (short)-23539)) != (((/* implicit */int) arr_3 [i_2] [i_2])))))));
                            arr_17 [i_1] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */signed char) (!((!(arr_6 [i_1 - 1] [i_1] [i_1] [12ULL])))));
                        }
                    }
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_1 [i_0 - 1]))));
                }
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    var_21 = ((/* implicit */signed char) (~((+(arr_0 [i_1 + 2] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) arr_6 [i_0 + 2] [i_1 - 1] [i_7 - 3] [i_8 - 1]);
                                var_23 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-23526))))) >= ((+(((((/* implicit */_Bool) 4138384391U)) ? (((/* implicit */int) arr_25 [i_8 + 1] [i_7 + 1] [6ULL] [8U] [17] [i_1] [(unsigned short)7])) : (((/* implicit */int) arr_25 [i_0 + 1] [(unsigned short)2] [i_0 + 1] [(_Bool)1] [i_8 + 2] [i_6 + 1] [(short)0]))))))));
                                arr_27 [(short)3] [(short)3] [i_6 + 2] [i_1] [i_7 + 2] [i_7 + 2] [i_8 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((4475036562267573122ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23530)))))) ? (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) arr_9 [i_1] [i_8 + 1])) : (((/* implicit */int) arr_25 [(short)12] [i_8] [(short)12] [(_Bool)1] [(short)6] [i_0 - 1] [i_0])))) : (arr_11 [i_1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 3; i_10 < 19; i_10 += 4) 
                        {
                            var_24 -= ((/* implicit */short) arr_19 [i_0] [(_Bool)1] [i_6 + 2]);
                            arr_35 [i_0 - 1] [i_1 - 1] [i_6] [i_6] [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (arr_26 [i_0] [(unsigned char)10] [i_1 + 1] [i_1 + 1] [i_6 - 1] [i_9] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_6 + 1] [i_9] [i_6 + 1])))))) ? (arr_0 [i_9] [i_0]) : (((/* implicit */int) (!(arr_30 [(signed char)3] [i_0 + 1] [(_Bool)1] [i_6] [i_9] [i_0 + 1]))))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_1] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1 - 1] [i_1] [i_9])) ? (((/* implicit */unsigned long long int) arr_11 [i_1])) : ((-(arr_12 [i_0 - 1])))));
                            var_25 ^= ((/* implicit */signed char) 15874253678677805400ULL);
                            arr_40 [13] [i_1] [i_6 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_25 [14LL] [i_1] [i_1] [i_6 - 1] [(unsigned short)16] [i_9] [i_11 - 1])) < (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) arr_2 [8LL] [i_1] [i_9])) ? (((/* implicit */int) arr_9 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_37 [i_1] [i_1 - 1] [i_6 + 1] [i_9]))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_18 [(unsigned short)6] [i_0 + 2] [(unsigned short)19]))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            arr_43 [8] [i_1] [i_1] [i_9] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_6 - 1] [i_9]))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0] [i_1 - 1] [15LL] [i_9] [(unsigned short)7] [i_12])) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_30 [i_6 - 1] [i_12 + 1] [18U] [i_6 - 1] [i_0 + 2] [i_0 + 2])))) : ((-(arr_0 [i_6] [i_9])))));
                            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_9] [i_9])) ? (((/* implicit */int) arr_6 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6])) : (((arr_6 [i_1] [i_6 - 1] [i_9] [i_12]) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned short)47807))))));
                            arr_44 [i_1] = ((/* implicit */int) (signed char)73);
                            arr_45 [1U] [(unsigned short)0] [(_Bool)1] [(unsigned short)0] [i_1] = (short)-1;
                        }
                        arr_46 [i_0] [i_0] [i_1] [i_6 - 1] [i_1] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-2048))))));
                        arr_47 [i_0 - 1] [i_1 - 1] [i_6 + 1] [i_1] = ((/* implicit */signed char) arr_10 [i_0 - 1] [i_1] [14ULL] [i_1 + 2] [i_6 + 1] [0U] [i_9]);
                        var_29 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0 - 1] [i_9] [i_1 + 1]))));
                        var_30 = ((/* implicit */unsigned short) arr_34 [i_0 - 1] [7LL] [i_0] [i_0 + 1] [(unsigned char)20] [i_0] [i_0 + 1]);
                    }
                }
                var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_11 [i_1])), (((((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_0 - 1] [3U] [i_1]))) : (12LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(var_13))))))));
    var_33 &= ((/* implicit */_Bool) var_3);
}
