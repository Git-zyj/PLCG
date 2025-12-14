/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = arr_5 [i_0] [i_1] [i_1] [4];
                    var_15 = ((114 ? (arr_4 [4] [i_0]) : (((((arr_3 [i_1 - 2]) ? -107 : var_12))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_16 = -69;
                arr_12 [i_3] [i_4] = arr_11 [i_3] [i_4];
                var_17 = arr_11 [i_3] [i_4];
            }
        }
    }
    #pragma endscop
}
