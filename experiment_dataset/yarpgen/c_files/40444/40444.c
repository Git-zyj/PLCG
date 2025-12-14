/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((max(4021244528955360694, 2884))))));
                var_17 = (min(var_17, 16631));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_18 ^= var_13;
                    arr_8 [4] [i_2] [i_2] [i_2] = var_0;
                    arr_9 [i_2] [1] [i_2] = var_6;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [10] [9] [i_1] [i_2] [i_2] = ((var_11 >= ((((var_1 < var_8) - ((var_6 ? var_1 : var_13)))))));
                        arr_13 [i_0] [i_2] [i_2] [i_3] = var_13;
                        var_19 ^= var_14;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_18 [i_2] [19] [8] [i_2] = (var_6 != var_14);
                        var_20 = var_8;
                        var_21 = var_3;
                    }
                }
            }
        }
    }
    var_22 -= var_13;
    var_23 = ((var_5 << ((((62644 ? var_6 : (2884 % 2891))) - 2070730707))));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_21 [i_5] [15] = ((var_10 != (((var_15 && var_0) | (var_12 / var_13)))));
        var_24 = (var_3 == var_4);
        arr_22 [8] = (var_6 <= 16631);
    }
    #pragma endscop
}
