/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222153
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
    var_12 = max((var_0), (var_5));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23911)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                    arr_10 [i_0] [9U] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1]))));
                }
                for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            {
                                arr_19 [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_4] [i_3] [i_4])) ? (arr_15 [i_0 + 2] [i_0 + 2] [(unsigned short)0] [3ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23923))))));
                                arr_20 [i_4] [i_3] [i_4] [i_4] [0LL] = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 8; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)23911)), (32767LL)));
                                arr_28 [i_1 + 2] [i_1 + 2] [i_7 + 1] &= ((/* implicit */int) min(((-(var_6))), (((/* implicit */unsigned long long int) arr_24 [i_3 - 3] [i_3] [i_3 + 1] [i_1 + 2] [i_0 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                        var_14 = ((/* implicit */unsigned int) ((var_1) >= (((/* implicit */unsigned long long int) 208433533))));
                        arr_32 [i_1] [i_8 - 2] = ((/* implicit */_Bool) ((arr_31 [i_8] [i_8 + 1] [i_8 - 2] [i_8] [i_8 + 1]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [5LL] [5LL] [i_8 - 2] [i_8 - 2] [i_8 + 2])))));
                        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 18010000462970880LL)) / (6240566597729071463ULL)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) 
                        {
                            arr_36 [i_0] [i_1] [i_3] [i_3] [i_9] = ((/* implicit */unsigned long long int) 1316777121U);
                            arr_37 [i_0] [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_8 - 2] [i_1 + 2])) ? (1649791940) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                            arr_38 [i_0] = ((/* implicit */unsigned int) (signed char)127);
                            var_16 += ((/* implicit */unsigned int) (short)-23930);
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)29))));
                            arr_43 [i_0] [i_1] [i_1] [i_3 + 2] [i_8 + 2] [i_10] [i_10] = ((/* implicit */unsigned int) ((long long int) 2978190184U));
                            arr_44 [i_0] [i_1] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_3 - 1] [i_0]);
                            arr_45 [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 0)) * (var_4))) << (((arr_4 [i_8 - 1] [i_8 - 1]) - (1192121725U)))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 8; i_11 += 4) 
                        {
                            arr_48 [i_0] [i_0] [i_3] [i_8 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_8 + 2] [i_8]))) : (18446744073709551608ULL)));
                            var_18 = ((/* implicit */unsigned int) arr_12 [i_0 + 2] [i_1] [i_3 + 2]);
                            var_19 += ((/* implicit */unsigned char) ((arr_14 [i_11] [i_11] [i_8 + 1] [i_8 - 1] [i_1 + 1] [i_3]) < (arr_14 [i_0] [i_3] [i_8 + 2] [i_8] [i_1 - 1] [3ULL])));
                            var_20 = ((/* implicit */signed char) (~(arr_2 [i_0 - 2] [i_0 - 2])));
                        }
                    }
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        var_21 += ((/* implicit */signed char) arr_17 [i_3 - 3] [i_1] [i_3] [i_12] [5LL]);
                        var_22 += (-(min((arr_51 [i_0] [i_0] [i_0 + 3] [i_0 + 3]), (((/* implicit */unsigned long long int) ((long long int) var_5))))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_50 [i_12]), (((/* implicit */unsigned long long int) -32767LL))))) ? (2181431069507584ULL) : (((unsigned long long int) arr_15 [i_1] [i_1 + 2] [i_1] [(signed char)4]))));
                        var_24 = arr_7 [i_3 - 3];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_3] [i_1] [i_0 - 2] [i_3 + 2] [5LL] [i_1 - 1] [i_1])) ? (0) : (arr_47 [i_0 + 3] [i_1 - 1] [i_0 - 1] [i_3 - 3] [i_3 - 2] [i_1 - 1] [i_1 + 2])));
                        var_26 = ((/* implicit */unsigned char) 8894350485913538550ULL);
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((4695137993931085043ULL) % (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                        /* LoopSeq 3 */
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */short) ((unsigned long long int) arr_52 [i_0 - 2] [i_1 - 1] [i_3 + 1] [i_14]));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_8))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_13] [i_3] [i_3 - 3])) ? (0) : (((/* implicit */int) arr_3 [i_13] [i_1 + 1] [i_3 - 1])))))));
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_17 [4U] [i_1] [i_3 + 1] [i_13] [i_15])) - (9223372036854775807LL)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) | (4ULL))));
                            arr_60 [i_15] [i_13] [i_3 - 2] [i_1] [i_0] &= ((/* implicit */unsigned short) ((4611123068473966592ULL) * (((/* implicit */unsigned long long int) 12U))));
                        }
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_54 [i_1 - 1] [i_1] [i_0 + 3] [i_3 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_54 [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_3 - 1])) + (26))) - (9)))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_49 [i_0] [i_16])) - (93666201153240996ULL)))) ? (((var_3) - (arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0 + 3])))));
                        }
                        var_34 = (+(((/* implicit */int) arr_12 [i_0] [i_0 + 3] [i_0 - 2])));
                    }
                    arr_63 [i_0] [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 17179852800ULL)) && (arr_46 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_1 + 2] [i_0 - 1] [i_0 + 1])))) << (((/* implicit */int) arr_31 [i_0] [i_1 - 1] [i_3] [i_3] [i_0 + 2]))));
                }
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23272)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (0ULL)))) ? (var_2) : (arr_40 [i_0] [i_0])));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) (+(2147483638)));
    var_37 = var_1;
}
