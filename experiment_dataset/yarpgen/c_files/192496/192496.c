/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [11]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (arr_0 [12] [i_0]);
            var_21 ^= (min(var_9, ((((((arr_0 [i_1] [i_0]) & 25941))) / (arr_3 [8] [8])))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_22 = ((((min((arr_2 [i_0 - 2] [i_0 - 1]), 5378779170827603554))) ? (((arr_2 [i_0 + 1] [i_0]) % (arr_2 [i_0 + 1] [i_0]))) : (arr_2 [i_0 - 2] [i_0])));

                /* vectorizable */
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    var_23 = (min(var_23, (((!(arr_9 [11] [12] [i_2]))))));
                    var_24 = (max(var_24, (((((1 && (arr_1 [i_3]))) ? (((arr_6 [i_0]) ^ (arr_10 [i_0] [i_0] [i_2] [i_1] [2] [2]))) : var_15)))));
                    var_25 |= ((1798597147384511920 ? (((arr_1 [9]) ? 1798597147384511920 : (arr_3 [i_2] [i_0]))) : ((((arr_1 [i_2]) ^ (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_26 = (max(var_26, ((((arr_7 [i_0 - 2] [i_1] [i_0 - 2]) & -81)))));
                    var_27 ^= ((-(arr_6 [i_0])));
                    var_28 = (arr_8 [i_0] [i_1] [i_1]);
                }
                arr_15 [i_1] = var_16;
                var_29 = (((arr_7 [i_0] [i_1] [0]) < (((arr_2 [11] [i_2]) ? (arr_2 [i_0 - 2] [1]) : (((-1798597147384511937 || (arr_3 [i_0] [i_1]))))))));
                var_30 = (~127);
            }
        }
        var_31 = (max(var_31, ((((arr_7 [i_0] [i_0] [4]) ? ((((!(((-1798597147384511915 ? (arr_14 [0] [i_0] [i_0] [i_0]) : (arr_11 [i_0 - 2] [i_0] [1] [i_0 + 1] [i_0] [i_0])))))))) : (arr_1 [i_0 - 2]))))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (min((max(1798597147384511920, -5926207803978189705)), ((var_17 * ((20418 / (arr_18 [i_5])))))));
        var_32 = (min(var_32, -111));
        var_33 = ((~(((5032892209656347594 && 54938) ? ((((-113 >= (arr_17 [i_5 - 1] [9]))))) : (min(65535, (arr_17 [12] [i_5])))))));
    }
    var_34 = var_12;
    #pragma endscop
}
