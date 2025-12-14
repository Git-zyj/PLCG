/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (max(var_12, (((-(min(-62413, (((!(arr_0 [i_0])))))))))));
        arr_3 [i_0] = ((max(((max((arr_1 [i_0]), -1))), (((arr_0 [i_0]) ? -4 : (arr_0 [i_0]))))) | (((!((min(-11, -4)))))));
        var_13 = -818639626;
        var_14 = (arr_2 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_1] [i_2] = (arr_6 [i_1] [i_0]);
                var_15 = (min(var_15, (((-(arr_5 [i_0] [i_1] [i_0]))))));
                arr_11 [i_0] [i_2] = 1;
            }

            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                var_16 = 0;
                arr_15 [i_3] = 1;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_21 [14] [i_1] [14] [i_3] [i_5 - 1] = -18;
                            var_17 = -1;
                            var_18 = (max(var_18, ((((!45) ? (arr_0 [i_4 + 1]) : 17)))));
                            arr_22 [i_5] [i_3] [i_3] [i_3] [i_0] = 72;
                        }
                    }
                }
            }
            var_19 |= (~-9890663238403758750);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_20 = (arr_19 [6] [6]);
            arr_25 [i_0] = 7;
            arr_26 [i_0] [i_6] = ((-1806369490 ? 1 : -1779897124));
        }
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        arr_31 [i_7 + 1] = 1;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_38 [i_9] [i_8] [i_9] = (arr_16 [i_9] [i_8] [i_8] [i_8] [i_8]);
                        arr_39 [i_9] [i_8] [i_8] [i_9] = 4294967294;
                        var_21 = (!((((~32768) ? var_7 : var_5))));
                        var_22 |= ((!(arr_36 [i_10 - 3] [i_8] [i_8] [i_8] [2])));
                    }
                }
            }
        }
    }

    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        var_23 = ((-2147483647 - 1) || 273615923);
        var_24 = (max((((~var_2) ? (arr_40 [i_11 + 2]) : (arr_41 [i_11]))), (arr_41 [i_11])));
        arr_43 [i_11] [i_11 - 1] = 121;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 24;i_14 += 1)
            {
                {
                    var_25 = (min(var_25, ((((-1779897100 ? (arr_47 [i_14]) : 1))))));
                    arr_52 [i_13] [i_12] [i_12] [i_12] = -74;
                    arr_53 [i_12] = (!0);
                    arr_54 [i_12] = ((~((0 ? -1 : 1))));
                }
            }
        }
        arr_55 [i_12] = (arr_45 [i_12]);
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        var_26 = 1;
        var_27 = ((~((max(1, 16028)))));
    }
    #pragma endscop
}
