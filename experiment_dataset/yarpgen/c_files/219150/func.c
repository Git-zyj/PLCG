/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219150
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) var_15);
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_4))));
                            arr_12 [i_1] [i_1] [3U] [i_1] = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) var_16);
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_8))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                arr_17 [1U] = ((/* implicit */unsigned long long int) var_0);
                var_21 = ((/* implicit */unsigned int) var_16);
            }
        } 
    } 
}
