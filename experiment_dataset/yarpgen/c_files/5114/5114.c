/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_21 = (min(var_21, var_4));
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = ((var_18 ? (arr_15 [i_0] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_15 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] [6] [i_0])));
                            var_22 += (((arr_9 [i_3 + 1] [i_3 + 2] [i_3] [i_2] [i_2]) ? (arr_9 [i_3] [i_3 - 1] [i_2] [i_1] [i_1]) : (arr_9 [i_4] [i_3 + 1] [i_3] [i_3 - 1] [i_3])));
                            var_23 = (arr_6 [i_1] [i_2] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_24 = ((arr_15 [i_0] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 2] [i_0]) ? var_2 : (arr_10 [i_3 - 1] [i_3] [i_3] [i_3 + 2] [i_1]));
                            var_25 -= (arr_17 [i_3] [i_2] [i_3] [i_3 + 2]);
                        }
                        var_26 = (((arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1]) && (arr_15 [i_0] [13] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3])));
                        var_27 |= var_14;
                        var_28 = (max(var_28, (((2571578911 ? 1883153702 : 1723388364)))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_29 = var_11;
                            var_30 ^= 4292761144;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_33 [7] [7] [i_8] [i_0] [i_10] = var_5;
                            var_31 = (max(var_31, (((~((-(arr_23 [i_8]))))))));
                            var_32 = (max(var_32, (((-9223372036854775807 ? (arr_13 [i_0] [i_8 - 2] [3] [3] [i_10] [9] [i_7]) : ((((arr_7 [i_8 + 2] [i_10] [i_0]) >> (var_7 + 7658534388223332732)))))))));
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_33 -= (arr_4 [i_8 + 2] [i_11 + 2] [i_11 + 2]);
                            var_34 = (min(var_34, ((((~2571578911) ? (!18446744073709551605) : ((var_10 ? (arr_8 [i_9]) : var_6)))))));
                        }
                        for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            var_35 = (((((4292761171 ? 1274277586 : var_13))) ? (arr_11 [i_0]) : 1274277574));
                            var_36 ^= var_19;
                            var_37 = (arr_37 [i_0] [i_0] [i_8] [i_0] [i_0]);
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_38 = -var_16;
                            var_39 = ((var_7 - ((((var_5 < (arr_32 [i_0] [i_0] [i_7] [i_8] [i_9] [2])))))));
                            var_40 -= (arr_29 [i_8] [i_8] [i_8] [i_8]);
                        }
                        var_41 = (((arr_15 [i_0] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 2] [i_0]) ? (arr_12 [14] [i_8] [i_8 - 2] [i_8 - 2]) : (arr_12 [i_8] [i_8] [i_8 + 2] [i_8 - 2])));
                    }
                }
            }
        }
        var_42 = (((arr_35 [i_0]) <= var_5));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_43 = (((arr_41 [i_14]) ? var_2 : (arr_40 [i_14] [i_14])));
        var_44 = (((arr_40 [i_14] [i_14]) ? (arr_40 [i_14] [2]) : (arr_41 [i_14])));
        var_45 = ((((-1274277603 ? (arr_41 [i_14]) : var_16)) == (((var_2 - (arr_40 [8] [i_14]))))));
    }
    #pragma endscop
}
