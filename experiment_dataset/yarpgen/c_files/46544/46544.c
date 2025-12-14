/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((-((max(255, 30794)))))) ? 13914 : 1426286669));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_13 = var_0;
            var_14 = var_6;
            var_15 = (-30 ? 250 : 8791338892904917476);

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_16 += (arr_8 [15] [i_2 - 1] [15] [i_0]);
                arr_9 [i_0] [i_0] = var_8;
                arr_10 [i_0] [i_1] [i_2] = (((arr_2 [i_0] [i_1 + 1]) ? (arr_2 [i_0] [i_1 + 2]) : (arr_2 [i_0] [i_1 + 1])));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_17 = (min(var_17, var_3));
                    arr_14 [i_0] [i_0] [i_1 + 2] [i_0] [i_3] = (((arr_12 [11] [i_1] [11] [14] [i_1]) ? 14341588263318391155 : 13914));

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] [16] [i_0] [6] [i_0] [i_0] = (var_12 == var_11);
                        var_18 -= ((-(arr_11 [i_4 + 1] [i_3] [i_2 - 1])));
                        var_19 = var_11;
                        arr_20 [i_0] [i_0] [i_0] [1] [i_0] = var_0;
                        var_20 = ((!(!var_4)));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((arr_18 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) ^ var_5));
                        arr_23 [1] [i_1] [i_0] [12] [i_5] = (~253);
                        var_22 = (((arr_12 [i_1 - 2] [i_1] [i_2] [i_2 - 1] [i_3]) ? (arr_2 [i_0] [i_1]) : (arr_16 [i_0] [i_3] [i_2] [i_1 + 2] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_23 = (arr_15 [i_0] [i_1 + 1] [i_2 - 1] [11] [i_2 - 1]);
                        var_24 = (((arr_17 [i_1 + 2] [i_2 - 1]) < -13915));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_25 = ((-8791338892904917477 ? 0 : 2));
            arr_29 [i_0] = var_2;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_26 = (((-3804 + var_7) ? var_10 : ((-(arr_1 [i_8])))));
            arr_32 [i_0] [i_0] [i_0] = ((var_7 ? (54291 / var_3) : ((((((arr_1 [i_8]) ? (arr_25 [i_8] [i_8] [i_8] [i_8] [i_0]) : var_10))) ? (max(var_3, var_8)) : (((1 - (arr_26 [i_8] [i_8] [i_8] [i_0] [i_8] [i_8] [i_8]))))))));
            arr_33 [i_0] [i_8] = -109;
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_36 [i_0] = (max((((((var_2 ? var_12 : var_8))) ? (arr_0 [i_0] [i_9]) : (arr_11 [i_0] [i_0] [i_9]))), ((((min(-13915, 2823250977))) ? 8791338892904917476 : (~var_10)))));
            var_27 = var_9;
        }
        var_28 = (min(22008, (arr_28 [i_0] [i_0] [i_0])));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_29 = (max(var_29, (((56467 ? 1627362665 : 3444231730)))));
        var_30 = 64;
        arr_39 [i_10] [i_10] = 1490223505;
        arr_40 [i_10] = (-5523822589042811325 <= (((var_12 ? var_7 : (-2229522942572714100 != var_3)))));
    }
    var_31 = (--1);
    var_32 = (((min(((var_7 ? var_4 : var_12)), ((var_2 ? var_4 : var_10)))) << (((max(var_5, -869729623)) - 18446744072839821963))));
    var_33 = var_8;
    #pragma endscop
}
