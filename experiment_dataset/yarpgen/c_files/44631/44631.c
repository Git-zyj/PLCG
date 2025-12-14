/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_4;
    var_17 = min(((~((var_9 ? var_12 : -55)))), 6087);
    var_18 = (((((min(var_5, ((145813878 ? 1 : var_0)))) + 2147483647)) >> (var_5 + 112)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, 3749337985987683786));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (~var_12)));
                                var_21 = (max(var_21, (+-2723396789)));
                                arr_16 [14] [i_3] [i_2] [i_3] [14] = ((((~(arr_3 [i_4 - 1]))) << (((((arr_3 [4]) + 1745480256)) - 22))));
                                var_22 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
