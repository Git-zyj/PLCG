/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_13;
    var_21 = ((((min((((((-32767 - 1) + 2147483647)) >> (var_7 - 304216696342555925))), var_6))) ? -562003518 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [1] [i_1] [i_1] [i_3] = (-562003518 >= -562003518);
                            arr_13 [i_3] [i_2] [i_0] [i_1] [i_0] = (arr_7 [12] [i_1 - 1] [i_3]);
                            var_22 = var_6;
                        }
                    }
                }
                var_23 = (~45);
            }
        }
    }
    #pragma endscop
}
