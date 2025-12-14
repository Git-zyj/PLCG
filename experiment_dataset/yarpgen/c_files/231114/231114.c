/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((61254 / (arr_1 [i_0])));
        var_18 = (max(var_18, 1064));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 -= (min(((((max(2147483615, -97))) ? (max((arr_1 [i_0]), -7198977095245783970)) : ((((var_4 != (arr_4 [i_1] [i_0] [i_0]))))))), ((((~213) == 255)))));
            var_20 = (min(var_20, (((arr_4 [1] [i_1] [i_1]) > 5958212880930789030))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_21 = (min(((-7198977095245783995 ? (arr_2 [i_0] [i_2]) : var_3)), (((arr_5 [i_0]) / ((min((arr_0 [i_0]), -26917)))))));
            arr_9 [i_0] [i_0] |= ((max((arr_8 [i_0] [i_0] [i_2]), (!101))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_22 ^= (((((max(2147483642, 7198977095245783995) >= (((max(11593, 48893)))))))));
            var_23 = (min((!127), (arr_8 [i_0] [i_0] [i_3])));
        }
        var_24 = 7198977095245783994;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = 27;
        arr_17 [i_4] [i_4] = arr_11 [i_4] [3] [i_4];
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_20 [i_5] = (arr_19 [i_5]);
        var_25 = ((-(arr_18 [i_5])));
        var_26 |= ((-((61254 ? var_16 : 16619))));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_25 [i_7] [i_7] [i_6] = (arr_22 [i_6] [i_6]);
            var_27 = ((-(arr_18 [i_6])));
            var_28 = (min(var_28, (arr_19 [i_6])));
        }
        arr_26 [i_6] [i_6] = (arr_23 [i_6] [i_6]);
        var_29 &= arr_19 [i_6];

        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            var_30 = 0;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            arr_38 [i_6] [i_6] [2] [i_6] [i_6] [i_6] = (((var_15 ? var_3 : 2147483642)));
                            var_31 = (((((arr_24 [i_6] [i_8] [i_9]) << (91 - 85))) == var_3));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_42 [i_6] [i_8] [i_9] = ((arr_28 [i_6] [i_6] [i_10]) ? (((arr_40 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_24 [i_9] [i_8] [3]) : var_10)) : (arr_18 [i_8 - 2]));
                            var_32 |= (!(arr_41 [i_6] [i_8 + 1]));
                        }
                        var_33 ^= (((arr_30 [i_6] [i_8] [i_8 - 2]) >= 10));
                        arr_43 [13] = (((-7198977095245783995 != 32526) ^ 140703128616960));
                    }
                }
            }
            arr_44 [14] [i_8 + 2] [12] = (arr_40 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8]);
            var_34 = (((arr_28 [i_8] [i_6] [i_6]) | (61254 <= 0)));
        }
    }
    var_35 = 157;
    #pragma endscop
}
