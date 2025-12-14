/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (max(var_13, var_4));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 *= ((((var_7 ? var_5 : var_4)) + (var_5 <= var_9)));
            var_15 = (max(var_15, (var_2 & var_8)));
            var_16 = var_10;
            var_17 = (max(var_17, (var_11 & var_10)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_2] [i_2] [i_2] = ((((((min(33030144, var_4)) * (var_9 >= var_11)))) ? 7018431809350417847 : ((((((arr_3 [i_0 - 2] [i_2] [23]) ? var_6 : 16376)) + ((var_10 ? var_8 : 57172)))))));
            var_18 = (max(var_18, (((5410195516572387525 ? var_0 : (var_6 + var_4))))));
        }
        arr_8 [i_0 - 2] = (arr_4 [i_0 - 2]);
        var_19 = var_1;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_20 = var_10;
        var_21 = (max(var_21, var_10));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_22 = (max(var_22, (((var_5 ? var_10 : var_11)))));
        arr_14 [i_4] [i_4] = (arr_3 [i_4] [i_4 + 3] [i_4]);
        var_23 |= (arr_1 [i_4] [i_4 - 1]);

        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_24 = ((~(arr_15 [i_4 - 1] [i_4 + 2] [i_5 - 1])));
            var_25 = (arr_4 [i_5]);
            var_26 = (~65);

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_27 += ((var_5 ? var_2 : (((1415 ? var_0 : (arr_15 [15] [15] [i_6]))))));
                arr_20 [i_4] [i_4] [i_4] [i_6] = ((var_10 & (arr_2 [i_4 + 2] [13])));
                arr_21 [i_4] = (((((128 & (arr_4 [i_4])))) ? (var_4 != var_6) : 1834));
                var_28 += (arr_17 [i_4] [10] [2]);
            }
        }
        arr_22 [i_4] = (var_1 < var_10);
    }
    var_29 = (min(var_29, (((((var_5 % (var_7 & 51))) & (var_11 >= 127))))));
    #pragma endscop
}
