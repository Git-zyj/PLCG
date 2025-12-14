/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = 20;
    var_17 = (min(var_17, var_9));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_0 [i_0 + 2])));
        var_18 ^= var_12;

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 = (arr_2 [9]);
            var_20 = (min(var_20, (((arr_1 [i_0 + 1]) ? var_11 : var_7))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [12] [i_0] = 1040187392;
            var_21 = (((~(~33948))));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_22 = (-2147483647 - 1);
        var_23 = (min(var_23, (((!((min(197, var_11))))))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_24 *= (min((~-21821), -1958023904));
        arr_16 [i_4] = (min((((max((arr_14 [5]), (arr_0 [i_4]))))), ((((min(var_2, var_13))) % (min(-2147483642, var_12))))));
        var_25 = min(35, (max(220, ((min(32750, 0))))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_26 = -var_6;
                            arr_32 [i_7] [i_6] = ((-((((((arr_1 [i_6]) + (arr_23 [i_6] [i_7] [i_7] [i_9])))) ? ((221 ? var_2 : 0)) : 2147483642))));
                            var_27 = ((((max((0 || var_9), (arr_29 [i_7] [i_6])))) != (((~var_13) ? ((0 ^ (arr_24 [i_7]))) : var_0))));
                            var_28 = (max(var_28, ((max(28, ((((-(arr_25 [i_6] [i_7] [i_8] [i_9]))) + (arr_26 [i_5] [i_5] [i_5]))))))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_35 [i_7] = 238;
                            var_29 = -var_5;
                            var_30 = ((!((min(0, 30)))));
                        }
                        arr_36 [i_5] [i_5] [i_5] [i_7] = 129;

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_31 = (arr_21 [i_7] [5]);
                            var_32 = ((arr_26 [i_5] [i_6] [i_5]) / (min((arr_12 [i_8]), (((arr_14 [i_5]) * var_7)))));
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_42 [i_5] [i_6] [i_7] [i_7] [i_7] [i_12] [i_12] = -2147483642;
                            var_33 = ((max((var_11 & 32767), 236)) << (65513 - 65497));
                        }
                        for (int i_13 = 1; i_13 < 6;i_13 += 1)
                        {
                            var_34 = (arr_12 [i_5]);
                            var_35 = (arr_29 [i_7] [i_8]);
                            var_36 = var_6;
                            var_37 = min(var_3, var_1);
                            var_38 = (arr_18 [i_5] [i_6]);
                        }
                    }
                }
            }
        }
        var_39 ^= (((1 ? (min(var_6, 0) : (arr_5 [i_5] [i_5])))));
    }
    #pragma endscop
}
