/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239053
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
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [15ULL] [i_0] [i_2] = ((/* implicit */short) var_11);
                    var_14 = ((/* implicit */unsigned int) (unsigned char)243);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [7] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
                                arr_13 [i_0] [i_0] [i_0] [(short)15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
}
