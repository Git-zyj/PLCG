/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += (min((min((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1]))), 126));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 |= 0;
                            var_14 = (min(var_14, (((((~(11 / 16))) * (((arr_1 [i_3] [1]) ? (((var_0 + 2147483647) << (((arr_2 [4] [12]) - 1)))) : 4194302)))))));
                            var_15 = 32;
                            arr_10 [i_2] [i_2] [11] [i_0] = var_11;
                        }
                    }
                }
            }
        }
    }
    var_16 = (((min(var_1, (!48))) > var_11));
    var_17 = ((~var_10) < ((~((9634500604618120528 ? var_1 : var_6)))));
    #pragma endscop
}
