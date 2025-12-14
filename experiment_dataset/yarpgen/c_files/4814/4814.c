/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_1 - (((var_14 ? var_13 : var_13))))), (((((min(-10854, 56872))) + ((-9223372036854775794 ? 0 : var_9)))))));
    var_16 ^= (min(-var_10, var_7));
    var_17 = (min(var_9, ((max(45897, 7183680758386446654)))));
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;
        var_19 += (arr_1 [i_0 - 2]);
        var_20 = ((((((arr_0 [3] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : var_10))) ? (var_3 <= 19645) : (arr_1 [i_0 - 2])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((arr_3 [i_0 - 2] [i_0 + 1]) != (arr_6 [i_0 - 2] [i_0 - 2])));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = (((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 2]) % (~45897)));
                var_21 = ((arr_6 [i_0 - 1] [i_1]) ? 8192159383855512768 : (((arr_8 [i_0] [i_0] [6]) / -2142081101386072189)));
                var_22 = ((~((19663 ? 68 : 1))));
            }
            arr_12 [i_0] [i_0] &= (((-8192159383855512768 && var_5) ? 19665 : var_12));
            var_23 += (arr_10 [i_0 - 2]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_17 [i_0] [i_3] = ((var_10 ? var_0 : 16448));
            var_24 ^= (((9223372036854775793 * var_3) || -6827562685094684496));
            var_25 = (min(var_25, ((((arr_15 [i_0 + 1] [i_0 + 1]) * (arr_3 [i_0 - 1] [i_0 + 1]))))));
            var_26 = (max(var_26, (((~(-127 - 1))))));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_23 [1] [i_4 + 1] [1] [5] = ((39 ? (arr_3 [i_0 - 1] [i_4 - 1]) : (arr_3 [i_0 - 1] [i_4 + 3])));
                arr_24 [21] [22] [i_5] = ((((-2142081101386072176 ? (arr_4 [i_0] [i_0] [i_5]) : var_6)) > 19663));
            }
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                var_27 = (max(var_27, 0));
                var_28 -= ((arr_3 [i_0 + 1] [i_4 + 2]) / (arr_3 [i_0 - 1] [i_4 - 1]));
                arr_28 [i_0] [i_4] [i_0] [i_6 - 1] = (var_2 ? (arr_5 [i_0 - 2] [i_4 + 1] [i_6 + 1]) : 19640);
                var_29 = (((arr_15 [i_0 - 2] [i_0]) ? var_10 : (arr_15 [i_0 - 1] [i_0])));
                arr_29 [15] [i_6 + 1] [1] [i_0 - 2] = var_5;
            }
            arr_30 [i_0] [i_4 - 1] = var_9;
        }
    }
    #pragma endscop
}
