/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [14] = arr_0 [i_0];

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((93 * ((-83900838 ? -9532 : -83900827))));
            var_14 = ((!(arr_5 [9])));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = (max(((-(arr_7 [i_0]))), (~-1908446813)));
            var_15 -= (max((((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_2]) + 15854)) - 10)))), (max((!var_10), (arr_1 [i_0] [i_0])))));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 = (min((~0), ((((arr_7 [i_0]) != 1312263301)))));
                            arr_16 [i_4] = var_5;
                            var_17 |= (((((-83900838 && (((3140837556843409218 ? 16243 : (arr_1 [i_0] [i_2])))))))) & ((-238795470 ? (min((arr_15 [i_0] [i_0]), 268435456)) : 83900827)));
                        }
                    }
                }
                var_18 = min(((-(arr_0 [i_2]))), (((arr_0 [i_3]) - (arr_0 [i_0]))));
                var_19 = (min(var_19, ((((arr_7 [i_0]) << (-2054200038 + 2054200051))))));
            }
            var_20 = (min(((min(var_10, 83900828))), -11157222572978575309));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_20 [i_0] [10] = var_9;
            arr_21 [i_6] [i_0] [i_0] = (max((((arr_12 [i_0] [i_6] [i_6] [i_6]) ? (min((arr_11 [i_0]), 65521)) : (((min((arr_17 [i_0] [i_0]), (arr_5 [i_0]))))))), ((((var_4 ? 1892329989 : 4294967295))))));
        }
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        arr_25 [i_7 + 2] [i_7] = ((min((arr_15 [i_7] [i_7 - 1]), (~var_5))));
        var_21 = (min(var_21, (((~((-16531 ? 1577042157 : 15364315313181731750)))))));
    }
    var_22 = (max(var_22, -86));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_23 = (!-83900827);
        arr_28 [i_8] [i_8] = ((var_1 ? (((arr_27 [i_8]) ? 11382628167705762308 : var_0)) : (((arr_27 [i_8]) ? (arr_27 [i_8]) : var_11))));

        for (int i_9 = 4; i_9 < 22;i_9 += 1)
        {
            arr_32 [i_8] [0] [i_9 + 1] = (arr_31 [i_9 + 2] [i_9 - 1]);
            var_24 = (min(var_24, (2147483647 < 16390826017334210256)));
            var_25 = (!11746930813641834891);
            var_26 &= var_4;
        }
        var_27 += (arr_31 [i_8] [i_8]);
    }
    #pragma endscop
}
