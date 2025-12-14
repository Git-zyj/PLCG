/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_12 = (arr_1 [i_0]);
            var_13 = 1;
            var_14 = (-1 == -26);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_15 = (arr_2 [i_0] [i_0] [i_2]);
            arr_7 [i_0] = (~(arr_2 [i_2] [i_0] [i_0]));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = (((28 || (arr_2 [i_2] [i_2] [0]))));
                        var_16 = (max(var_16, (arr_8 [i_4] [i_4 + 1] [i_4])));
                    }
                }
            }
            var_17 = (max(var_17, (arr_5 [i_0] [i_2] [i_2])));
            var_18 = (227 % 3);
        }
        var_19 -= (arr_0 [8] [i_0]);
        arr_13 [i_0] = (((var_1 ? 227 : (arr_4 [i_0] [i_0]))));
        var_20 = ((!(!var_11)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_16 [i_5] = (arr_9 [i_5] [i_5] [i_5] [i_5]);
        var_21 = (arr_2 [i_5] [i_5] [i_5]);

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            var_22 = (arr_15 [i_6 + 1] [i_6 - 1]);
            var_23 = var_10;
            arr_19 [i_5] [i_6] = ((32457 ? (arr_1 [i_6]) : var_5));
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            arr_24 [i_7] [i_5] = var_11;

            for (int i_8 = 4; i_8 < 14;i_8 += 1)
            {
                arr_27 [4] [i_7] [i_7] [i_7 - 2] = ((var_5 ? ((var_10 ? (arr_10 [13] [i_8] [i_5] [i_5] [i_5]) : 107)) : (var_4 / 1)));
                var_24 = (arr_17 [i_5]);
                var_25 -= -2;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_9] [2] [3] = (~var_1);
                            var_26 = ((!(arr_20 [i_7 + 3])));
                            var_27 = (max(var_27, (((!(!var_11))))));
                        }
                    }
                }
                arr_35 [2] = ((!(arr_28 [i_8 + 2] [i_5] [16])));
            }
        }
    }
    var_28 -= (min(((1 ? (var_10 > var_9) : var_3)), ((((var_10 ? var_6 : var_4))))));
    #pragma endscop
}
