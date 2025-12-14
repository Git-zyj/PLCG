/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = -6420;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = ((arr_5 [i_0 + 3] [i_1 - 1]) && (arr_5 [i_0 + 3] [i_1 - 1]));
            var_20 = (5261546120117269852 % 6419);
            var_21 = (arr_4 [i_0] [i_0] [i_0]);
        }
        var_22 = ((var_14 || (!6419)));
        var_23 = (((((((var_1 || (arr_4 [i_0 + 3] [i_0 - 1] [i_0])))) - (-15983 & var_9))) & ((+((var_4 ? (arr_2 [i_0 + 1]) : var_16))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_24 = (((((((var_19 ? 6420 : var_9))) ? var_11 : ((2051650384 ? -126 : 10915)))) - var_16));
            var_25 = ((~((~(~var_16)))));

            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                var_26 = ((((((((arr_4 [i_2] [i_2] [i_2]) & (arr_8 [i_0] [i_2] [i_3])))) ? (((~(arr_8 [i_3] [i_2] [i_0])))) : (7109360309819492147 * var_5)))) ? ((15982 ? (18446744073709551615 != 492828507) : var_12)) : (((((((arr_2 [i_0 + 1]) ? var_4 : (arr_1 [1])))) ? var_0 : -var_5))));
                var_27 = var_10;
                var_28 = 0;
                var_29 = (((-(max(1902440242, var_6)))));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_30 ^= ((~(arr_7 [i_0 + 3] [i_2] [1])));
                arr_15 [i_0] [i_0] [i_0 + 3] = (arr_13 [i_2] [i_2]);
                var_31 = (((min(((var_8 ? var_0 : var_6)), ((0 ? 0 : (arr_4 [i_0] [i_2] [i_0]))))) % (min((var_19 <= var_16), (var_5 + var_8)))));
            }
            var_32 ^= -var_2;
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_33 = 1;
        var_34 = (max(var_34, ((((((var_17 - (var_4 - -1124993293)))) ? -1553735540 : ((1 - (arr_17 [2]))))))));
        var_35 = var_19;
    }
    var_36 = (((-var_18 ? var_13 : var_9)) - var_14);
    var_37 = (min((((0 ? (~var_4) : (!var_5)))), (min(((var_12 ? var_9 : 18446744073709551613)), var_15))));
    #pragma endscop
}
