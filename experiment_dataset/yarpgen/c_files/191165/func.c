/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191165
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) (~(min((var_3), (((/* implicit */int) var_10))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_2] [(unsigned char)17] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (arr_0 [i_0])));
                        arr_11 [i_3] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [(short)13] = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_2])) : (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [(unsigned short)15] [i_4] [i_0] [i_4])) : (arr_4 [i_0] [18U] [18U]))))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 3; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [i_5] [i_5] [i_5] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned short) min((min((min((arr_13 [i_2] [i_4]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_5 - 1] [i_4] [i_4] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (short)10183))))), (((var_3) << (((((/* implicit */int) var_5)) - (1))))))))));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_4] [i_5 - 1] = ((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_4] [i_2]);
                        }
                        arr_19 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_0 [i_0])));
                        arr_20 [i_1] [i_1] [i_2] [(short)9] [(short)15] [i_0] = ((/* implicit */short) arr_2 [i_0]);
                        arr_21 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_0] [i_4] [i_4]);
                    }
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((arr_0 [18LL]), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) max((var_8), (arr_9 [i_0] [i_0] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_11 = ((((/* implicit */int) min((var_8), (var_2)))) * (((((/* implicit */int) var_2)) >> (((min((var_7), (((/* implicit */long long int) var_3)))) + (8195141242281667491LL))))));
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (int i_7 = 3; i_7 < 8; i_7 += 3) 
        {
            for (short i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_32 [i_6] [i_7] [i_8 - 1] [i_7 - 2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((/* implicit */short) ((arr_3 [i_7] [1LL]) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (arr_1 [i_7 + 2]))))));
                        arr_33 [(unsigned char)4] [(unsigned char)6] [i_7] [i_6] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((((arr_4 [i_7] [i_8] [i_9]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_7 + 1] [i_7 + 1] [i_8] [i_9] [(short)6]))))), (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_6] [i_8] [i_8] [i_9] [i_7 - 2])))))))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 3) 
                    {
                        arr_36 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_8 - 1] [i_8 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_8 - 1])), (arr_13 [i_6] [i_7 + 2])))) ? (arr_23 [i_8 - 1] [i_10 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_8))) >> (((((((/* implicit */_Bool) arr_16 [i_6] [1ULL] [i_6] [1ULL] [i_7])) ? (((/* implicit */int) arr_29 [i_6] [i_7] [i_8])) : (((/* implicit */int) var_2)))) - (60033))))))));
                        arr_37 [i_6] [i_7] [i_10 - 1] [i_10] |= ((/* implicit */long long int) max((max((((arr_0 [(unsigned short)11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10] [i_10] [i_10] [i_8] [i_10]))))), (((_Bool) arr_35 [i_7] [i_7] [i_10 + 1] [i_6])))), ((!((_Bool)1)))));
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_41 [i_6] [i_7 - 1] [i_7 - 1] [i_7] [i_11] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_2 [i_7 - 1]))), (((/* implicit */unsigned int) ((max((arr_13 [i_6] [9LL]), (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_23 [4] [4])))))))));
                        arr_42 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_6)), (((unsigned short) ((((/* implicit */_Bool) arr_29 [(short)7] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (12435965175883058537ULL))))));
                        arr_43 [(short)0] [i_7] [0U] [i_11] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned short) arr_39 [i_6] [(signed char)2] [(signed char)2] [i_6])), (arr_30 [i_6] [i_7] [i_7] [i_11] [i_7] [(unsigned short)9]))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) (-2147483647 - 1)))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_27 [i_6] [(_Bool)1] [i_11]), (((/* implicit */short) var_5))))), (max((((/* implicit */int) arr_5 [i_6] [i_7] [i_7] [i_11])), (2147483647))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_47 [i_7] = ((/* implicit */unsigned int) min((min((1553460671502185227LL), (((/* implicit */long long int) (short)8500)))), (((/* implicit */long long int) (+(arr_12 [i_6] [i_7 + 2] [i_8 - 1] [i_7 + 2] [i_12] [18U]))))));
                        arr_48 [i_6] = ((/* implicit */unsigned int) ((int) ((short) 7)));
                        arr_49 [i_6] [i_7 + 1] [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_7 - 2] [i_8 - 1] [i_8]))))), (arr_16 [i_7] [(_Bool)1] [i_8] [i_7 - 2] [i_6])));
                    }
                }
            } 
        } 
    } 
}
