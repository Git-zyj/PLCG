/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_21 = (max((arr_0 [i_0]), ((min(1, 1)))));
        var_22 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [0] [4] [i_2] &= (max(((var_13 ^ (arr_1 [i_1]))), (max((arr_5 [i_2] [i_2]), (1 % 1)))));
            arr_10 [i_2] = ((((((min(var_14, 29450))) || 177)) ? (min(var_4, (arr_3 [i_1] [i_2]))) : (min(48754, (86 - var_14)))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_1] [i_3] [8] = (min(((1 ? var_0 : var_10)), (((-(-6538 + var_19))))));
            arr_15 [i_1] [i_1] &= ((!(1 ^ 0)));

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_23 += var_18;
                var_24 = ((((((arr_6 [i_1] [i_4]) + (arr_1 [i_4])))) ? ((var_14 ? var_11 : (arr_6 [9] [i_3]))) : ((max((arr_6 [i_4] [i_3]), (arr_1 [i_4]))))));
                arr_19 [i_1] [i_3] [i_4] = (min(((((arr_8 [i_3]) > 18))), (arr_17 [i_4] [i_3] [i_1])));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_24 [0] [i_5] [i_5] = (((arr_8 [i_1]) + (arr_8 [i_1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_30 [i_3] [i_7] [i_7] |= var_18;
                            arr_31 [i_1] [5] [i_5] [5] [4] [1] = (((arr_3 [i_3] [i_5]) + (arr_7 [i_3] [i_5])));
                        }
                    }
                }
                var_25 = (((arr_18 [i_1] [i_3] [i_5]) ? (arr_18 [i_5] [i_3] [i_5]) : 14151952830992894454));
            }
            arr_32 [i_3] = (((arr_6 [i_1] [i_3]) < (max(6387016951082491261, ((max(-17355, 24380)))))));
            arr_33 [i_3] = (var_14 <= -32317);
        }
        var_26 = (max(var_26, (((((((((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : var_10)) << (((arr_22 [i_1] [i_1] [6] [i_1]) - 1953898663139353552))))) ? (max((arr_4 [i_1]), 32317)) : (min((1 * 100), (((arr_3 [i_1] [i_1]) / (arr_12 [i_1] [i_1]))))))))));
        arr_34 [i_1] [i_1] = (((((arr_11 [i_1] [i_1] [i_1]) ? 240 : var_2))) ? (min((arr_11 [i_1] [i_1] [i_1]), var_4)) : (((min(1, (arr_11 [i_1] [i_1] [i_1]))))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_37 [i_8] [i_8] = ((((min(1, (arr_7 [i_8] [i_8])))) ? (arr_7 [i_8] [i_8]) : (((arr_7 [i_8] [i_8]) ? var_6 : (arr_7 [i_8] [i_8])))));

        for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
        {
            var_27 = (max(var_27, var_12));
            var_28 = (max(var_28, ((min((min(44580, ((var_19 ? var_9 : var_12)))), 1)))));
            var_29 ^= (arr_22 [i_8] [i_8] [i_9] [i_9]);
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
        {
            arr_43 [i_8] [i_8] = ((+(min((arr_38 [i_10 + 1]), var_4))));
            var_30 ^= ((((max(((max(var_8, var_19))), (max(var_18, var_17))))) ? (-2147483647 - 1) : (arr_42 [i_10 - 1] [i_10 - 2])));
        }
        arr_44 [i_8] = ((((min(2210526769, 55908))) ? (arr_21 [i_8] [i_8] [i_8] [i_8]) : (min((arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (max(1841508725, 1122525221))))));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        arr_47 [i_11] = var_8;
        var_31 ^= (((max(((1339586674 >> (1413827450 - 1413827434))), var_15)) == (arr_46 [15])));
    }
    #pragma endscop
}
