/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210609
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_6);
                arr_6 [i_0] [(unsigned char)8] &= ((/* implicit */unsigned long long int) max((((var_10) | (((/* implicit */int) arr_4 [i_0] [i_0 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2ULL])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_7);
                                var_14 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_15 [i_0] [i_3] [i_2 + 1] [i_0] [i_0])), ((short)-17032)))) == (arr_8 [i_1] [i_1] [i_0]))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (var_9))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)17042)))))));
                                arr_17 [i_0 + 3] [i_1] [i_0] [i_2 - 3] [(unsigned char)13] [i_4] = ((/* implicit */signed char) min((((((1073733632) <= (((/* implicit */int) (short)-17046)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) : (((((/* implicit */_Bool) (short)-17045)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (216172782113783808ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned long long int) var_1)) != (var_3))), (((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_2 - 3] [i_3] [i_4 - 1])))))))));
                            }
                        } 
                    } 
                } 
                var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) (short)17043)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [(short)15] [i_1] [(short)15]))));
                var_16 = ((/* implicit */int) ((min((((/* implicit */unsigned int) min((var_7), (arr_7 [i_0] [i_1] [i_1])))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (728602151U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 16; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17017)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) : (14U)));
                    var_18 *= ((/* implicit */signed char) 2291798069U);
                }
            } 
        } 
    } 
}
