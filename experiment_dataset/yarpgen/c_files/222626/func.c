/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222626
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            {
                arr_12 [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_2 - 2]);
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_2]))));
                var_20 = ((/* implicit */int) arr_4 [i_2] [i_3] [i_2 - 2]);
            }
        } 
    } 
}
