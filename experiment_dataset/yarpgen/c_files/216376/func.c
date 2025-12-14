/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216376
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) << (((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) - (6893)))))), (((unsigned int) var_5))));
                var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((((/* implicit */_Bool) var_4)) || (arr_2 [i_0] [(unsigned short)3]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) var_9))))))) : (((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) >> ((((-(var_2))) - (1989701071)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    var_13 *= ((/* implicit */long long int) (!(arr_2 [i_1 + 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
                                arr_13 [i_2] = ((/* implicit */unsigned short) arr_1 [i_3]);
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_3 + 1])) ? (arr_8 [i_2 + 1] [i_2 + 1] [(unsigned short)2] [i_2]) : (((/* implicit */long long int) ((unsigned int) arr_1 [i_1])))));
                                arr_14 [i_2] [i_1 - 1] [i_3 + 2] = ((((/* implicit */int) arr_0 [i_1 + 1] [i_2 + 1])) >> (((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 2])));
                            }
                        } 
                    } 
                }
                arr_15 [i_1 + 1] &= ((/* implicit */long long int) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned char i_6 = 4; i_6 < 13; i_6 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_6 + 2] [i_6 - 1] [i_5]))))) ? (((min((((/* implicit */unsigned int) var_6)), (var_3))) << (((((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 3] [i_6])) + (16383))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((short) var_4)))))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ ((((!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [(signed char)1])))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) arr_19 [6] [i_6] [i_5])) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(signed char)8] [(signed char)12] [i_5])) || (((/* implicit */_Bool) var_7)))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_2);
    var_18 = ((/* implicit */short) (~(min((min((((/* implicit */unsigned int) var_7)), (var_3))), (((/* implicit */unsigned int) var_8))))));
}
