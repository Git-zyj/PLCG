/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(var_8, 286291357)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_1] = -89;
                        var_14 += var_12;
                        var_15 ^= 224;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_16 = var_6;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_17 += (max(0, 43));
                            var_18 = (((~(arr_5 [i_5] [i_4 + 1] [i_4] [i_4]))));
                            var_19 += (max((arr_5 [i_5] [i_4 + 1] [i_2] [i_2 + 3]), (min((arr_5 [i_5] [i_4 + 4] [i_4] [i_2 + 3]), var_7))));
                            var_20 = (max((((arr_0 [i_5] [i_5]) ? (arr_0 [i_2 - 1] [i_2 + 2]) : (arr_0 [i_1] [i_5]))), (((arr_0 [i_5] [i_0]) ? (arr_0 [i_2 - 1] [i_4 - 1]) : (arr_0 [i_0] [i_2 - 2])))));
                        }
                        var_21 = (min(var_21, (((-((((~(-9223372036854775807 - 1))) - (max(87, 9223372036854775806)))))))));
                        var_22 = (!92);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (((1 && (49 && 27))))));
                            var_24 = (min(var_24, ((((arr_6 [i_0] [i_0] [i_0] [i_7]) ? (arr_6 [i_1] [i_2 + 2] [i_6 - 1] [i_2]) : var_1)))));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_25 = var_10;
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((!(arr_16 [i_1] [i_8])));
                        }
                        arr_22 [i_0] [i_1] = ((var_12 ^ (((arr_11 [i_0] [i_6] [i_2] [i_6]) ? 1742073635658483868 : -104))));
                        var_26 = (arr_3 [i_6] [i_1] [i_0]);
                    }
                    var_27 *= (arr_19 [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    var_28 = (((-1762971940 ? (~var_9) : (arr_3 [i_0] [i_0] [i_0]))));
                    arr_23 [i_0] [i_1] [i_0] = (1762971924 / -127);

                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_29 |= (13 ^ -78);
                        var_30 = var_1;
                        arr_27 [i_0] [i_1] [i_0] [i_0] = ((!((((arr_4 [i_1] [i_1] [i_0]) ? (arr_16 [i_1] [i_1]) : var_5)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_31 = 82;
                        var_32 = ((9320343774232806779 ? -102 : 1905174877333725769));

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            arr_34 [i_0] [i_1] [i_2] [i_0] [i_11] [i_11] = 16383;
                            arr_35 [i_1] = 8777121048006627658;
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        var_33 = (~18014123631575040);
                        var_34 = (max(var_34, (arr_10 [i_0] [i_2] [i_12 + 1])));
                        var_35 = (((-1 ? var_12 : var_8)));
                        arr_38 [i_0] [i_0] [i_1] [i_0] = (((var_4 ? 4294950912 : var_12)));
                        var_36 ^= (((((arr_3 [i_1] [i_2] [i_1]) ? var_10 : var_6)) | var_6));
                    }
                }
            }
        }
    }
    var_37 = ((~(-1 || var_1)));
    var_38 = var_10;
    var_39 = (((min(var_9, (((-9223372036854775807 - 1) ? var_0 : var_11)))) * (((((max(var_12, 110))) >= ((max(var_8, 122))))))));
    #pragma endscop
}
