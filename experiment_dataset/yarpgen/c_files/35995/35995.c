/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_10) ^ var_0));
    var_15 = ((63540 ? 2147483647 : -913755367));
    var_16 = ((((1 ? -842167681 : 3657613655)) ^ 4294967295));
    var_17 = -var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_18 = arr_6 [i_0] [i_1] [22] [14];
                var_19 ^= (((arr_5 [i_0] [i_0] [i_0] [i_0]) >= (arr_5 [23] [i_1] [i_1] [19])));
                var_20 = (max(var_20, (((!(arr_4 [14]))))));
            }
            arr_8 [i_1] [i_1] = (((arr_5 [i_1] [i_1] [i_0] [i_0]) ? ((18446744073709551610 ? (arr_2 [i_1]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_1 [i_0]) <= (arr_3 [i_0]))))));
            var_21 = ((!(!65514)));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_13 [1] [i_3] |= (arr_1 [i_3]);
            var_22 *= (arr_12 [i_0] [i_0] [i_0]);
        }
        arr_14 [7] = (((((~(~var_11)))) ? -2147483647 : ((((((arr_1 [i_0]) ? -450955597 : 2193868512))) ? (arr_3 [1]) : (min(2101098783, 1601852188))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = 5578218170156047432;
        arr_18 [i_4] = -36;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_24 = 65535;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((64 ? 29 : ((((arr_35 [i_5] [1] [i_5] [i_5]) || (arr_33 [i_7] [i_7] [i_7] [i_9] [i_9])))))))));
                                arr_36 [i_5] [i_7] [i_5 + 1] [i_8] [i_9] [i_9] &= 641891473;
                                arr_37 [i_9] [i_9] [i_6] [i_7] [i_6] [i_5] [i_5] = (((((arr_31 [i_5] [i_6] [i_7] [i_8]) ? (arr_3 [i_5]) : (arr_21 [i_9] [i_7])))) >= 12);
                                arr_38 [i_6] [9] [i_5] [i_6 + 1] [i_7] [16] [i_9] = (!(arr_23 [i_5 + 1] [i_8 - 1]));
                                var_26 = (((~(arr_28 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_5] [i_6]))));
                            }
                        }
                    }
                    arr_39 [i_6] = ((-(arr_27 [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_6 + 1])));
                    var_27 = (((arr_34 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (-8192 && var_12) : (((!(arr_4 [i_6]))))));
                }
            }
        }
        arr_40 [i_5] [i_5 + 1] = (((arr_21 [i_5 + 2] [i_5 - 1]) >= (arr_21 [i_5 + 2] [i_5 - 1])));
    }
    #pragma endscop
}
