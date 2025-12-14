/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_15, (!var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = -252;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] = var_1;
            var_18 = var_16;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 = (arr_7 [i_0] [i_2]);
            arr_11 [i_0] [i_2] [1] = ((-(arr_4 [i_2])));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_20 = (max((arr_13 [i_3] [i_3]), (arr_12 [i_3])));

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_21 *= (min((min((arr_13 [i_4 + 2] [i_4 + 2]), (arr_16 [6]))), ((max((arr_15 [i_4 + 3] [i_4 + 3] [12]), (arr_15 [i_4 - 1] [i_4 + 1] [2]))))));
            var_22 = (arr_15 [i_3] [i_3] [i_4]);
            arr_17 [i_4] = min((arr_14 [i_4]), ((max((arr_13 [i_3] [i_4]), var_8))));
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_23 ^= ((~((min((arr_15 [i_5 + 4] [i_5 + 4] [0]), (arr_15 [i_5 + 4] [i_5] [1]))))));
            var_24 = ((!((max((arr_14 [i_5 + 3]), var_14)))));
            arr_20 [i_5 + 1] = (min((arr_12 [i_3]), (min((arr_15 [4] [i_5] [4]), (min((arr_13 [i_5] [i_3]), (arr_13 [i_3] [i_3])))))));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_25 = ((!((!(arr_16 [0])))));
            var_26 = (min(var_26, var_5));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_27 = (arr_19 [i_7]);
        var_28 = (min(var_4, (~var_7)));
        var_29 *= (arr_14 [i_7]);
        var_30 = (min((arr_19 [i_7]), (arr_13 [i_7] [i_7])));
        var_31 ^= (min((min(637824506, 128)), (max(-var_16, (arr_14 [i_7])))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_32 = (min(var_6, ((-(min(var_7, (arr_31 [i_8] [i_8])))))));
            var_33 = (max(var_33, var_0));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_34 [0] = var_13;

            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_34 = (arr_28 [i_11]);
                var_35 = (arr_35 [i_8] [i_10] [i_10] [i_10]);
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                arr_39 [i_8] [i_8] [i_8] [i_12] = (arr_32 [1] [i_10]);
                var_36 = var_16;
            }
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
        {
            var_37 = (min((~287), ((min((arr_42 [i_13]), (arr_42 [i_13]))))));
            var_38 = (arr_31 [i_8] [i_13]);
        }
        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_39 ^= (arr_37 [i_8]);
            var_40 = min((arr_33 [i_8] [i_8]), 16499693050957337089);
        }
        arr_47 [i_8] |= var_4;
        var_41 = (arr_45 [i_8]);
        var_42 = (min(var_42, (min((arr_31 [i_8] [i_8]), (max((arr_31 [i_8] [i_8]), (arr_42 [6])))))));
    }
    #pragma endscop
}
