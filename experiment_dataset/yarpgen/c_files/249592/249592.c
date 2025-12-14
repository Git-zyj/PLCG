/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 |= (((((((var_6 ? var_13 : var_13)) | ((max(var_5, var_10)))))) % ((-28469 ? ((var_13 ? var_15 : var_1)) : var_4))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [13] = ((((((arr_1 [i_0]) * (arr_1 [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] = (((2574516126955417272 ? 15872227946754134343 : 15872227946754134327)));
        var_19 = (max((-127 - 1), ((((((arr_1 [i_0]) | (arr_1 [i_0])))) ? (((63969 ? 1 : (arr_1 [i_0])))) : 1))));
        arr_4 [8] [i_0] = max((((max((arr_1 [1]), 2574516126955417272)) | (((34 ? (arr_1 [i_0]) : -1104263036))))), ((((arr_0 [i_0]) ? ((min((arr_0 [i_0]), -18799))) : 1106361435))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = (((arr_6 [1] [1]) ? 0 : 1614823577));
        arr_8 [i_1] [i_1] = ((~(arr_0 [i_1])));
        arr_9 [i_1] = (((arr_0 [i_1]) / (arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 = 255;
            arr_12 [12] [i_2] = (arr_11 [i_1] [i_2]);
            var_22 = (min(var_22, (arr_11 [i_1] [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_3] &= (arr_7 [7] [i_1]);
            var_23 = 17;
        }
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            arr_20 [5] [i_4 + 1] = ((arr_18 [i_4 + 1] [i_4 - 1]) ? (arr_18 [i_4 + 1] [i_4 - 3]) : (arr_17 [i_4 + 1] [i_4 + 2] [i_4 - 1]));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_25 [i_1] [9] [i_5] = (((arr_13 [i_5]) ? (arr_17 [i_1] [i_4 + 1] [i_4 + 1]) : 1567));
                var_24 = (max(var_24, ((((((18446744073709551615 ? 5766582266628179308 : 18446744073709551615))) ? ((~(-127 - 1))) : (arr_24 [1] [i_4] [i_5]))))));
                arr_26 [i_1] [i_1] [i_1] [i_1] = 98;
                arr_27 [i_1] = (arr_0 [24]);
            }
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_25 = (min(var_25, (((1008 ? ((-1397617737 ? (arr_19 [i_6] [4] [i_6 - 1]) : 34)) : 34)))));
                arr_32 [i_6] [i_6] [i_1] = 134;
            }
        }
    }
    #pragma endscop
}
