/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = ((max(var_3, var_13)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [18] &= (max(212, -var_9));
        var_17 = (min(var_4, (var_12 ^ 43)));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 -= var_7;

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [15] [i_2 + 2] [i_1] [i_3 + 3] [i_4] = (max(((min(43, (!1)))), (((var_4 * var_1) % var_7))));
                        arr_15 [i_1 - 1] [i_3] [i_1] = var_1;
                        var_19 -= var_2;
                        var_20 = 6938;
                        var_21 = (1015260383 || -748146248);
                    }
                }
            }
        }
        var_22 = (((-19 != 124) != var_9));
        var_23 = var_11;
        var_24 = var_8;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_25 = 1015260383;
        var_26 += var_1;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        arr_23 [i_6] = -69;
        var_27 = (max(var_27, 66));
        var_28 -= var_9;
    }
    #pragma endscop
}
