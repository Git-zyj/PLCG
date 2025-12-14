/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 |= ((((((arr_1 [i_0] [12]) ? var_3 : (min(var_10, (arr_0 [14])))))) ? (((-((min(7902, 8)))))) : ((247 + ((var_1 ? 860884201 : var_6))))));
        arr_2 [i_0] = min((arr_0 [i_0]), (min(((min((arr_0 [i_0]), var_7))), ((10414600292973006630 ? 247 : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 |= 7902;

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 = (arr_1 [i_1] [i_1 - 1]);

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_16 = var_1;
                arr_13 [i_1] [i_2] [i_3 - 1] |= ((var_10 ? (((((var_12 ? -5602 : (arr_1 [i_1 - 1] [i_2])))) ? ((min(46, 1186659300))) : (((arr_8 [i_1]) ? var_3 : var_11)))) : (arr_8 [i_1])));
                arr_14 [i_1 - 1] [i_2] [i_3] = min(1, 19947);
                var_17 = (min(var_17, (arr_6 [13] [13])));
            }
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                arr_17 [i_1] [i_4] = ((((((1814667284651309519 + var_10) ? -450937682 : 227))) ? (((((var_0 ? var_1 : 10))) + var_11)) : (((((min(104, -7898))) ? (arr_5 [i_1]) : (arr_15 [i_1 - 1] [i_1 - 1]))))));
                var_18 = (max(var_18, ((((((-(min(var_6, (arr_10 [i_2] [4])))))) ? ((((247 ? var_12 : var_11)) + (min((arr_0 [i_1 - 1]), 61292)))) : 246)))));
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_27 [6] [i_7] [i_6] [i_5] [i_5] [i_2] [i_1] = (((!(arr_22 [i_5] [i_5]))));
                            var_19 = (min((((((124 + (arr_25 [i_1 - 1] [i_1] [i_1 - 1] [15] [i_1])))) ? ((var_4 ? var_8 : -12648)) : (((arr_8 [i_1]) ? 15 : var_10)))), 231));
                            arr_28 [i_7 + 2] [i_2] [i_5] = ((var_5 + (((arr_24 [7] [i_2] [i_2] [i_2] [i_2]) + var_11))));
                            arr_29 [i_1] [i_2] [i_5] [i_6 + 4] [i_1] = (((((113 ? -41 : 17))) ? (min(((var_5 ? var_11 : var_9)), (((142 ? var_11 : var_7))))) : ((min(((min((arr_26 [i_1]), (arr_4 [i_6 + 2] [i_6])))), -4294967281)))));
                            var_20 = ((-((((min(var_11, 9898975475139498203))) ? 113 : ((var_3 ? (arr_21 [12] [i_5] [i_6] [i_7]) : 113))))));
                        }
                    }
                }
            }
            var_21 = (!var_7);
            var_22 = ((!((min((((arr_18 [i_1]) ? (arr_23 [i_1] [i_2] [9] [i_2] [i_1] [i_2]) : (arr_4 [i_1] [i_1 - 1]))), (((32749 ? var_7 : (arr_12 [i_1] [i_2] [i_1 - 1] [i_1 - 1])))))))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_23 *= (((((arr_20 [i_1] [i_8]) ? (((var_8 ^ (arr_24 [i_8] [i_8] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : var_11)) + 6706274489257158089));
            arr_34 [i_1 - 1] = ((var_9 ? ((-(3564429390 / 6790164282947030158))) : ((-((var_9 ? (arr_12 [i_8] [i_8] [i_1] [i_1]) : var_0))))));
            var_24 = var_10;
            var_25 = (max(var_25, ((((((arr_10 [i_8] [i_1]) & (arr_0 [i_1]))) + (((((min(97, var_4))) ? ((min(var_7, var_7))) : var_10))))))));
            var_26 = (arr_30 [i_8] [14] [i_1]);
        }
        arr_35 [i_1] = var_9;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_27 = (max(var_27, (((((min(((var_7 + (arr_37 [i_9] [i_10]))), (arr_36 [i_9])))) + ((var_9 ? (min(var_8, (arr_38 [i_9] [i_9]))) : (arr_38 [5] [i_10]))))))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((min((237 + 159), var_6)))));
                                var_29 = (max(var_29, ((((((min(var_12, var_6)) + (arr_46 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) + (((var_2 + ((min((arr_37 [i_12] [i_9]), (arr_46 [i_9] [i_9] [i_11] [i_9] [19] [i_13] [i_10]))))))))))));
                                var_30 = (((((791307105 ? (arr_36 [i_9]) : (arr_36 [i_9])))) ? (((min(62, (arr_41 [i_9] [i_10] [5]))) + 235)) : ((((!((min(var_0, 3159069537)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (min((((!163) ? var_6 : ((var_4 ? 88072539 : var_6)))), (((var_0 ? var_0 : -1681169596)))));
    var_32 = (!(var_4 - var_3));
    #pragma endscop
}
