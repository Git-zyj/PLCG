/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24200
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
    var_12 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)34496)) : (((/* implicit */int) min(((unsigned short)7), ((unsigned short)31040))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)37388)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_10), (((/* implicit */short) var_11))))), (max((((/* implicit */unsigned int) arr_5 [i_3])), (var_4)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_16 [(_Bool)1] [i_4] = ((/* implicit */unsigned short) var_7);
                    arr_17 [i_2] &= ((/* implicit */short) var_11);
                    arr_18 [i_2] [i_3] [(unsigned short)10] [(short)14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 - 2])) ? (arr_6 [i_4] [i_2 - 2]) : (var_6)));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_22 [i_2] [i_2] [i_5] = ((/* implicit */short) arr_13 [i_2] [i_2]);
                    arr_23 [i_3] [i_3] [i_5] [i_2] = ((/* implicit */unsigned int) var_6);
                    var_16 = ((/* implicit */_Bool) var_5);
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_2]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        arr_29 [i_2] [i_7] [i_6] [(short)1] = arr_11 [i_2 - 2] [i_2 - 2];
                        var_18 = ((/* implicit */int) var_0);
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [(unsigned short)4]))) : (var_6))) : (((/* implicit */unsigned long long int) var_4)))))));
                        var_20 = ((/* implicit */unsigned char) var_9);
                    }
                    for (int i_8 = 1; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_0);
                        var_22 = ((/* implicit */long long int) var_8);
                        arr_33 [i_8 + 2] [i_8] [i_6] [i_3] [i_2] = ((((/* implicit */_Bool) arr_25 [i_8 + 2] [i_2 + 1] [i_2 - 1] [3ULL])) ? (var_2) : (var_2));
                    }
                    for (int i_9 = 1; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        arr_37 [i_9] [i_3] [i_3] [i_3] [i_9] [i_3] = ((((/* implicit */_Bool) arr_34 [i_2] [i_3] [i_2] [i_6] [i_9 + 2] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_9] [(short)12])));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 119606349)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [i_9] [i_6] [i_9] [i_9]))) : (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) : (4294967295U)))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        arr_40 [i_2] = ((/* implicit */_Bool) var_7);
                        arr_41 [i_2] [i_2] = ((/* implicit */unsigned int) arr_5 [i_10]);
                        arr_42 [i_2 - 1] [i_2 - 1] [i_6] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2])))))) ? (((/* implicit */int) arr_27 [i_10] [i_2 - 1] [i_2] [i_10] [i_10 - 3])) : (((/* implicit */int) var_7))));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) max((min((min((((/* implicit */unsigned int) var_5)), (arr_8 [i_2] [4U]))), (max((var_9), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max(((unsigned char)120), (((/* implicit */unsigned char) (signed char)-126))))) : (((/* implicit */int) arr_30 [i_2 - 1] [i_3] [i_11] [(signed char)0] [i_12])))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) max((2097151ULL), (((/* implicit */unsigned long long int) (short)32755)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
