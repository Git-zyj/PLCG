/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [6] = 8191;
        var_16 = ((var_8 && ((min((((!(arr_1 [7])))), var_6)))));
        var_17 = (arr_0 [11]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_18 = (arr_5 [i_2 + 2]);
            var_19 = ((!(arr_1 [i_2 + 2])));

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                arr_13 [i_1] [i_2] [i_1] [i_2] = (arr_11 [i_3 + 1] [i_2] [i_1]);
                arr_14 [i_1] [i_1] = (var_4 & (arr_2 [i_1]));
                var_20 = (arr_11 [i_1] [i_2] [i_3]);
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_21 [i_1] [i_1] = ((29265 ? (arr_9 [i_1] [i_2] [i_2 + 2]) : (arr_9 [i_1] [0] [i_2 - 1])));
                    var_21 = 134838030;
                    arr_22 [5] [i_1] = -125;
                }
                arr_23 [i_4] [i_2] [i_1] [i_1] = (((arr_10 [6] [7]) && (var_10 ^ -6552785011870209281)));
                var_22 = (max(var_22, (((var_2 / (arr_15 [i_2 - 1]))))));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_23 = (max(var_23, (arr_26 [i_2 + 2] [i_2] [i_6] [i_1])));
                var_24 = (max(var_24, (((-28609 ^ (arr_16 [i_1] [i_2 + 1] [6]))))));
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_25 *= -5026462378004728614;
                    var_26 ^= 58720256;
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_27 = (~var_0);
                    arr_37 [i_1] [i_1] [i_7] [i_1] = -6552785011870209275;
                    var_28 = (var_7 && var_6);
                }
                var_29 = (min(var_29, var_5));
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_43 [i_1] [i_2 + 1] [i_10] [i_10 + 2] [13] = (arr_6 [i_2]);

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_46 [i_1] = (((var_1 / -7524506721166725549) && 131071));
                            var_30 = (~(arr_18 [i_1] [i_2 - 1] [i_11] [1]));
                            var_31 ^= 4570883464330346147;
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_32 = var_13;
            var_33 = (arr_30 [i_1] [i_13] [i_1] [i_13]);
            var_34 = var_7;
        }
        arr_50 [i_1] = var_4;
    }
    var_35 = (((~1773279196) && (((var_0 ? var_3 : 65173)))));
    var_36 ^= var_15;
    var_37 = min(var_10, 65531);
    var_38 = (((-var_15 ? 12 : (!var_6))));
    #pragma endscop
}
