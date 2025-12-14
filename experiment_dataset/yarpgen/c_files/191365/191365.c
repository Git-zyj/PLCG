/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(-1237168211, 3))) ? ((-1237168211 ? 313986556 : (((16256 ? 1 : 60861))))) : ((max((-1250224533 / 1), 47910)))));
    var_13 = (((min(var_3, (var_11 + var_0))) + var_8));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (((((-16 <= (arr_0 [5])))) == var_5));
        var_15 = ((57716 ? 45974649890456568 : 5));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] [i_3] [1] [i_2] [21] = ((var_7 ? var_3 : ((10995 >> (var_11 + 76)))));
                        var_16 = (22551 <= -1672672386);
                        var_17 = ((~(arr_2 [i_2 - 1])));
                    }
                }
            }
            var_18 = ((var_2 ? (2124197052 + 3651834231) : (((var_3 ? 30665 : 23142)))));
            arr_14 [i_1] [i_1] = -33786;
            arr_15 [i_0] = (var_6 + 1795231813);
            var_19 = (arr_3 [i_0 + 1]);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_20 = var_7;
            var_21 = (min(var_21, ((max((min((((arr_0 [i_4]) / 9223372036854775807)), (arr_17 [i_0 + 1]))), ((var_4 - ((370 ? (arr_16 [i_0]) : var_10)))))))));
            arr_18 [i_0] = -var_7;
            arr_19 [i_4] = (((!377) <= (max(var_7, 282130108))));
            var_22 = (min(-var_3, 1871693184));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_23 = (((((var_11 ? 2932479420 : var_3))) ? ((4107742857 ? var_8 : (arr_1 [i_5]))) : (arr_0 [i_5])));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_24 [12] [i_5] = -111;
            var_24 = (var_6 || var_2);
        }
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            arr_27 [11] [i_7] [i_7] |= var_0;
            var_25 = ((~(-98 | var_2)));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_26 &= 1;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            arr_38 [i_8] [i_8] [i_10] [i_11] = (((arr_31 [i_8]) - (arr_31 [i_10])));
                            var_27 = (((arr_34 [i_9] [i_9] [i_9] [i_11 + 1] [i_9 + 1] [i_8]) ? var_8 : (arr_29 [i_9 - 1])));
                            var_28 = (~var_2);
                        }
                        var_29 = ((-1 ? -417568608 : -67));
                        var_30 = (max(var_30, -4559));

                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            arr_41 [i_5] [i_5] [i_8] [i_9] [i_10] [i_8] [i_8] = (~-994890930);
                            var_31 -= ((1 * ((64887 ? var_11 : var_2))));
                            arr_42 [i_5] [i_9] [8] [i_8] [i_12] = (((((var_10 ? (arr_2 [i_5]) : var_5))) ? var_5 : -116));
                            var_32 = (var_7 ^ 1);
                            var_33 = (((arr_5 [i_12 + 2] [i_9 - 1] [i_9 - 1]) && var_9));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_45 [i_5] [i_8] [i_8] [5] [i_5] = ((arr_43 [i_5] [i_8] [i_9 + 1] [i_8]) / 1890975581);
                            arr_46 [i_5] [i_8] [i_9 - 1] [i_10] [i_10] = var_5;
                        }
                    }
                }
            }
        }
        arr_47 [i_5] = (((((var_4 ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : (arr_36 [1])))) + (1649107645 + 2147483647)));
    }
    #pragma endscop
}
