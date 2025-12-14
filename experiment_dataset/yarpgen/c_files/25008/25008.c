/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_17));
    var_21 = var_2;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (((arr_3 [i_0 - 3] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
            var_23 = var_3;
            var_24 = ((arr_1 [i_0 + 3] [i_1]) + (var_10 - -22277));

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_25 = 38;
                    arr_8 [i_0 + 4] [i_1] [8] [i_1] [i_1] [i_3] |= 14406435392573372376;
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_26 = ((arr_0 [i_2 + 1]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 + 1]));
                    arr_12 [1] [i_0] [1] = ((254 == ((var_1 ? (arr_5 [i_1] [i_2]) : -40))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_27 = (((arr_3 [i_0 - 1] [i_1]) ? (arr_13 [i_0 + 2]) : -6));
                    arr_15 [i_0] [i_1] [8] [i_2] [i_1] = (arr_0 [i_5]);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_18 [i_0] [i_5] [i_6] = (((arr_2 [i_0] [i_0 + 2] [i_2 - 3]) && (arr_2 [i_0] [i_0 + 2] [i_2 - 1])));
                        arr_19 [i_0] [i_5] [i_6] = (~1);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_0] [i_0] [9] [i_5] [6] [i_7] [i_7] = ((~(~var_18)));
                        var_28 = var_13;
                    }
                }
                var_29 = (min(var_29, 554495883));
                arr_24 [i_0] = ((-(((arr_4 [i_1]) / 27887))));
            }
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (arr_9 [i_0] [i_0] [6] [i_0])));
            var_31 = (arr_21 [i_0 + 3] [4] [6] [0] [0] [i_0 + 3]);
            arr_28 [i_0] [i_0] [i_0] = (var_4 == var_7);
            var_32 = (~1719804014);
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_9] = var_15;
            arr_32 [10] &= var_6;
        }
        var_33 = (max(var_33, (((+((((arr_13 [i_0]) || (arr_20 [i_0])))))))));
        var_34 -= arr_13 [i_0];
    }
    for (int i_10 = 3; i_10 < 9;i_10 += 1)
    {
        arr_36 [i_10] = ((+(((!-27880) & ((-(arr_14 [i_10])))))));
        var_35 = var_14;
        var_36 &= (max((min((~var_7), (arr_22 [i_10] [11] [i_10]))), (arr_9 [i_10] [i_10] [6] [i_10])));
    }
    #pragma endscop
}
