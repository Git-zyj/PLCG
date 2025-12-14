/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3001
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
    var_15 = ((/* implicit */long long int) var_5);
    var_16 ^= ((/* implicit */unsigned int) var_9);
    var_17 = ((/* implicit */unsigned int) max((var_17), (2197692000U)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_3] [i_0] [i_0] |= ((/* implicit */unsigned int) var_2);
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4])))) && ((!(((/* implicit */_Bool) arr_10 [i_0] [1U] [i_2] [i_2] [i_2] [i_3]))))));
                                var_18 -= ((/* implicit */unsigned int) arr_4 [i_2] [i_2]);
                                var_19 = arr_1 [i_1];
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))) && (((/* implicit */_Bool) ((arr_6 [i_2] [i_2]) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
}
