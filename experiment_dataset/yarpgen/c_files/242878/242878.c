/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(var_12, var_11)), var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += (min(var_10, var_3));
                var_18 = (min(var_4, var_4));
                arr_6 [i_0 + 1] [i_0] [i_1] = var_7;
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 ^= (max(var_2, (max(var_13, var_8))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    arr_14 [i_3] = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (min((min(var_7, var_6)), var_5));
                                var_21 ^= (min((min(var_8, var_8)), (max(((min(var_1, var_11))), (min(var_4, var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
