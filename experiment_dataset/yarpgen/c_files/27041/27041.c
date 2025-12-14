/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (max(((((max(var_0, 111))) ? var_1 : var_14)), ((var_14 ? (((min(145, 255)))) : (min(var_11, 134))))))));
    var_16 = var_9;
    var_17 = 125;
    var_18 *= ((var_1 <= (min(var_7, (max(9223372036854775807, 8044974564789050355))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_10 [i_0] [3] [3] = 145;
                var_19 = ((var_7 ^ (arr_5 [9] [i_1] [i_1 + 1])));
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_20 = var_12;
                var_21 = ((231 ? (arr_12 [i_3 - 1] [i_1 + 1] [i_1 + 1] [i_0]) : var_8));
                var_22 = 201;
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_19 [i_0] [i_1 + 1] [0] [i_1] = (arr_6 [i_0]);

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_6] [i_5] [i_5] [i_1] [i_0] = (arr_1 [i_1 + 1]);
                        var_23 = (((((var_1 ? (arr_11 [i_0]) : var_8))) || (((var_3 ? (arr_13 [i_5] [10]) : var_13)))));
                        var_24 = (min(var_24, (((arr_21 [i_6] [i_1] [i_1] [i_6]) ? var_4 : (arr_22 [i_0] [i_0] [i_0] [i_0])))));
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_25 = var_2;
                        var_26 |= ((((2162754445183108075 ? 21 : (arr_17 [i_0] [i_0]))) << (8044974564789050355 - 8044974564789050349)));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_27 = (min(var_27, (arr_29 [i_1] [i_1] [i_4] [2] [i_0] [i_0] [10])));
                        arr_32 [i_5] [i_4] [9] = (~var_2);
                        var_28 = ((var_13 ? ((var_3 ? 110 : -2162754445183108067)) : (arr_9 [i_0] [i_1] [i_0] [i_1 + 1])));
                    }
                    var_29 = (!var_7);
                }
                arr_33 [i_1] = 173;
                var_30 = ((~(arr_24 [i_4] [i_0] [i_1] [i_0] [i_0])));
            }
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                arr_38 [i_9] = ((arr_36 [i_0] [i_0]) ? var_5 : -8);
                var_31 += ((-2162754445183108075 ? (arr_21 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_0]) : (arr_22 [i_0] [i_1 - 1] [i_1 - 1] [i_9 - 3])));
                var_32 -= (((-9223372036854775807 - 1) ? (arr_31 [i_1 - 1] [i_1 + 1] [i_9 + 1]) : (arr_31 [i_1 + 1] [i_1 - 1] [i_9 - 3])));
                var_33 = (((arr_22 [i_9] [i_1] [i_1 - 1] [i_1 - 1]) ? 83 : (arr_30 [i_0] [i_0] [i_1 - 1] [i_9] [i_9 - 1])));
            }
            var_34 = (min(var_34, (!var_10)));
            var_35 += -2162754445183108064;
        }
        var_36 = (max(var_36, -var_7));
        var_37 = (min(var_37, var_5));
    }
    #pragma endscop
}
