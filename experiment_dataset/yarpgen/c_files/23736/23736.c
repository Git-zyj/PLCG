/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_10 = (min(var_10, ((((arr_1 [i_0]) ? -0 : (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_11 = (min(var_11, (((var_0 ? 13017660874181242351 : (var_4 | 1))))));
            var_12 += 188;
            var_13 = (((arr_2 [i_1] [i_1] [i_1 + 1]) ? var_9 : 3));
            arr_4 [i_0] [i_0] = var_2;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (!-var_6);
            arr_9 [8] [i_2] = (((arr_6 [i_0 - 3] [i_0 - 3]) ? var_0 : (arr_6 [i_0 + 2] [i_0 + 2])));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_14 = 4704283799886400541;

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                arr_16 [i_3] = 14622274612371189959;
                var_15 = (max(var_15, var_4));
                var_16 = (((arr_2 [i_0 + 1] [i_4 - 1] [i_4]) ? (arr_2 [i_0 - 2] [i_4 + 1] [i_4]) : -1));
                var_17 = (min(var_17, (((var_4 / ((var_4 ? var_5 : var_0)))))));
                arr_17 [i_0] [i_0] [i_3] [8] = (11088374187672681823 <= 0);
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_18 = ((var_5 ? -11163 : (0 | 157)));
                var_19 *= (((((163 ? var_7 : 1))) ? var_2 : 124));
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_24 [i_6] [i_3] [i_3] [i_3] = (arr_2 [7] [7] [7]);
                arr_25 [i_6] [i_3] = (arr_5 [i_0] [1]);
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_20 = (-418622461 * 11538229878364364392);
                var_21 = ((var_2 ? (arr_20 [i_0 + 3] [i_0 + 1]) : -1));
                arr_28 [i_0] [i_7] [i_7] = ((1 ? var_3 : (6 / 62)));
                arr_29 [i_7] [i_3] [i_0] [i_7] = (((var_9 < 0) == 0));
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_22 = (((arr_7 [i_0 - 2] [i_0 - 2] [6]) ? (arr_7 [i_0 - 3] [i_0 - 2] [i_0]) : 4027107298));
            arr_32 [i_0] [i_0] = ((((var_7 ? (arr_11 [0] [0] [0]) : var_8))) ? var_8 : (~2));
        }
    }
    var_23 = ((~(((~1572689990) ? ((-418622461 ? 65412 : var_9)) : var_8))));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                arr_37 [i_9] [1] [i_10] = ((var_1 >> ((var_0 ? 0 : 13017660874181242351))));
                var_24 = ((-(((((0 ? var_9 : 4294967295))) + var_5))));
                var_25 = ((((((arr_35 [i_9] [i_10]) ? 68 : (((!(arr_33 [i_9] [i_10]))))))) ? ((var_5 ? var_6 : 120)) : (!var_9)));
            }
        }
    }
    #pragma endscop
}
