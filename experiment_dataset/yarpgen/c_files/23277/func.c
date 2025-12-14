/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23277
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_1] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                            var_16 = ((/* implicit */unsigned char) arr_5 [i_0] [i_3 - 1]);
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                    } 
                } 
                var_17 |= ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                var_18 += ((/* implicit */unsigned short) arr_3 [(signed char)4] [i_1]);
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_4 - 2] [i_1]))));
                            arr_19 [i_0] [(signed char)14] [i_4] [i_5 - 2] = ((/* implicit */signed char) arr_16 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_8);
}
