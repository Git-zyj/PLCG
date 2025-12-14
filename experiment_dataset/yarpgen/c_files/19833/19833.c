/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(((var_5 - (arr_0 [i_0 - 1]))), 63));
        var_14 = (((arr_1 [i_0]) ? ((-(arr_0 [i_0 - 1]))) : (((3851630505100552615 ? 31 : 8697)))));
        var_15 = ((~(min((arr_3 [i_0 - 1] [i_0 - 1]), var_12))));
        var_16 = ((54301 ? var_7 : 1843645045));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((((max((max(var_8, var_6)), (arr_6 [i_1 - 1] [i_1 + 1])))) ? ((min((var_2 <= var_5), (arr_6 [i_1 + 1] [14])))) : (arr_4 [i_1 + 1] [i_1 - 1])));
        arr_8 [i_1 + 1] = var_5;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_21 [i_3] [4] [1] [i_3] = 11235;
                        var_17 = (~((~(arr_6 [10] [i_2 + 2]))));
                        var_18 = (((arr_16 [i_3] [i_3] [i_3 + 1] [i_3 - 2]) ? ((var_9 & (arr_16 [i_3] [i_3] [i_4 + 3] [i_5 + 1]))) : (((arr_16 [i_3] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? var_0 : (arr_16 [i_3] [i_3] [i_4 - 1] [i_5])))));
                        var_19 = (((((73 ? (arr_18 [i_5 + 1] [i_5] [1] [i_5] [i_5 - 1] [i_5]) : (arr_16 [i_3] [i_5] [i_3] [i_3])))) ? ((min(var_0, (arr_18 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))) : (max(var_5, var_1))));
                        var_20 = (!var_4);
                    }
                }
            }

            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    var_21 += ((~((var_11 ? 1909942755 : (arr_27 [i_7] [i_6] [i_6 + 3] [i_2] [i_7])))));
                    var_22 = (!12223);

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_23 &= 225;
                        arr_31 [i_3] = ((-(min(((-(arr_9 [7]))), ((var_12 ? 16384 : var_3))))));
                    }
                    var_24 = (((((((min((arr_28 [i_2] [i_7 - 1]), 8697))) ? 1683704875 : (var_3 < 1807765860)))) & 4294967295));
                }
                for (int i_9 = 4; i_9 < 14;i_9 += 1)
                {
                    var_25 = (arr_33 [i_2 - 1] [i_3] [i_6] [i_3]);
                    var_26 = (0 & 243);
                    var_27 = -3;
                }
                var_28 = (arr_9 [i_2 - 1]);
                var_29 = (min(-1, (((-4490149631461900248 ? 1 : 65535)))));
            }
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                var_30 += (arr_25 [i_2] [i_3] [i_10 - 2] [i_2 + 1]);
                var_31 = var_10;
            }
            var_32 = (((((~(arr_14 [i_3 - 1] [i_2 - 1]))) + 2147483647)) >> (((~var_11) - 4667877690910879822)));
        }
        var_33 = (!34782);
        var_34 = (((~(arr_25 [i_2] [i_2 + 2] [i_2 - 2] [i_2 + 1]))));

        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 4; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_46 [i_2] [i_11] [i_12] [i_13] [i_13] [i_2] [i_14 - 1] = ((+((-(max((arr_33 [i_11] [8] [i_11] [i_13]), 9223372036854775795))))));
                            var_35 = var_6;
                            var_36 = var_5;
                        }
                    }
                }
            }
            var_37 = var_2;
            arr_47 [i_2] [i_11] = ((((!(((var_6 ? 4294967295 : var_3))))) ? (!15540576707173893360) : var_8));
        }
    }
    var_38 = (min(var_38, ((min((max(var_11, 192)), (((!255) ? var_1 : (((var_8 ? var_3 : 4294967295))))))))));
    var_39 = 0;
    var_40 = ((-6 ? var_11 : ((((var_5 ? 4 : var_7))))));
    #pragma endscop
}
