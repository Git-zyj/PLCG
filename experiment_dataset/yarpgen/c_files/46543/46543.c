/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (((((((arr_1 [i_0]) && (arr_1 [i_0]))))) == (min((arr_1 [i_0]), (arr_0 [i_0])))));
                var_11 = (((!(arr_2 [i_0] [i_1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((var_2 || 4793473638034243341) / (arr_5 [i_2])));
        var_12 = -20896657;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_13 -= (arr_1 [i_3]);
        var_14 = var_4;
        var_15 = (max(var_15, (arr_6 [i_3])));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_16 = (((arr_16 [i_4]) ? -var_8 : (var_9 + 24736)));
        arr_17 [i_4] [i_4 + 3] = 1720946965;
        var_17 = (!var_3);
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_18 = (max(var_18, 20896645));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_19 ^= (arr_28 [i_5] [3] [i_8] [i_8] [i_9] [i_8]);
                            var_20 = ((!(((((max(var_7, (-2147483647 - 1)))) ? (arr_20 [i_6] [20] [i_6]) : ((((arr_28 [i_9] [i_8] [i_7] [i_6] [i_5 + 2] [i_5]) || (arr_23 [i_8] [i_5] [i_5] [i_5])))))))));
                        }
                    }
                }
            }

            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                var_21 ^= ((((((arr_30 [i_5 + 1] [i_5] [i_6 - 2]) - (arr_30 [i_5 + 3] [11] [i_6 - 1])))) ? ((((arr_24 [4] [i_5] [i_5]) * var_0))) : ((((arr_25 [12] [i_10 - 1]) > -5)))));
                arr_32 [i_6] [i_6] [i_6] = (max(-20373, (arr_27 [i_5] [i_5] [20])));
                arr_33 [i_6] [i_6 - 2] [i_10] = (~1720946965);
            }
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                arr_38 [i_6] [i_11 - 1] = (((arr_35 [i_5 + 3] [i_5 + 3] [i_6 - 2] [i_11]) ? (max(-1540557791, 0)) : (arr_18 [i_5 + 2] [i_5 + 2])));
                arr_39 [i_6] [i_6] = (min((min(((-1540557774 ? (arr_26 [i_5] [i_6] [i_5] [1]) : (arr_31 [i_5] [i_6] [12] [i_11]))), var_9)), (arr_18 [i_5 + 2] [i_6 + 1])));
                var_22 = 0;
            }
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                arr_43 [i_6] [i_6 - 2] [i_12] [i_12] = 2147483647;
                var_23 = (((((!((min((arr_37 [i_6] [i_6]), var_8)))))) >> ((((-(max(-4438252501436805650, 224)))) + 254))));
            }
        }
        arr_44 [i_5 + 3] = (((arr_16 [14]) | var_2));
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        arr_52 [i_5] [i_5] [i_5 - 1] [i_13] = (max((549755813887 >= 1756665351), (((arr_14 [i_5 - 1] [i_13 - 2]) % 1777))));
                        arr_53 [i_13] [i_13] = arr_20 [i_13] [i_13] [i_13];
                    }
                }
            }
        }
    }
    #pragma endscop
}
