/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_11;
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_1] = ((min((arr_5 [i_1] [i_1] [i_0]), 1722)));
            arr_8 [i_0] [6] [i_1] = (min(var_11, (((arr_6 [1]) * (arr_6 [i_1])))));
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_2] = (min(var_16, var_1));
            var_19 *= 255;
            var_20 -= 1732;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_14 [i_3] = ((var_3 + (89 < 217)));
            var_21 = 647235418;
            arr_15 [i_0] [i_3] [i_3] = (min(-9912, 9912));
            arr_16 [i_0] = ((((~(arr_4 [13] [i_3] [2]))) ^ ((min(1, (arr_4 [i_0] [i_3] [i_3]))))));
        }
        var_22 *= var_12;
        var_23 *= (min(((min((arr_13 [i_0] [i_0] [i_0]), 579357424))), (((arr_13 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0]) : 11210209740467526191))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_24 = (((arr_18 [i_4]) ? ((min(5721631086445681088, (arr_18 [i_4])))) : (max(var_1, 1044480))));
        arr_19 [i_4] [i_4] = var_7;
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_25 *= ((((max(var_12, -1404674449))) ? (min(((1722 * (arr_20 [i_5] [i_5]))), ((var_0 << (var_15 + 302))))) : ((var_14 ? (arr_0 [i_5] [i_5]) : (arr_4 [i_5] [i_5] [i_5])))));
        arr_22 [9] = ((min(var_14, (~var_5))));
        var_26 = (min(var_26, (((1 ? (max(3145728, ((-19903 ? 54414 : 579357424)))) : 19914)))));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_27 = (min(var_4, (arr_5 [i_5] [i_5] [i_6])));
            arr_25 [i_5] = (min((((var_5 + 2147483647) >> (var_8 - 38))), (arr_24 [i_6])));
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_28 = var_14;
        var_29 = (max(var_29, (((var_14 ? (var_1 & -1318361773) : var_7)))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 7;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [i_10] [i_8] &= (arr_5 [i_8] [i_8] [1]);
                        var_30 -= arr_29 [i_10 + 1];
                    }
                }
            }
        }
        arr_38 [i_8] [8] = (arr_31 [i_8] [6] [7]);
    }
    #pragma endscop
}
