/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208466
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    var_10 = arr_4 [i_2];
                    arr_9 [(signed char)6] [(signed char)6] &= ((/* implicit */unsigned short) arr_3 [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) arr_4 [i_4]))));
                arr_17 [13ULL] [13ULL] = ((/* implicit */long long int) arr_10 [i_4]);
            }
        } 
    } 
}
