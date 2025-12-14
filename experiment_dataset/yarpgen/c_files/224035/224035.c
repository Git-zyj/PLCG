/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (784234081553729737 + var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = ((~(min(var_10, ((var_2 ? 32 : 268402688))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [0] [i_1] [i_0] [i_0] [i_4 + 1] = ((~((9 ? 17662509992155821879 : ((1 ? 17662509992155821878 : 1))))));
                                arr_16 [i_2 + 1] [i_1] [i_0] = ((!(((+(((arr_2 [i_2 - 1] [i_3]) - var_11)))))));
                                var_16 = (((((arr_12 [i_4 + 1] [i_1] [i_1] [i_0] [14] [14]) | var_2)) != 1895915620));
                                var_17 ^= (((2047 * var_4) ? ((((arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_2 - 2]) && ((((arr_12 [i_0] [i_1] [i_1] [i_2] [13] [i_4]) ? -17179 : 1)))))) : (var_1 != 1)));
                                var_18 = ((var_5 ^ (((28400 > 65535) << 1))));
                            }
                        }
                    }
                    arr_17 [i_2 - 2] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
