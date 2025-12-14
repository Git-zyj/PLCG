/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_19 ^= ((var_7 ? var_10 : (arr_5 [i_0] [i_0] [i_0])));
                            var_20 = -18863;
                        }
                    }
                }
            }
            var_21 ^= arr_0 [15] [i_1];
            arr_13 [8] [8] = -68;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_18 [16] &= var_3;
            var_22 *= (((arr_9 [i_5] [i_0] [21]) > (((var_15 || (arr_9 [i_0] [i_0] [i_0]))))));
            arr_19 [i_5] = (5477 >= 35215);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_23 = (min(var_23, (arr_17 [i_7])));
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((~(arr_22 [1] [i_6] [i_7])));
                var_24 = (max(var_24, (((-4247026485044616397 > (((var_5 ? var_1 : 2625))))))));
            }
            var_25 = ((!(2625 ^ var_13)));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_26 *= 37114;
                        arr_37 [3] [i_10] [0] [i_8] [i_0] = var_4;
                        arr_38 [i_0] [i_8] [i_9] [i_10] = ((var_13 ? var_3 : var_4));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                arr_42 [i_11] [10] [i_11] [i_11] = ((0 || (arr_41 [i_0] [i_0] [i_0] [i_0])));
                var_27 = (-24729 && -9480);
                arr_43 [i_8] [i_0] &= (((arr_8 [i_0] [i_8] [i_11] [i_11] [2] [i_8]) ? (arr_8 [i_0] [4] [i_0] [i_11] [20] [i_0]) : (arr_8 [i_0] [i_8] [i_11] [i_8] [i_8] [i_0])));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    var_28 = (~5477);
                    arr_49 [i_0] [12] [i_0] [10] [i_0] &= (((arr_6 [i_12] [i_12] [i_8]) ? 2625 : (arr_6 [i_0] [i_12] [i_13])));
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    var_29 = ((-(((arr_6 [i_0] [1] [0]) ? -5478 : (arr_8 [i_0] [i_8] [i_12] [i_14] [16] [i_14])))));
                    var_30 = (min(var_30, (((!(arr_50 [4] [i_8]))))));
                }
                var_31 &= (((arr_5 [i_12] [i_8] [i_0]) % (arr_2 [4])));
            }
        }
        var_32 = (((var_11 ? var_15 : var_13)) >= (arr_14 [8]));
    }
    var_33 = var_17;
    #pragma endscop
}
