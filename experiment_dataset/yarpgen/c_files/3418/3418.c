/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = 240;
                var_19 ^= (~((((arr_4 [i_1]) == var_5))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_20 = (arr_0 [i_2]);
                    arr_14 [i_2] [i_3] [i_2] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
