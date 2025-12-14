/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (max(64, 2967370585));
                    arr_7 [i_0] [3] [i_2] [i_1 - 1] = var_13;
                    var_16 = (min(var_16, var_13));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_17 = var_6;
        var_18 = 255;
    }
    for (int i_4 = 4; i_4 < 17;i_4 += 1)
    {
        var_19 = var_11;
        var_20 = var_15;
        arr_13 [i_4 - 4] [11] = 65535;
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        arr_18 [i_5 - 1] = -2491;
        var_21 = -var_0;
    }
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = ((var_2 ? ((-(arr_20 [21]))) : (arr_19 [i_6 - 1])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_22 = (arr_19 [i_6 + 2]);

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_34 [i_10] [i_9] [i_6] [i_7] [i_6] = -3178242191895711745;
                            arr_35 [i_6] [i_8] [0] [i_6] = (~var_10);
                            arr_36 [i_6 + 2] [i_7] [i_8] [i_6] = -28;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
