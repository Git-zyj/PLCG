/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 ^= 16;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (var_3 && 533980865);
                                arr_15 [i_0] = ((4213865541 <= ((1 ? 5936 : 4294967295))));
                            }
                        }
                    }
                    var_15 = 4294967295;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            {
                var_16 = (min(var_16, (arr_18 [i_6] [i_5])));
                var_17 = (arr_18 [i_5] [i_6]);
            }
        }
    }
    #pragma endscop
}
