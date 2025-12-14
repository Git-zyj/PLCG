/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(var_10, (((((((-127 - 1) ? 2 : var_0))) > var_9)))));
        arr_3 [i_0] = ((7034339412487004920 ? (arr_1 [i_0]) : var_0));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((arr_2 [5]) + (((arr_2 [i_2]) ? (arr_1 [i_0]) : 1)))))));
                    var_12 = (((((~(arr_0 [i_1])))) - (var_7 - var_3)));
                    var_13 = (arr_7 [i_1 - 3] [i_1]);

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_14 = (((var_4 > var_1) ? var_7 : -29775));
                            var_15 -= ((1 < (arr_11 [i_1 - 1] [i_3 - 2] [i_4 + 4] [i_3 - 2] [i_4])));
                        }
                        var_16 += var_9;
                        var_17 = 60577;
                        var_18 = (0 < 10771707044667911044);
                    }
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_0] [3] [2] [i_2] [i_0] &= ((-((-1 ? 1952590602847586457 : 3))));
                        var_19 = -1513528298;
                    }
                    var_20 = (arr_6 [8] [i_1 - 1] [i_0] [7]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_21 [i_6] = (arr_19 [i_6]);
        var_21 = ((46 || ((((29 + (arr_19 [i_6]))) < -32))));
        arr_22 [i_6] |= (min(20274, 4294967295));
        arr_23 [i_6] = var_6;
    }
    var_22 &= ((18446744073709551615 ? ((0 ? -1 : var_9)) : var_5));
    #pragma endscop
}
