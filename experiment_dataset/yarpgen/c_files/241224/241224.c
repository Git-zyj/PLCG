/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (arr_2 [1]);
        var_14 *= ((var_0 == (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((1 ? (((-((-(arr_4 [i_0] [i_0])))))) : -6434999950168413842));
            var_15 = (i_1 % 2 == zero) ? ((min((max((((arr_5 [i_1]) ? (arr_2 [1]) : var_11)), (arr_0 [i_0]))), ((((((1297084282 && (arr_4 [i_0] [i_0])))) << (((arr_5 [i_1]) - 1434528078)))))))) : ((min((max((((arr_5 [i_1]) ? (arr_2 [1]) : var_11)), (arr_0 [i_0]))), ((((((1297084282 && (arr_4 [i_0] [i_0])))) << (((((arr_5 [i_1]) - 1434528078)) - 622630010))))))));
            arr_7 [i_0] [i_1] [i_1] = ((1297084282 % (arr_4 [23] [i_0])));
            var_16 = (((arr_3 [i_0] [i_0] [i_1]) ? ((-(arr_3 [i_1] [i_1] [i_1]))) : ((min((arr_3 [i_0] [i_0] [i_1]), var_7)))));
            var_17 = (arr_2 [i_1]);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_18 -= 1;
                        var_19 = (max(var_19, ((((((arr_14 [i_3 + 1] [i_3 + 1] [4] [16] [i_3]) / (arr_13 [i_4 + 3] [i_3 - 1] [i_3 - 1]))) | (arr_14 [i_4 + 1] [i_4] [i_4 + 3] [0] [i_4]))))));
                        var_20 = (((-((max((arr_8 [i_4]), (arr_15 [i_0])))))));
                    }
                }
            }
            arr_16 [i_0] [i_0] = ((((max(var_7, (((arr_8 [18]) ? var_6 : (arr_0 [14])))))) && (6561 || 93)));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_21 = (min(((((((arr_17 [i_6] [i_6] [3]) ? var_4 : var_6))) ? (arr_2 [i_0]) : (arr_4 [i_7] [i_2]))), (((var_1 <= ((1 / (arr_12 [i_0] [i_5] [9] [i_7]))))))));
                            var_22 = ((-((max((max(-4566, 65535)), (max(var_11, (arr_15 [i_0]))))))));
                            arr_23 [i_5] [i_0] [i_5] [i_2] [i_0] = (max((arr_0 [i_5]), ((-(arr_20 [i_0] [i_2] [i_2] [i_2])))));
                        }
                    }
                }
            }
        }
        var_23 += (min(((((0 * (arr_22 [i_0] [i_0] [1] [i_0] [i_0] [i_0]))) ^ (arr_9 [i_0] [i_0] [i_0]))), (arr_10 [i_0] [i_0] [i_0] [i_0])));

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_24 = min((arr_3 [i_0] [i_8] [i_0]), (arr_5 [i_0]));
            arr_26 [i_0] [i_0] = ((var_10 ? ((-((max((arr_3 [i_8] [i_8] [i_8]), var_8))))) : (arr_8 [i_0])));
            var_25 = ((-((-((-(arr_18 [i_8])))))));
            var_26 = (max(var_26, ((min((var_3 | 65), var_1)))));
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_27 = (((((((((arr_3 [8] [18] [4]) | 1))) && var_6))) | ((((arr_19 [i_9] [i_9] [i_9] [i_9] [i_9]) && ((max(239, 1297084282))))))));
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_37 [i_9] [i_9] = (arr_30 [i_12] [17] [i_10]);
                        var_28 = var_4;
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_29 = (min(var_8, var_10));
        arr_41 [i_13] = (((((0 / (((1 <= (arr_15 [i_13]))))))) ? (var_4 | var_6) : (arr_31 [i_13])));
    }
    var_30 = 11;
    #pragma endscop
}
