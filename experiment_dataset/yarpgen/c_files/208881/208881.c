/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = ((570961090322919287 ? var_12 : (max((max(-29, 7589789962995936692)), var_18))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (min(-29, (max(67, 18451))));
                arr_8 [i_1] = (arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (max((arr_6 [21] [21]), (min(var_4, (((87 || (arr_6 [i_1] [i_1]))))))));
                            arr_15 [i_1] [i_2] [i_3] = ((arr_1 [i_1] [i_1]) ? -88 : (((arr_14 [9] [i_0] [i_1 - 3] [i_2]) + 2571156232)));
                            arr_16 [i_0] [i_1] [i_2] = var_5;
                        }
                    }
                }
                arr_17 [i_1] = (max((var_4 && var_11), (max(var_13, (var_2 && 1)))));
            }
        }
    }
    #pragma endscop
}
