/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] = (var_4 | var_10);
            var_12 ^= (arr_0 [i_1]);
            arr_7 [i_0] [i_0] = 177;
        }
        var_13 = (max(var_13, (arr_2 [i_0 + 1] [i_0 - 1])));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_14 = var_11;
                    var_15 = (((arr_8 [i_2]) ^ var_9));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_16 = (((arr_8 [i_2]) ? (var_3 || 80) : (arr_17 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3])));

                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_17 = ((41221 ? (arr_2 [i_0 + 1] [i_6 - 1]) : ((-(arr_9 [i_0] [i_0])))));
                        arr_20 [i_0] [i_2] [i_0] [i_5] [i_2] = 147;
                    }
                    arr_21 [i_0] [i_2] [i_0] = (arr_17 [i_5] [i_3] [i_0] [i_0] [i_0]);
                }
                arr_22 [i_0] [20] [20] [i_0] &= -122;
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_25 [i_2] = (((arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_2]) ? (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2]) : (arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_2])));
                arr_26 [i_0] [i_2] [i_7] = arr_12 [i_2] [i_2];
            }
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                var_18 = (((arr_10 [i_0 - 1] [i_8 + 1] [i_2]) << (((arr_0 [i_8 + 1]) >> (((arr_27 [i_0] [i_2] [i_8]) + 2850445381367900556))))));
                var_19 = (11217574136027404188 << 1);
            }
            var_20 = (min(var_20, (!33553920)));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_21 = var_6;
            var_22 += (1 & 597);
            var_23 = arr_18 [i_9] [i_9] [i_0 - 1] [i_0];
            var_24 *= ((!(arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])));
        }
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            var_25 = ((-(arr_3 [i_0 - 1])));
            arr_36 [i_10 - 2] = (arr_29 [1]);
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 12;i_11 += 1)
    {
        arr_39 [i_11] = -1;
        var_26 = (arr_0 [i_11]);
        var_27 -= (arr_10 [i_11 - 1] [i_11 - 1] [18]);
        var_28 *= ((-((19 ^ (arr_24 [i_11] [i_11])))));
        var_29 = (arr_16 [i_11] [i_11] [i_11] [i_11] [i_11]);
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_30 = (min(var_30, (~32760)));
        var_31 = (242750871 & -2124358908);
    }
    var_32 = ((-(-2124358890 / 32739)));
    #pragma endscop
}
