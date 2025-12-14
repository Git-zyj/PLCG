/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40569
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
    var_11 = ((/* implicit */signed char) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-13375)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) (unsigned char)6)))));
                arr_6 [4ULL] [i_1] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 2])) ? (arr_3 [i_0 - 2] [i_0 - 2]) : (((/* implicit */int) (unsigned short)1920))))));
                arr_7 [i_1] [i_1] = ((/* implicit */short) (unsigned char)79);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_2 [i_0]))))));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)43)) || (((/* implicit */_Bool) (unsigned char)29))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) var_2);
                                arr_19 [i_0] [i_1] [i_1] [12U] [i_1] [(unsigned char)12] = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_28 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)68)) ^ (((((/* implicit */int) (unsigned short)36335)) / (((/* implicit */int) (unsigned char)190))))));
                                arr_29 [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) ((var_4) << (((((/* implicit */int) (signed char)68)) - (39)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    arr_40 [i_8] = ((/* implicit */unsigned int) (~(min((min((var_0), (arr_35 [(unsigned short)4]))), (((/* implicit */long long int) arr_36 [i_8] [i_8 + 1] [i_8 + 2] [i_8 + 3]))))));
                    arr_41 [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_31 [i_7] [16ULL])) : (((/* implicit */int) arr_31 [i_7] [i_7]))))) : (min((((/* implicit */unsigned long long int) (unsigned char)123)), (arr_34 [(unsigned char)0] [i_8] [(unsigned char)7]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8 + 2] [i_7]))))))));
                    arr_42 [1ULL] [i_8] [i_8] [i_8 - 2] |= ((/* implicit */long long int) arr_34 [i_7] [i_7] [i_7]);
                }
            } 
        } 
    } 
}
