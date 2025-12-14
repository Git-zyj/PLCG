/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((arr_0 [i_0]) || var_0);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [1] [i_0] = (((((arr_2 [i_0]) / 1)) | (min((min(var_10, (arr_0 [10]))), (arr_0 [i_0])))));
            var_16 -= ((((max(1, (arr_4 [i_0])))) ? var_13 : (var_1 ^ var_13)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_2] = var_14;

            for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_17 -= ((1 ^ (arr_11 [i_0] [i_3 - 1] [i_3] [12])));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_18 = var_10;
                    var_19 = (min(var_19, (((var_11 ? (var_5 ^ 1246719039) : ((var_14 ? 248 : var_8)))))));
                    var_20 &= (arr_11 [i_2] [i_2] [14] [12]);
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    arr_16 [i_0] [i_0] [7] [i_3] [i_3] = var_13;

                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_21 = (min(var_21, (var_5 && 0)));
                        arr_21 [i_0] [i_2] [i_3 - 1] [i_3] [i_3 - 1] [5] [12] = ((!(arr_0 [i_2 + 1])));
                    }
                    var_22 = ((var_9 != (arr_18 [i_0] [i_2] [i_5 + 2])));
                    var_23 |= (arr_0 [i_0]);
                }
                var_24 += (((arr_18 [i_0] [i_0] [i_3]) ? var_2 : 1));
                var_25 = (((arr_20 [i_0] [6] [i_3] [6] [i_2 - 1] [i_3]) ? (arr_6 [i_2 + 1] [i_2]) : (arr_7 [i_3 - 1] [i_3 - 1] [i_2 - 1])));
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_26 ^= (var_9 && var_14);
                var_27 = var_13;
                arr_25 [8] = (((arr_22 [0]) ^ 1));
                arr_26 [i_0] [i_2] [i_7] = (((arr_14 [1] [9] [i_2] [i_0] [i_0]) ? (((arr_17 [0] [i_2] [i_7]) ^ (arr_23 [i_7] [i_2 + 2]))) : (arr_24 [2] [2] [i_7] [i_7])));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_30 [6] [i_2] [14] &= ((1 ? (var_7 % var_14) : var_7));
                var_28 = ((var_10 ^ (arr_22 [i_2 + 2])));
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_34 [i_0] [i_0] [i_0] |= var_4;
                var_29 = ((var_13 ? var_3 : (((arr_0 [1]) ? (arr_10 [6]) : (arr_11 [i_0] [i_2] [i_9] [14])))));
            }
        }
    }
    var_30 = (max(var_9, (((((max(var_13, var_0))) != var_11)))));
    #pragma endscop
}
