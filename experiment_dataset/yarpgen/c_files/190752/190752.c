/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((0 ? 0 : 0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(var_21, var_1));
        var_22 = (min(var_22, (((-(((var_2 == (((arr_1 [i_0] [i_0]) ? var_4 : var_15))))))))));
        var_23 += (var_0 == -11);
        var_24 = 7307173516394350804;
        arr_2 [i_0] = (min((((!(((-(arr_1 [i_0] [i_0]))))))), ((var_1 ? var_8 : (!-11)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_25 = (((((var_6 - (-2147483647 - 1)))) ? (arr_7 [7] [i_2]) : (-74 && 1)));
            var_26 += (arr_1 [19] [i_2]);
            var_27 = ((!(arr_1 [1] [i_2])));
            var_28 *= ((~((var_4 & (arr_3 [i_1])))));
        }
        var_29 = -1;
        var_30 = ((var_0 ? 196 : (arr_7 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_31 = ((var_10 ? var_6 : (arr_8 [i_3])));
        var_32 |= var_11;
    }
    var_33 = (~124);

    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_13 [i_4 + 2] = ((!(var_4 & 127)));
        var_34 = (min(var_34, var_15));

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_35 = (-32767 - 1);
            var_36 = var_13;
        }
        var_37 = (max(var_37, (var_12 == -9200761803702397962)));
    }
    #pragma endscop
}
