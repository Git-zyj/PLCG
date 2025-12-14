/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (~(arr_5 [i_0] [i_1 + 2] [i_2 - 2] [i_2 + 1]));
                    var_18 = (~967933411);
                    var_19 = (((arr_3 [i_0]) | var_8));
                }
            }
        }

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_9 [i_0] [i_0] = (!(((var_13 ? var_6 : 754874712963214542))));
            var_20 = (max(var_20, (arr_2 [1] [8])));
            var_21 -= (!3327033900);
            var_22 ^= var_7;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_23 = 1;

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_24 = var_14;
                var_25 = ((arr_2 [i_0] [i_4]) ? var_7 : (arr_2 [i_0] [i_0]));
                var_26 = (((arr_2 [i_0] [i_4]) | (arr_13 [i_0] [i_0] [i_5])));
                var_27 = (var_16 & 3327033904);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_28 = var_10;
                            arr_22 [3] [i_0] [i_6] [i_6] [i_6] [i_6] = (arr_17 [i_0] [17] [i_6] [i_6]);
                            arr_23 [i_0] [i_0] [i_6] [i_0] [i_8] = ((((0 >> (((arr_19 [i_0] [i_4] [i_4] [i_7 + 2] [i_8]) - 1837954630)))) << ((((var_12 ? (arr_19 [i_0] [i_4] [i_6] [i_7 - 1] [i_8]) : 3327033913)) - 1837954637))));
                            var_29 = 2500776889;
                        }
                    }
                }
                var_30 = (arr_8 [i_4]);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_31 = (min(var_31, var_13));
                            var_32 = (min(var_32, var_1));
                            arr_33 [i_0] [i_4] [i_9] [i_0] [i_11] = ((arr_26 [i_11] [i_4] [i_4] [i_0]) ? var_15 : (~var_11));
                            var_33 = (((arr_14 [i_11] [i_10] [i_9] [i_0]) ? (arr_19 [i_11 + 2] [i_11 - 2] [i_11 + 2] [i_11 - 1] [i_11 - 1]) : (arr_17 [1] [i_4] [10] [i_10])));
                        }
                    }
                }
                var_34 &= (((arr_5 [2] [i_0] [i_4] [i_9]) ? (arr_13 [i_0] [i_0] [i_0]) : var_6));
            }
            arr_34 [4] [4] [i_4] |= var_5;
            var_35 = (min(var_35, (((1794190407 ? 3327033904 : 2147483635)))));
        }
    }
    var_36 = var_9;
    #pragma endscop
}
