/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 562949416550400;
    var_19 = (((((115 * 16) ? var_0 : (max(var_2, var_4)))) / var_16));
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 += (arr_3 [i_0] [i_0] [i_2]);
                            var_22 = (max(((~((~(arr_5 [i_1]))))), ((16 ? (arr_2 [i_2] [i_3]) : (4 == 239)))));
                        }
                    }
                }
                var_23 = (max(var_23, -14));
            }
        }
    }
    #pragma endscop
}
