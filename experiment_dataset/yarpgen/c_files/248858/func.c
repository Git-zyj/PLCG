/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248858
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) arr_4 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_0])))));
                            var_17 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_0 [i_0 + 1])))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_5 [i_3 - 1] [i_0 + 1] [i_2]) + (arr_5 [i_3 + 1] [i_0 - 1] [i_2])))) + (var_13)));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_0])) ? (((((((/* implicit */_Bool) var_7)) ? (arr_5 [21ULL] [(unsigned char)13] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_3 [i_1] [i_0])))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)-5539)) : (((/* implicit */int) (signed char)116)))))))));
                            arr_10 [i_0] [13ULL] [13ULL] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-41))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_22 [i_6 - 1] [11ULL] [i_6 - 1] [i_5] [11ULL]), (arr_22 [i_6 - 1] [i_4] [i_6 - 1] [i_5] [i_0])))), (((((/* implicit */int) (signed char)-34)) * (((/* implicit */int) (signed char)0))))));
                                arr_23 [18U] [i_1] [i_1] [i_4] [i_0] [i_4] [i_6] = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((9) - (9))))), (((((/* implicit */int) arr_22 [i_6 - 1] [(unsigned char)19] [(unsigned char)19] [i_5] [i_0])) ^ (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))));
                                var_20 += ((/* implicit */signed char) (+(((arr_16 [i_5 - 3] [i_5] [i_1] [i_5]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (arr_17 [20U] [20U] [20U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))))))))));
                                arr_24 [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [i_1] [i_6]))))) / (((2001585549U) - (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)113), ((signed char)0)))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
                            {
                                var_21 += ((/* implicit */unsigned int) (((-(((/* implicit */int) var_11)))) - (((/* implicit */int) arr_6 [i_0 - 1] [i_5 - 3] [i_1]))));
                                arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 1114652127293875600ULL)) ? (((/* implicit */unsigned long long int) 2293381746U)) : (16207319821980330092ULL))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) - (arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) arr_25 [i_0] [(short)18] [i_0] [16U] [(unsigned char)11] [(unsigned char)11] [i_0])) - (((/* implicit */int) arr_12 [i_0]))));
                            }
                            for (signed char i_8 = 2; i_8 < 21; i_8 += 2) 
                            {
                                arr_33 [i_0] [i_0] [(unsigned char)12] [i_0] [(signed char)6] [i_8] = ((unsigned int) min((((unsigned long long int) arr_2 [i_0] [i_0] [(signed char)0])), (((/* implicit */unsigned long long int) var_5))));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [6U] = ((/* implicit */signed char) var_12);
                                var_23 *= ((((/* implicit */int) ((signed char) arr_0 [i_0 - 1]))) * (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)116)))));
                                arr_35 [i_1] [i_0] [i_1] [i_1] [i_8] [i_5 - 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-113)))) - (min((((/* implicit */unsigned long long int) (signed char)34)), (1114652127293875616ULL)))));
                            }
                            for (short i_9 = 2; i_9 < 21; i_9 += 3) 
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) 20ULL)))) ? (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) arr_36 [8U] [i_1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [1U] [i_5])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))))))) || (((/* implicit */_Bool) var_15))));
                                arr_38 [i_9] [i_9] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-35)), (((((/* implicit */_Bool) arr_17 [i_0] [0] [i_4] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((int) arr_22 [i_0] [i_0] [(_Bool)1] [i_1] [i_0])))))));
                                var_25 = arr_16 [i_0 - 1] [15U] [i_0] [(signed char)18];
                                arr_39 [20ULL] [i_1] [i_1] [20ULL] [i_0] = arr_26 [i_5] [i_5] [i_0] [i_5 + 2];
                            }
                            var_26 = ((/* implicit */unsigned char) ((18446744073709551577ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-59)) / ((+(((/* implicit */int) (signed char)119)))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((arr_26 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((signed char) (_Bool)1)), (((/* implicit */signed char) arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]))))))));
                var_28 = ((/* implicit */unsigned long long int) max((((unsigned int) arr_1 [i_0 - 1])), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((min((((/* implicit */unsigned long long int) arr_5 [i_0] [(short)3] [i_0])), (var_13))) >> (((/* implicit */int) arr_31 [(signed char)22] [(signed char)22] [i_1] [i_0] [(signed char)22] [(signed char)22] [i_0])))) ^ (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 - 1] [i_1])) ? (arr_11 [i_0] [i_0] [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) var_15))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_10);
    var_31 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))), (var_1)));
}
