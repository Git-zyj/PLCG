/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((~4294967295), (var_7 | -961401938269806600)))) ? ((var_2 + ((var_3 ? var_1 : 255)))) : var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_14 = (~var_12);
            var_15 = (arr_2 [i_0] [i_0]);
            arr_5 [i_0] = min((((((var_8 ? var_8 : var_2)) <= (arr_2 [i_0] [i_0])))), (max((arr_4 [i_1]), (arr_4 [i_0]))));
            var_16 ^= (arr_1 [8] [8]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_17 = ((-(min(((-4029739554905227906 ? 19 : 1)), (min((arr_8 [i_0]), var_4))))));
            var_18 = (max(var_18, ((((arr_8 [1]) * (((arr_2 [i_0] [12]) ? (arr_6 [i_0] [8]) : (!var_7))))))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_19 = var_1;
            arr_12 [8] [i_0] [i_0] = (((arr_3 [i_0]) <= (min((arr_8 [i_0]), (!var_8)))));
        }
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            var_20 |= ((((!(arr_7 [i_4 - 2] [i_4])))));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_17 [i_4] [i_4] [i_5] [i_4] |= (arr_15 [i_4 - 2]);

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_21 &= (max(1, 1996632676440656238));

                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        arr_24 [i_4] &= (var_1 ? (!-9761) : ((~(arr_16 [i_0] [i_5] [i_6] [i_7 - 1]))));
                        var_22 = (arr_9 [i_0] [i_0] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_27 [i_0] [i_4] [i_5] = (max((arr_19 [i_4 - 2] [i_0]), -var_0));
                        var_23 -= (max(((255 ^ (arr_16 [i_4 - 2] [i_4 + 1] [i_8] [i_8]))), ((((((arr_18 [i_8] [i_5] [i_5] [i_0]) ? (arr_0 [i_5]) : var_5))) ? (arr_7 [i_4 + 3] [i_4 + 3]) : ((~(arr_2 [i_0] [i_8])))))));
                        var_24 -= (((((-((var_4 | (arr_10 [i_5])))))) & (min(((max((arr_20 [1] [i_5]), (arr_16 [i_8] [2] [i_4] [i_0])))), (arr_11 [i_6])))));
                        var_25 = (max(var_25, (arr_9 [i_0] [i_4 + 1] [i_8])));
                    }
                    arr_28 [i_6] [i_0] [i_4] = var_6;
                }
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_26 = (((+((var_7 ? (arr_15 [i_9]) : (arr_8 [i_0]))))));
                        var_27 = (arr_22 [i_0] [i_5] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [3] [i_0] [i_0] = (arr_13 [i_0]);
                        arr_37 [i_0] [i_0] [i_5] [i_9] [i_11] = var_8;
                        arr_38 [i_0] [i_4] [7] [i_9 - 2] [i_9 - 2] [i_4 - 2] [i_0] = -1996632676440656239;
                        var_28 = ((((((arr_0 [i_0]) ? ((var_4 ? (arr_23 [i_0]) : (arr_26 [i_0] [12]))) : (var_10 <= -84)))) ? ((+((82 ? (arr_19 [i_0] [i_0]) : (arr_26 [i_4 + 1] [1]))))) : (arr_18 [i_0] [11] [11] [i_11])));
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                    {
                        var_29 = (((arr_39 [i_12 + 1] [i_9] [i_5] [1] [i_5] [i_4] [i_0]) ? ((-(arr_35 [i_0] [i_4] [i_5] [8] [i_9] [8] [i_12 + 1]))) : 56));
                        var_30 = (max(var_30, ((((((var_1 ? (arr_26 [i_4 - 2] [i_9 - 2]) : (((arr_9 [i_0] [i_9] [i_12 + 1]) ? (arr_31 [i_12] [i_9 - 2] [i_5] [i_5] [i_4] [i_0]) : var_9))))) ? (arr_7 [i_4] [i_4]) : var_5)))));
                    }
                    arr_41 [i_0] [i_4] [i_5] [i_0] = ((((~((127 ? 1 : (arr_20 [i_0] [i_0]))))) >> (-8174 + 8204)));
                    var_31 = (max(var_31, (((((max(var_9, (arr_21 [i_9])))) || ((((arr_21 [i_9]) ? (arr_21 [i_4]) : (arr_21 [i_9])))))))));
                }
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
            {
                arr_45 [i_0] [i_0] [i_13] = (max((arr_20 [i_0] [i_13]), (((~(~var_3))))));
                var_32 = ((max((arr_19 [i_4 - 1] [i_0]), (arr_19 [i_4 - 1] [i_0]))));
            }
            for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
            {
                var_33 = (arr_29 [i_4]);
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_53 [i_16] [i_0] [i_14] = ((((-9761 && (arr_48 [i_4 + 1]))) ? (min(((-(arr_18 [i_0] [i_0] [4] [i_0]))), ((var_1 ? var_11 : var_11)))) : (min(-1, (arr_48 [i_4])))));
                            arr_54 [i_4] [i_4] &= ((-(((var_11 + 2147483647) >> (var_0 - 1385983493)))));
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {
                var_34 = (min(var_34, -1996632676440656239));
                var_35 |= (arr_10 [i_4]);
            }
            var_36 = ((32561 ? (arr_35 [i_0] [i_4 + 2] [i_0] [7] [i_0] [i_4 - 2] [i_0]) : (min((((arr_14 [i_0] [i_0]) ? (arr_22 [i_0] [3] [i_0]) : 35)), (((-(arr_42 [i_0]))))))));
            arr_57 [i_0] [i_4 + 2] [i_0] = ((!((max((((var_12 ? (arr_16 [2] [i_4] [i_4 - 2] [1]) : 2147483647))), (arr_19 [i_0] [i_0]))))));
        }
        var_37 = (arr_1 [i_0] [i_0]);
    }
    var_38 = var_9;
    var_39 = var_1;
    #pragma endscop
}
