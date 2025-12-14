/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 ^ var_7);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 += (arr_0 [0] [0]);
            var_13 = (arr_3 [i_0 + 2]);
            arr_6 [i_0] [i_0] = -var_2;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_14 = (arr_2 [i_0]);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_15 -= ((-(arr_0 [0] [i_0 - 1])));
                    arr_14 [i_0] [i_3] [i_0] [i_0] = (1 | var_6);
                }
                var_16 ^= var_0;

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_17 = (arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_0 - 1]);
                    var_18 = (arr_16 [1] [i_0] [i_3] [i_5 - 1]);
                    arr_17 [i_0] [i_3] [5] [2] [i_0] [i_0] = ((~(arr_3 [i_5 - 1])));
                }
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    arr_20 [i_0] [13] [i_3] [i_0] = var_3;
                    arr_21 [12] [12] [12] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_19 = 0;
                    var_20 = (((8011 ? 255 : -28)));
                    arr_25 [0] [9] [i_3] [i_0] = (arr_4 [i_2] [i_3]);
                    var_21 = (((arr_18 [i_0] [1] [i_0 + 2] [i_0 + 2]) ? (arr_18 [i_0 + 1] [i_2] [i_0 + 1] [i_7]) : (arr_18 [i_3] [i_3] [i_0 + 1] [i_3])));
                }
                arr_26 [i_0] = (arr_9 [i_0 - 1] [11] [i_0 - 1] [i_0]);
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                arr_30 [i_0] [10] [i_0] = var_5;
                var_22 = (arr_28 [i_8]);
            }
            arr_31 [i_0] [i_0] [i_0] = (((-899 + 2147483647) >> (28 >= 30)));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_23 = (arr_16 [10] [i_0] [i_9] [10]);
            arr_34 [i_0] = 3018070711;

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_38 [i_0] = var_5;
                arr_39 [i_0] [i_10] [i_0 - 1] [i_0] = ((~((~(arr_32 [i_9])))));
                var_24 = (((arr_33 [i_0] [i_0]) % (arr_11 [i_0] [7] [i_0 + 2] [i_10])));
                arr_40 [i_0] [i_0] = (~8766);

                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    var_25 = arr_23 [i_0] [i_9] [i_10] [i_0];
                    arr_45 [i_0 + 2] [i_11] [i_0 + 2] [i_0] |= (arr_22 [i_9] [i_11]);
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_26 &= ((9998163961813450171 - (arr_2 [14])));
                    var_27 ^= var_4;
                    var_28 = (arr_0 [i_0] [i_9]);
                }
            }
            arr_48 [i_0] [i_9] [i_9] = ((arr_33 [i_0 + 1] [i_0]) ? (arr_33 [i_0 - 1] [i_0]) : (arr_33 [i_0 - 1] [i_0]));
            arr_49 [i_0] = (((arr_44 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]) || (arr_1 [i_0] [14])));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_29 = var_2;
            var_30 = (arr_47 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1]);

            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                arr_56 [i_13] [i_0] [i_14 + 1] = (arr_52 [i_0] [i_0]);
                arr_57 [i_0] = var_3;
            }
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                arr_61 [i_0] [i_0] [i_13] [i_15] = (arr_51 [i_15 - 2] [i_15 - 1]);
                var_31 = -4971477432216093613;
                var_32 = (arr_29 [i_0] [i_15] [i_15 - 2]);
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_33 = (((arr_29 [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_29 [i_0] [i_0 - 1] [10]) : (arr_54 [i_0 + 1])));
                arr_65 [i_0] [i_13] [9] [i_0] = ((12 ? ((((!(arr_53 [i_0] [i_13] [i_16]))))) : ((var_2 ^ (arr_46 [i_16])))));
                var_34 = (((arr_50 [1] [i_16] [i_0 - 1]) < (arr_50 [i_13] [i_13] [i_0 + 1])));
                var_35 = (arr_0 [i_0] [i_0]);
            }
        }
        arr_66 [i_0] = (arr_44 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]);
        var_36 |= var_9;
    }
    var_37 = (~var_1);
    var_38 = (~var_5);
    #pragma endscop
}
