/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 3] [i_0] |= var_2;
        var_15 = ((250 ? var_0 : (((((arr_0 [i_0] [i_0]) <= var_13))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_16 = (((arr_2 [i_4]) ? (~var_11) : ((-1 ? 25 : 16468030618381639104))));
                        arr_13 [i_4] [i_4] [13] [i_4] [i_1] = var_9;
                    }
                }
            }
            var_17 &= (min(((var_7 ? var_12 : (arr_5 [i_1 + 4]))), var_6));
            arr_14 [i_1] = ((1620155771978938668 ? 0 : var_5));
            var_18 = var_5;
            var_19 = (max((arr_0 [i_1] [i_1]), ((14636572994704923237 ? -16384 : (-2147483647 - 1)))));
        }
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            var_20 = var_13;
            arr_18 [i_1] = (max(((2088617282976015196 ? 121 : 491520)), 17));
            arr_19 [i_5 - 4] [i_1] = 255;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_21 = var_12;
                        var_22 = (arr_7 [i_1] [i_5] [i_1]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                arr_29 [i_8] [i_8] = -121;
                var_23 = (var_10 && var_6);
                arr_30 [i_1 + 2] [i_8 - 1] = 0;
                var_24 = (arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1]);
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    {
                        var_25 -= 119;
                        arr_36 [i_1] [i_1 + 4] [i_1] [i_10] [i_1] = (((((~(arr_16 [i_8 - 1] [i_8 - 1])))) || var_12));
                        arr_37 [i_1] [i_1] [i_1] [i_1] = 973203327;
                        arr_38 [i_10] [14] = (((arr_11 [i_10]) ? var_4 : var_4));
                        arr_39 [i_1] [i_11] [i_10] [i_1] [i_1] = 108;
                    }
                }
            }
        }
        var_26 = (max((17175674880 / 31), -2013213162214078170));
    }
    #pragma endscop
}
