/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 += (max(((min(65535, 12))), (min((max(-7701555476501254546, (arr_9 [i_0] [i_1 + 2] [5]))), ((max(-570311565, 2147483635)))))));
                            arr_11 [i_0] [i_1 - 1] [i_1] [4] [i_3] |= (min((max(var_12, 2147483635)), ((min(var_2, var_2)))));
                            var_16 &= min((max(var_5, var_11)), ((min((max((arr_9 [i_0] [i_1 + 2] [i_3]), 106)), 0))));
                            arr_12 [i_0] [i_2] = (max(-7114814339897431778, 7114814339897431765));
                        }
                    }
                }
                var_17 = (min(((min(var_4, var_14))), (min((max(7114814339897431751, var_7)), (max(580872245, 7114814339897431733))))));
            }
        }
    }
    var_18 &= (max(var_9, (min(((max(var_13, var_14))), (min(var_7, var_11))))));
    var_19 = var_2;
    #pragma endscop
}
