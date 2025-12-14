/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 += (2292892222693908829 <= var_17);
        arr_2 [i_0] [i_0] = -var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = arr_4 [i_1];
        arr_7 [8] [i_1] |= ((~(arr_3 [i_1])));
        var_21 = 2292892222693908803;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_22 = (((arr_10 [i_2 + 2]) / ((max(var_10, (arr_8 [i_2] [i_2 + 1]))))));
        var_23 -= ((-(((arr_10 [i_2 + 1]) & var_16))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_24 = (min(var_24, ((-2292892222693908804 && (((var_16 ? -2292892222693908806 : 2292892222693908829)))))));
                            var_25 = (((arr_21 [i_2 + 2]) > var_4));
                            var_26 = (max(var_26, -2292892222693908841));
                            var_27 = (min(var_27, -2292892222693908803));
                            var_28 ^= var_8;
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_5 - 1] [i_5 - 1] = var_12;
                            var_29 = (min(var_29, (((var_1 ? (arr_11 [1] [i_3]) : var_3)))));
                            var_30 = (max(var_30, (((var_3 < (arr_14 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
                            arr_25 [6] |= (arr_20 [i_2 + 1] [i_3] [i_3] [i_2] [i_2]);
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_31 = (((255 | 1) ? var_18 : (arr_13 [i_2 + 1] [i_3])));
                            arr_28 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] &= 1;
                        }

                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_32 *= (1 ? (arr_10 [i_5 - 3]) : (((var_18 << (var_19 - 106)))));
                            var_33 -= -var_17;
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_3] [i_4] [i_5] [1] = (arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                            var_34 = (min(var_34, 2292892222693908840));
                            var_35 *= (arr_8 [i_4] [i_10]);
                        }
                        var_36 -= (~((((arr_19 [i_2] [8] [14] [i_2] [i_3]) <= (arr_20 [i_2] [i_4] [i_4] [i_5 + 3] [i_3])))));
                    }
                }
            }
            arr_34 [6] [7] [i_2] = var_10;

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_37 = (min(var_37, ((((arr_21 [i_2 + 2]) / 1)))));
                arr_37 [0] [0] = (!var_4);
                var_38 *= (((((var_10 ? 1 : var_10))) || var_3));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_41 [i_2] [i_3] [10] [i_12] |= (arr_21 [i_2 + 1]);
                var_39 *= 112;
            }
        }
    }
    var_40 = (min(var_40, 1));
    #pragma endscop
}
