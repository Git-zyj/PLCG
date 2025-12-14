/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_1] = ((-(arr_4 [i_0] [i_1] [i_1])));

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_15 = ((-(arr_2 [i_0])));
                            var_16 = var_9;
                            var_17 = (((((-6238818302559912871 ? 0 : 0))) * (arr_10 [i_1] [i_4 - 3] [i_0] [i_3] [i_4 - 2] [i_2 + 2])));
                            arr_13 [i_0] [11] [i_1] [i_3] [i_4] [i_4] = (((arr_4 [i_0] [i_3] [i_4]) & ((1 + (-9223372036854775807 - 1)))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [4] = ((((arr_2 [i_1]) != (arr_1 [i_0] [i_1]))));
                    var_18 = (min(var_18, (((+(((arr_12 [i_0] [i_1] [i_2 - 1] [16]) - var_1)))))));
                    var_19 = var_3;
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_20 = (((((arr_6 [i_1] [i_1]) % var_13)) + (((arr_18 [i_0] [i_0] [i_1] [i_2 + 1] [i_6]) & var_8))));
                    arr_20 [i_1] [i_1] [i_2] [9] = ((arr_4 [i_2 - 1] [i_2] [i_2 + 2]) + (((((arr_10 [i_1] [i_0] [i_1] [i_2] [i_6] [i_6]) < (arr_8 [i_0] [i_1] [i_2] [i_6]))))));
                    var_21 ^= (arr_3 [i_6] [i_6]);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_22 &= (arr_7 [i_0] [i_2] [i_2 + 1]);
                    var_23 += (((arr_1 [i_0] [i_2 - 1]) * (arr_1 [i_0] [i_2 + 1])));
                }
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    var_24 *= ((((((arr_15 [i_0] [i_2] [i_2 + 2] [i_8 - 3]) / (arr_9 [i_0] [i_1] [i_2] [i_2] [4])))) < 10959384684702077584));
                    arr_25 [i_0] [i_2 + 2] [i_2 + 2] [i_1] = var_10;
                }

                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    var_25 = (((((arr_1 [i_2 + 2] [i_2 - 1]) + 2147483647)) >> (((arr_26 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_9]) + 37918507896775341))));
                    var_26 = (((((0 ? 1 : 0))) != var_5));
                }
            }
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                var_27 = var_6;
                var_28 = (((((1 ? (arr_3 [i_1] [1]) : var_12))) ? (((~(arr_17 [i_0] [i_10])))) : ((~(arr_3 [i_1] [i_1])))));
                var_29 = (arr_29 [i_10 + 1] [i_1]);
            }
            var_30 = var_4;
            var_31 = ((!(arr_24 [i_1] [i_0] [i_1] [i_1])));
        }
        var_32 = (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    {

                        for (int i_14 = 4; i_14 < 14;i_14 += 1)
                        {
                            var_33 |= ((-(arr_24 [i_12] [i_12] [i_13] [i_14])));
                            var_34 = (min(var_34, ((((arr_30 [i_13 + 2]) <= (arr_30 [i_13 + 1]))))));
                            var_35 = (--768);
                        }
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            arr_45 [i_0] [i_11] [i_12] [17] [i_15] = (!12);
                            var_36 = (arr_37 [i_11] [i_12] [i_11] [i_15]);
                        }
                        arr_46 [i_0] [i_11] [i_11] [3] = (((arr_9 [i_12] [i_13] [i_13 + 2] [i_13 + 2] [i_13 - 2]) <= var_10));
                        var_37 = (arr_8 [i_0] [i_0] [i_12] [i_12]);
                        var_38 = var_0;
                    }
                }
            }
        }
        var_39 = -4294967295;
        var_40 = (~1);
    }
    #pragma endscop
}
