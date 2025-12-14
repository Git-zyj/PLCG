/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_14, (((((max(12505, 4193792))) ? 7 : var_9)))));
    var_20 = (min(var_20, 15403));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = var_13;
                var_22 = (((((arr_3 [i_1 - 2] [i_0 + 2] [0]) ? (arr_3 [i_1 - 2] [i_0 + 2] [i_0]) : 0)) | (min((arr_3 [i_1 - 2] [i_0 + 2] [i_0 - 1]), (arr_3 [i_1 - 2] [i_0 + 2] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [8] [i_0] [i_3] |= 15409;
                            arr_9 [i_0] [i_1] [i_2] [i_0] = (max(var_12, -var_0));
                        }
                    }
                }
            }
        }
    }
    var_23 = (60181 ? 0 : 2147475456);
    var_24 &= var_2;
    #pragma endscop
}
