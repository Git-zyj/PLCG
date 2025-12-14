/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [16] [8] [i_1] = var_11;
                arr_6 [i_0] [i_1] [i_0] = (min(var_3, var_12));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_19 = var_8;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (max(var_20, var_0));
                        arr_12 [i_3] [i_2] [i_1] [i_1] [i_0] = var_0;
                        var_21 = (max(var_21, -127));
                        var_22 = 3380088429;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_16 [i_4] [i_2] [i_2] [i_2] [i_2] [i_0] &= -26016;
                        arr_17 [i_4] [10] [i_1] [i_4] = var_1;
                        var_23 = var_13;
                        var_24 *= var_12;
                        var_25 = (max(var_25, var_10));
                    }
                    var_26 = var_7;
                    arr_18 [i_1] [i_2] = var_0;
                }
            }
        }
    }
    var_27 -= var_10;
    var_28 = (-(max(-61, 4193792)));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = 112694078;
        var_29 = -3607921231;
    }
    #pragma endscop
}
