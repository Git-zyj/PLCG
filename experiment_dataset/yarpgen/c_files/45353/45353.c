/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 + (!var_13)));
    var_20 = var_0;
    var_21 = (min(984087322, 22015));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 ^= ((~(arr_6 [1] [i_0 + 2] [i_0 - 1])));
                    var_23 = (min(var_23, var_8));
                    arr_10 [i_0] [i_1 + 2] [1] &= 12823593926050533954;

                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [7] [7] = var_4;

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_24 = (max(var_24, var_7));
                            var_25 = ((984087321 ? -0 : (arr_2 [i_0] [3] [i_3])));
                            arr_17 [21] [21] [1] [i_3] [i_3] = ((var_5 | (arr_2 [i_2] [23] [i_0])));
                        }
                    }
                }
            }
        }
        arr_18 [i_0 - 1] = ((!(var_7 > var_17)));
        var_26 = var_12;
        var_27 = (~(arr_8 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]));
        var_28 = var_14;
    }
    #pragma endscop
}
