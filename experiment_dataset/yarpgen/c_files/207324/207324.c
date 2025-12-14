/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min(((var_4 ? (((arr_2 [i_0]) ? var_1 : 13303386467988567060)) : (arr_3 [i_1 + 2]))), ((min((~165), -91)))));
                var_17 = ((((((arr_4 [i_1] [i_1 + 2]) ? (arr_4 [i_1 - 3] [i_1 - 2]) : var_1))) ? (1 * 4610560118520545280) : (((~(((arr_2 [1]) ? (arr_3 [i_0]) : (arr_1 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_18 = (arr_6 [1] [i_1 + 3] [i_1] [i_0]);
                    var_19 = (((~(arr_4 [i_0] [i_0]))));
                    var_20 = (((arr_6 [5] [i_0] [1] [i_2]) ? (arr_5 [i_1 - 3] [i_1 + 3]) : (((var_9 ? (arr_7 [i_0] [i_1]) : 1)))));
                    var_21 = ((~(arr_0 [i_1 - 2])));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_22 = ((~(91 - 8191)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((var_12 ? (-8191 - -9223372036854775799) : (((var_5 ? (arr_6 [i_0] [i_1] [i_3] [i_5]) : 0)))))) ^ (((((63327 ? (arr_2 [i_5]) : (arr_14 [i_0] [i_1 - 3] [7] [i_4] [i_5])))) ? (((arr_11 [i_0] [4] [i_3] [i_1 + 3] [14] [i_0]) ? (arr_10 [1] [i_3] [i_4] [i_5]) : var_2)) : var_9)))))));
                                var_24 = ((~((((max((arr_7 [i_1] [3]), var_1)) >= var_3)))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_25 = (max(0, (((((max((arr_8 [i_0] [i_0] [i_6] [i_0]), var_15)))) / (min(-8192, var_7))))));
                    var_26 = ((!(((-(((arr_0 [i_1]) ? 89 : (arr_10 [8] [i_1] [i_1] [i_6]))))))));
                    var_27 = (((22238 & (((((arr_0 [i_0]) + 9223372036854775807)) >> (((arr_15 [i_0] [i_0] [i_6] [i_1]) - 18134380523204119725)))))));
                    var_28 = (min(var_28, var_13));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_29 = (max(4610560118520545307, (((~(arr_12 [i_1 + 3]))))));
                        var_30 = ((~(((!((max(var_15, var_12))))))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_31 = ((~((-8173 ? ((max((arr_9 [i_0] [16] [i_7] [i_9]), (arr_14 [9] [i_1 - 2] [i_1 - 2] [i_9] [i_7])))) : (0 / 24)))));
                        var_32 = (max(((var_1 ? (((min(1, 7)))) : (min((arr_9 [i_0] [i_1 + 1] [1] [i_9]), var_2)))), ((((arr_13 [i_9] [i_9] [i_0] [i_1 + 3] [i_1 - 3] [i_0] [i_9]) ^ (arr_5 [i_1 - 1] [i_1 + 3]))))));
                    }
                    var_33 = (min(var_33, (arr_14 [i_0] [i_0] [i_1] [i_1] [14])));
                    var_34 = (min(var_34, var_6));
                }
                var_35 = (max(var_35, ((min(-15, ((var_7 ? (var_13 > var_10) : var_8)))))));
            }
        }
    }
    var_36 = (min((((((min(var_3, var_14))) ? (var_10 <= var_6) : (98 - var_11)))), ((((min(49, 60))) ? (((min((-32767 - 1), 2199)))) : (1151657125234115601 - 1)))));
    var_37 = var_9;
    var_38 = -var_3;
    #pragma endscop
}
