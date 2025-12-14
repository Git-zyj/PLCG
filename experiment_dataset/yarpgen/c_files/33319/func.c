/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33319
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
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) -490107929)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */int) arr_7 [i_2] [i_2]))))) && (((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 - 3] [i_4] [i_4 + 4] [i_4 + 1] [i_4 - 3])))))) & ((-(2256497008U)))));
                                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [(_Bool)1] [(short)6] [i_4])) < (arr_6 [i_0]))), (arr_10 [i_4 + 1] [i_2] [7LL] [i_0])))), ((((!(((/* implicit */_Bool) 2101610677)))) ? (((arr_8 [i_0] [i_3] [i_2] [i_3]) / (((/* implicit */long long int) 5U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 + 4] [i_4 - 2])))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0])))) ^ ((-(18446744073709551612ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1606))) >= (arr_11 [i_0] [i_1] [i_1] [i_1])))), (min((1300990210), (((/* implicit */int) arr_14 [(unsigned short)7] [i_2] [(unsigned short)7] [i_2] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}
