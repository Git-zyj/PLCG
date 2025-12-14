/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = ((!(arr_2 [i_0] [i_1])));
            var_20 = 28840;
            var_21 = (arr_0 [i_1] [i_0]);
            var_22 = ((833853944 || (((4294967295 ? 251 : 49)))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_23 = ((-2147483637 ? 8778138227588390933 : 118));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_24 = (((var_5 ? var_3 : -601665730)));
                        arr_13 [i_4] [i_3 + 1] [13] [i_0] = (~var_13);
                    }
                }
            }
            var_25 = ((2147483620 || (((var_10 ? (arr_10 [i_0] [i_2 - 1]) : (arr_8 [i_0] [i_2]))))));
            arr_14 [i_0] [i_0] = (((arr_9 [5] [i_0]) & var_14));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_26 = (!var_14);
            var_27 = (((arr_1 [i_5] [i_0]) > (arr_8 [i_0] [i_5])));
            var_28 = (min(var_28, (((!(arr_0 [i_0] [i_0]))))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] = (((arr_17 [i_0]) >> (((arr_17 [i_0]) - 3944139156))));
            var_29 -= ((!(!var_2)));

            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                var_30 = (((arr_23 [i_7 + 2] [i_7] [11] [i_7]) && (arr_23 [i_7 + 3] [i_7] [i_7 + 3] [i_7])));
                var_31 = (arr_23 [i_7 + 3] [i_7] [i_7 + 1] [6]);
            }
            var_32 = var_0;
        }
        var_33 += var_7;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_34 = ((!((max((var_2 && var_5), (-8778138227588390912 & -1047005854))))));
        arr_27 [i_8] = (max((((arr_23 [i_8] [i_8] [i_8] [14]) | 182)), ((((31560 * var_7) || (((1569773473 ? (arr_5 [i_8]) : var_5))))))));
        var_35 -= (max((((arr_19 [i_8]) + (arr_19 [i_8]))), ((-(arr_19 [i_8])))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_36 = (((~118) || var_17));
        var_37 = ((~(max((((arr_0 [i_9] [i_9]) | (arr_17 [i_9]))), var_15))));
        arr_31 [11] = ((!(((-2147483608 ? 2147483647 : -4224990522062176126)))));
    }
    var_38 = var_6;
    var_39 = (max((((4294967295 || (-365953128 + var_1)))), ((7919 ? var_11 : (var_11 <= 134217726)))));
    var_40 = (15 || 13244);
    var_41 = (min(var_41, 1140238570));
    #pragma endscop
}
