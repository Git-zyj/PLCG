/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239030
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
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(signed char)5] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) << (((((arr_4 [i_0] [i_0] [i_2]) + (((/* implicit */unsigned int) arr_2 [i_0])))) - (2222408278U))))))));
                    var_20 += ((/* implicit */_Bool) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_2 [i_1]) & (arr_2 [i_0])))) * (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) ^ (arr_0 [i_4])))) | (arr_5 [i_0] [i_0] [i_4 - 1])))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) arr_3 [i_3]);
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */short) ((arr_9 [i_0] [i_0] [i_1] [i_2]) << (((arr_5 [i_0] [i_1] [i_2]) - (14984385988221332451ULL)))));
                }
            } 
        } 
    } 
}
