/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (54925 < 8191);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (~var_7)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = (max((((~(min(var_8, (arr_5 [15] [i_1])))))), ((var_1 ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_7))));
                        arr_13 [i_2] [i_1 - 1] [i_1] [1] = var_4;
                        arr_14 [3] [i_1] [i_1] [i_2] [i_3] [i_3] = ((max(4294967295, (15036346031313906011 < 15036346031313906011))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_16 ^= (((!15036346031313906011) >= 15036346031313906011));
                        arr_17 [i_0] [9] [i_2] [i_0] [i_1] = var_9;
                        var_17 = (min(var_17, var_12));
                        var_18 *= (arr_10 [i_0] [i_1 - 1] [2] [6] [i_2] [i_4]);
                        arr_18 [i_0] [i_1] [i_1 - 1] = (((((max(3410398042395645605, 15036346031313906011))) ? (arr_7 [i_0]) : -1475051181)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
