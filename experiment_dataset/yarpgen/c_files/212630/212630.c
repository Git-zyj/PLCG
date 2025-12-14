/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 |= ((max(((var_8 ? var_1 : var_8)), (arr_0 [i_1 + 2] [i_1]))));

                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    arr_7 [1] [i_0] = ((5268421096776985748 ? ((max(1894067809, (-14658 != var_1)))) : (max(var_7, var_8))));
                    arr_8 [i_0] = (((-5268421096776985748 >= (((-(arr_3 [i_0])))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_11 = (0 > 5268421096776985748);
                    var_12 *= (arr_2 [21]);
                    var_13 += (994442444 != -1012416311086894539);
                    arr_11 [i_0] [i_3] = var_3;
                    var_14 = (max(var_14, (((arr_3 [i_0]) > var_8))));
                }
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    arr_15 [i_0] = ((var_4 > (var_8 - var_8)));
                    arr_16 [5] [i_0] [1] = var_5;
                }
                var_15 = (max((((arr_6 [i_1] [i_1 - 1] [i_1 + 2]) ? var_2 : var_4)), (var_2 > var_5)));
                var_16 = (min(var_16, 5268421096776985748));
            }
        }
    }
    var_17 = 397776420;
    #pragma endscop
}
