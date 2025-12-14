/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = var_6;
                    var_17 = (max(var_17, (((~(!1097953697))))));
                }
            }
        }
        arr_8 [i_0] = ((((min((arr_3 [i_0] [i_0] [i_0]), var_3))) ? (((!(arr_5 [i_0] [i_0] [i_0] [i_0])))) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_18 = (((arr_9 [i_3]) <= (((arr_9 [i_3]) * 0))));

        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            var_19 = var_5;

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_20 &= ((-(0 || 9272639865831130946)));
                arr_16 [i_3] [i_4] [i_5] = (((!124) ? ((((arr_12 [i_5] [i_4]) ? var_6 : var_1))) : (arr_10 [i_5])));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                arr_20 [i_3] [i_4] [i_4] [i_3] = (2158867325 / 191);
                var_21 |= (((-7583062552323989532 ? (arr_14 [i_3] [i_4 + 2] [i_6] [i_6]) : var_1)));
                var_22 = (!9808797586204280117);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_23 = (arr_9 [6]);
                            arr_27 [i_4] = (arr_21 [i_4] [i_6] [i_7]);
                            var_24 = ((-(arr_15 [i_4 - 1] [i_4 + 2] [i_4 - 1])));
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_7] [i_7] [0] = (((((15 / (arr_24 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_3])))) && 2147483648));
                            arr_29 [i_3] [i_4] [i_6] [i_7] [i_4] [i_4] [i_3] = -185491733;
                        }
                    }
                }
            }
        }
        var_25 = ((2287589982 ? (arr_10 [i_3]) : (~var_12)));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        var_26 = ((var_0 ? ((var_1 ? var_6 : (arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : var_6));
        arr_33 [i_9 - 1] [7] = -1;
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            arr_41 [i_10] [i_11 - 1] = (arr_38 [i_11 + 1] [i_11] [i_11 - 1]);
            var_27 = (((var_15 + 2147483647) << (var_6 - 106)));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            var_28 = (!var_12);
            arr_44 [i_10] [i_10] = (arr_15 [i_12 - 2] [i_12] [i_12 + 1]);
        }
        arr_45 [i_10] = ((((((min(-910732342, (arr_15 [i_10] [i_10] [i_10])))) ? (~var_8) : (((min((arr_43 [i_10]), (arr_12 [i_10] [i_10]))))))) == (arr_19 [i_10] [i_10])));
    }
    var_29 = ((min((!56), var_5)));
    #pragma endscop
}
