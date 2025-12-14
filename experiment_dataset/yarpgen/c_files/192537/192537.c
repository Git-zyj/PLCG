/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = var_1;
                    arr_10 [i_0] [i_2] = (arr_7 [i_0] [i_0]);
                    arr_11 [i_0] [i_1] [i_0] = (((min(27168, ((1 ? 18446744073709551614 : 1)))) - ((max(983040, (1 ^ 0))))));
                    arr_12 [i_0] [2] [i_0] [i_2] = min(9760870317692661328, ((1676628491 & (arr_8 [i_1 - 1]))));
                }
            }
        }
    }
    var_16 = (max(var_16, (((var_8 ? var_8 : ((~((1 << (var_2 - 653254223))))))))));
    #pragma endscop
}
