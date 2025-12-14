/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_18 = (((((-(arr_4 [i_0 + 1] [i_0] [i_0 + 1]))) + 2147483647)) << (-var_17 - 18446744073709551467));
                var_19 *= (arr_9 [i_2] [i_1] [i_0 - 2] [10]);

                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    var_20 ^= (((((((arr_3 [i_0 + 1] [i_1] [i_3 - 1]) ? (arr_6 [i_0] [i_2]) : (arr_3 [i_0] [1] [i_0]))))) ? (((((arr_8 [i_0] [i_1] [i_2]) && var_10)))) : (arr_6 [i_2] [i_0])));
                    arr_12 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] = var_0;
                    arr_13 [i_2] [i_3] = 1;
                }
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_21 = ((((((arr_1 [i_0 - 1] [i_0 - 2]) ? 59175 : 0))) ? 29790 : 3821730743669192652));
                var_22 = (max(var_22, 1));
            }
            arr_17 [i_0] = var_5;
            var_23 = max(((60499 ? (arr_3 [i_0 + 1] [i_1] [i_0]) : (arr_1 [i_0] [i_0 - 1]))), ((((5854 ^ 99) <= 116))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_24 = (max(var_24, (((((((68 ? 22667 : -32759))) ? ((91 % (arr_11 [i_0] [i_0] [i_0] [i_5] [i_0]))) : ((var_15 ? -29790 : 1))))))));
            arr_21 [i_5] = (((((0 * (arr_1 [i_0] [i_5]))))) ? 0 : (arr_18 [i_0 - 1] [i_0 - 1] [i_0]));
            var_25 = (max((59934 < 20), ((-((1 ? 5616 : 0))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_26 = ((((((max((arr_15 [i_0] [i_5] [1] [i_7]), var_5))))) / (min((arr_20 [i_0 - 1] [i_6]), var_13))));
                        var_27 = (((((18446744073709551600 / (((arr_24 [i_5] [i_6] [i_7]) ? var_10 : 77))))) ? (((992 ? (arr_19 [i_5] [i_5]) : -72))) : (min(((81 ? (arr_5 [17] [i_7] [i_7]) : var_2)), (arr_10 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_6])))));
                        arr_28 [i_5] = (arr_25 [i_0 + 1]);
                        arr_29 [i_5] [0] [7] [i_7] [16] = (arr_4 [i_0 - 2] [i_6] [i_7]);
                    }
                }
            }
        }
        var_28 = ((((max((arr_9 [i_0] [i_0] [i_0 + 1] [i_0]), ((var_8 / (arr_5 [i_0] [i_0] [i_0])))))) ? ((~(arr_6 [i_0] [i_0 - 1]))) : ((((((arr_4 [i_0] [i_0 - 2] [i_0 - 2]) ? var_5 : (arr_10 [i_0] [i_0 - 2] [i_0] [9])))) ? (arr_16 [i_0 - 1] [i_0 - 1] [i_0]) : var_9))));
        var_29 = ((arr_19 [i_0] [i_0]) / ((var_11 ? (min(17686481949596801699, 38064)) : 6465978471051185973)));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
    {
        arr_32 [0] [i_8] = (~821077235);
        arr_33 [i_8] [i_8 - 2] = (arr_19 [i_8] [i_8]);
        arr_34 [i_8] = var_0;
    }
    for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_30 = (max(var_6, 242));
        arr_38 [i_9] [i_9] = (((((var_7 ? (((72057594037927935 ? 0 : (arr_31 [i_9] [i_9 - 1])))) : (15757621303737533527 >> 1)))) ? 0 : (min(((((arr_14 [1] [i_9 - 2] [i_9 + 1] [i_9 - 2]) >> var_11))), var_2))));
        var_31 = (112 & var_12);
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_32 = (min(var_32, (((((min(var_13, var_0) / (arr_11 [17] [i_10] [i_10] [i_10] [1]))))))));
        var_33 = ((((arr_37 [i_10] [i_10]) && 0)) || (((5600 ? 7611233734339669571 : 1))));
    }
    var_34 = (~-84);
    #pragma endscop
}
