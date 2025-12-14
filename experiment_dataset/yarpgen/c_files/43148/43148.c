/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = 1;
        var_20 = (min(var_20, (((var_4 ? (1 >= 127) : ((var_4 ? (arr_0 [i_0] [i_0]) : var_3)))))));
        arr_3 [i_0 + 4] = 1;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_2] [i_3] [i_4] = (((arr_2 [i_0 + 3]) ? var_4 : 1));
                            var_21 = (min(var_21, ((((arr_14 [6] [i_1] [i_4 - 3] [9] [i_4]) >= 1)))));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_3] = ((((((arr_14 [i_3] [i_2] [i_2] [i_1] [i_0]) ? (arr_10 [2] [9] [i_2] [i_1] [2] [i_0]) : 1))) ? ((((arr_9 [10] [i_1] [i_1] [i_2] [i_1]) && (arr_9 [i_0] [18] [i_0] [i_0] [i_0 + 4])))) : (1 % 32462)));
                    }
                }
            }
            var_22 = ((1 * (arr_9 [i_0 + 4] [i_0 + 4] [i_0] [i_0 + 2] [i_1])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 = (max(var_23, -1));
            var_24 = (((arr_14 [i_0] [i_0] [6] [18] [i_0 - 1]) ? (arr_19 [i_0 + 1] [i_0] [i_0]) : ((var_3 ? 23832 : 17134440170065491625))));
            arr_22 [i_0] [i_5] [19] = 1;
        }
        var_25 = (35180 ? ((1 ? 1 : 0)) : (arr_20 [4] [4] [i_0]));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 *= ((~((((~12) && ((((arr_2 [i_6]) ? 17134440170065491634 : var_10))))))));
        arr_25 [1] [1] = (((((~((562949953421311 ? var_2 : var_17))))) || (((1 ? -60641015 : (arr_15 [i_6] [14] [i_6] [14] [i_6]))))));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_27 = ((~(~1)));
            var_28 += (((((7 ? -var_17 : var_7))) ? 1 : ((-(((arr_14 [i_6] [2] [18] [i_6] [18]) ? -5609553380032511383 : 1))))));
            arr_28 [i_7] [i_6] = (((var_14 && 63) <= (var_7 <= 65526)));
            var_29 = (arr_12 [i_7] [i_7] [14] [i_6] [i_7]);
        }
        var_30 = (max(var_30, (((-(((arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]) ? -99 : (arr_15 [i_6] [i_6] [i_6] [10] [i_6]))))))));

        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            var_31 = ((((((1 ^ 1127397990527890448) ? 65526 : 0))) ? var_14 : 162));
            var_32 *= ((var_15 == ((~(arr_1 [i_8 + 1] [i_8 + 1])))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_33 |= (!var_11);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_34 = ((((var_1 ? (((arr_21 [1] [1] [i_10]) ? var_10 : (arr_10 [i_6] [i_6] [i_6] [i_9] [i_6] [i_11]))) : -var_0)) & ((((!(((var_15 ? 65518 : (arr_4 [i_6] [i_9] [i_9]))))))))));
                        var_35 = ((-((var_9 ? var_9 : (arr_23 [i_9])))));
                    }
                }
            }
            var_36 = (--162);
            arr_38 [i_6] [i_9] = (((var_2 & 1) <= (((((arr_2 [i_6]) && (arr_7 [i_6])))))));
            arr_39 [i_9] = ((1 ? -93 : -4853992287129325977));
        }
    }

    for (int i_12 = 1; i_12 < 23;i_12 += 1)
    {
        arr_43 [i_12 - 1] = (((var_13 == var_3) != (((var_1 || (~17134440170065491635))))));
        var_37 = (!1);
        var_38 = ((-(~var_14)));
    }
    #pragma endscop
}
