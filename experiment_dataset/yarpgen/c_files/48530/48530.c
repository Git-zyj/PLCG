/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 2047;
    var_19 = (max(var_19, 504));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_20 += 0;
        arr_3 [i_0] = 86;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_1] = 47066;
            var_21 = 15108;
            var_22 = 2;
        }
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 = 4829750892263933906;
                                var_24 |= 53574;
                            }
                        }
                    }
                    var_25 = -1;
                    arr_20 [i_1] [i_4] = 31925;
                    arr_21 [i_1 + 3] [i_3] [i_1] [i_3] = (-127 - 1);
                }
            }
        }
    }
    var_26 = 127;
    #pragma endscop
}
