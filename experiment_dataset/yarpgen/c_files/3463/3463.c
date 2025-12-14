/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_4, -22077));
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((var_10 + 2147483647) << (((2305550661 | var_11) + 5531243740062029313))))), (max((min(1489124188, (arr_0 [i_0] [i_0]))), (((var_9 - (arr_1 [i_0]))))))));
        var_18 *= (((((((var_7 ? -115 : -90)) > (arr_1 [8])))) >= (arr_1 [1])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (1898858416 / 1);
            arr_8 [12] &= (((((((((arr_1 [4]) < 6))) ^ (arr_0 [i_0] [i_1])))) < (arr_4 [i_0] [10])));
            var_19 = (max(((max(-115, (arr_0 [i_0] [i_0])))), (((-9 + 2147483647) << (5262914651253956917 - 5262914651253956917)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_20 = (((arr_6 [i_0]) <= 833));
            arr_11 [i_0] [i_0] = (((((var_8 ? (arr_9 [i_0] [i_0] [i_2]) : 4235259322))) && ((max((!637643906), (((arr_0 [i_2] [i_0]) | -112)))))));
            var_21 = var_11;
            arr_12 [i_0] = (arr_5 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_23 [i_6] [i_0] [i_0] [i_5 - 4] = (((((-24285 ? 58621 : var_4))) ? var_2 : (arr_9 [i_0] [i_0] [i_5 - 4])));
                            arr_24 [i_0] = (((((-(arr_19 [i_3])))) ? var_14 : -var_10));
                            var_22 = (arr_21 [i_0] [i_5 - 3] [i_5] [i_5 - 4] [i_0]);
                        }
                    }
                }
            }
            var_23 = var_7;
        }
        var_24 = var_7;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = var_11;
        var_25 = -var_9;
        var_26 -= ((var_8 >= (arr_26 [i_7] [i_7])));

        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            var_27 = (arr_29 [i_7] [0]);
            arr_31 [i_7] [i_7] [i_7] = ((((arr_25 [7]) / 281474976710655)));
        }
        for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_34 [i_7] [i_9] = ((((((arr_27 [i_7] [i_7]) * 58621))) ? (var_10 / var_12) : (var_1 / 134)));
            var_28 = ((var_13 > (((arr_27 [i_9 - 1] [i_7]) ? var_8 : (arr_26 [i_7] [i_9])))));
            var_29 = 50626;
        }
        for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
        {
            arr_37 [i_7] = ((-((((arr_33 [i_10]) >= (arr_30 [5] [i_7]))))));
            var_30 = ((1 ? var_9 : (!var_14)));
            var_31 = (arr_29 [i_7] [i_7]);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_32 = ((var_8 << ((((arr_36 [i_7] [i_7]) < var_11)))));
            arr_41 [i_7] [i_7] [i_11] = (var_8 ^ 1758691021);
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_33 ^= ((((-((61324 ? (arr_33 [i_12]) : (arr_27 [i_12] [i_12]))))) - (((-((max(7, 64713))))))));
        var_34 = (((var_4 && var_2) / (!0)));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] [i_13] &= 13146;
        arr_47 [i_13] = (max((arr_30 [i_13] [i_13]), ((min((arr_25 [i_13]), (arr_25 [i_13]))))));
    }
    var_35 = 1;
    #pragma endscop
}
