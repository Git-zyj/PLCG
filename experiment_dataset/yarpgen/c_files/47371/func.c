/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47371
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) arr_5 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_3 - 2]))) : (((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (arr_0 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                            arr_13 [i_1] = ((/* implicit */_Bool) 73502473);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_3] [(unsigned short)10] [i_4] = ((/* implicit */long long int) arr_8 [i_0] [(_Bool)1] [i_3] [i_1]);
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) < (arr_5 [i_0] [i_1] [i_1])));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (var_11) : (((/* implicit */long long int) arr_10 [i_1]))));
                                var_24 = ((/* implicit */long long int) ((signed char) (((_Bool)1) ? (arr_5 [i_0 + 3] [i_1] [i_0]) : (-716584289118999010LL))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    arr_24 [i_5] = ((/* implicit */_Bool) max((var_6), (((((/* implicit */_Bool) arr_18 [(unsigned short)5] [(unsigned short)5])) ? (arr_18 [i_5] [i_5]) : (((/* implicit */long long int) arr_19 [i_7] [i_6] [i_5]))))));
                    arr_25 [i_6] [i_5] = ((/* implicit */short) arr_19 [i_7] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_31 [i_5] [i_6] [i_7] [i_9] = ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27765))) : (((((/* implicit */_Bool) (signed char)69)) ? (((((/* implicit */_Bool) arr_20 [i_8] [i_5])) ? (arr_22 [i_6] [i_6] [i_5]) : (((/* implicit */long long int) 1277783241)))) : (((/* implicit */long long int) arr_19 [i_9] [i_6] [i_6])))));
                                arr_32 [i_5] [i_5] [i_6] [i_5] [6] [i_8] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_9])) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) arr_29 [i_5] [i_5] [i_7] [i_7] [i_8 - 1] [(signed char)3])))));
                            }
                        } 
                    } 
                    arr_33 [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_30 [i_7] [i_6] [20ULL] [i_7] [(short)15] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_6])) ? (max((((/* implicit */int) var_13)), (-1277783241))) : (2147483626))) : (((((/* implicit */_Bool) arr_27 [i_7] [(unsigned char)2])) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) arr_27 [i_6] [i_7]))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (var_9) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) var_16))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_19))))));
}
