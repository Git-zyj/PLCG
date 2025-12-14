/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 &= ((!(((-(arr_0 [i_0] [7]))))));

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                arr_8 [9] [i_0] [i_1] = ((!(((~(((arr_1 [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : var_13)))))));
                var_21 = (max(var_21, ((((min(var_16, var_11)) == (((!(arr_1 [i_2 + 2])))))))));
                var_22 = ((var_2 & ((var_0 ? (arr_3 [1] [15] [i_2]) : (arr_7 [i_1 - 1] [i_1 - 1])))));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_23 ^= (arr_5 [i_0] [i_0]);
                            var_24 = ((((!(((2047 ? var_13 : (arr_11 [i_0] [i_1] [i_1] [i_0] [i_4])))))) ? ((((!(arr_9 [i_3] [i_3] [i_3] [i_3] [i_3 + 2]))))) : 2047));
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            var_25 -= ((var_10 ? ((((((-1 + 2147483647) << (var_11 - 646204450)))) ? var_11 : ((var_5 & (arr_10 [i_0] [i_0] [i_0] [i_5] [10] [i_0]))))) : (((((((arr_5 [i_0] [i_5 - 3]) + (arr_10 [11] [i_5] [i_5] [6] [i_5] [i_0])))) ? (39152 && var_8) : (arr_13 [i_0] [18] [i_0] [20]))))));
            arr_16 [i_0] [i_5] = ((var_16 ? ((min((min(1, var_5)), (var_19 < 1)))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_26 = ((!(((((var_2 <= (arr_13 [i_0] [i_6] [i_6] [i_6])))) < var_7))));
            var_27 = ((!(((~(arr_11 [i_6 - 1] [i_0] [i_6] [i_0] [i_0]))))));
            var_28 = (((((max((arr_15 [22] [i_6]), var_10)))) ? (((1482631096 >> (((arr_9 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6]) - 17353434751131309525))))) : ((-97 ? 1 : 1429735978959892543))));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_29 = (min(var_29, ((((arr_7 [i_0] [i_0]) - (arr_7 [i_0] [i_0]))))));
            var_30 ^= var_0;
            var_31 &= 1429735978959892536;
        }
        var_32 = (((((min(18446744073709551614, var_18)) & (((-(arr_14 [i_0])))))) << (var_15 + 466055484386516750)));
    }

    for (int i_8 = 4; i_8 < 23;i_8 += 1)
    {
        var_33 -= (min(((((min(var_12, var_18))) ? (((var_19 ? (arr_22 [i_8 - 2]) : 131071))) : var_15)), (min((((arr_22 [i_8]) ? -1429735978959892529 : (arr_24 [i_8 + 2]))), (arr_24 [i_8 - 1])))));
        var_34 += (min((max(var_11, (arr_23 [i_8 - 1]))), ((((arr_23 [i_8 + 2]) > (arr_23 [i_8 - 4]))))));
        arr_25 [i_8] [i_8 - 4] = (((0 / (arr_24 [i_8 - 2]))) * (!var_11));
        var_35 = (((((var_13 ? (arr_22 [i_8 + 2]) : (arr_22 [i_8 - 4])))) ? (arr_24 [i_8]) : ((((arr_22 [i_8 - 4]) > (arr_22 [i_8 - 1]))))));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_36 -= -1;
        var_37 ^= (((((var_3 == (arr_14 [i_9]))))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    var_38 = var_0;
                    var_39 = (min(var_39, (((~(arr_13 [i_9] [i_10 - 2] [i_9] [i_9]))))));
                }
            }
        }
    }
    var_40 = var_14;
    #pragma endscop
}
