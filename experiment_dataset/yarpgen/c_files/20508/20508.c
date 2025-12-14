/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) < (arr_2 [i_0 + 1] [i_0])));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_13 |= min((max((arr_3 [i_1 - 1] [i_0 - 1] [i_1 - 1]), (arr_3 [i_0] [i_1] [i_1 - 1]))), ((((arr_3 [i_1 - 1] [i_0 + 2] [i_0 + 2]) < (arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1])))));
            var_14 = (!65);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_11 [7] [i_0] [i_3] [i_4] = ((((!(var_1 > 2))) ? (((!(190 == var_0)))) : (((!(arr_4 [i_2] [i_0 + 2] [i_2]))))));
                        var_15 ^= arr_3 [i_0] [i_2] [i_3];
                        var_16 -= min(((((max((arr_9 [i_0 + 1] [i_2] [i_4] [i_4]), (arr_9 [2] [i_2] [i_4] [i_4])))) ? (((~(arr_9 [i_0 - 1] [i_2] [i_4] [i_4])))) : ((var_0 ? (arr_0 [i_2]) : var_4)))), (((!(arr_10 [i_2] [i_4] [i_2])))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_17 *= (((((((arr_12 [8] [i_2] [i_2] [i_0] [i_0 + 1]) < (arr_12 [i_0 - 1] [i_3] [i_0 + 2] [i_0 + 2] [i_0 + 1]))))) != (min(var_10, (arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])))));
                        var_18 = var_1;
                        arr_15 [i_0] [i_3] = (max((((!((min(var_4, var_10)))))), (((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1]) ? -5958487465400569418 : (arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1])))));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            var_19 ^= (arr_17 [10] [6] [i_3] [18] [i_2]);
                            var_20 = (arr_3 [i_2] [i_3] [i_6]);
                            var_21 = (((((var_3 ? (arr_14 [i_5] [i_2] [i_0] [i_5] [5]) : var_11))) ? (arr_16 [i_5]) : ((((arr_2 [i_0] [i_0]) ? var_11 : (arr_0 [i_0]))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_24 [11] [i_0] [i_0] [i_7] = ((((var_10 ? ((max(var_1, (arr_2 [i_0] [i_0])))) : (arr_1 [4]))) << ((var_3 ? ((36 ? var_1 : (arr_5 [19] [i_3] [i_7]))) : ((((arr_8 [i_0] [i_2] [4]) && var_2)))))));

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            var_22 = (!((((arr_14 [i_0] [i_0] [i_0] [2] [i_8 + 1]) ? (arr_14 [i_8] [i_0] [i_0] [i_7] [i_8 + 2]) : (arr_14 [i_0] [17] [i_0] [i_0] [i_8 - 3])))));
                            var_23 = (max(var_23, ((((arr_3 [i_2] [i_3] [i_8]) / ((min((arr_5 [i_8 + 1] [i_3] [11]), (arr_5 [i_2] [10] [i_7])))))))));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            arr_29 [i_7] |= var_6;
                            arr_30 [i_0] [i_7] [i_3] [i_2] [i_0] = (!var_6);
                        }
                    }
                    var_24 = (!var_9);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_40 [i_0] = 190;
                        var_25 = (((((var_6 ? ((max(158, (arr_33 [i_11] [i_10] [i_0 + 2])))) : 65))) ? 0 : ((min((arr_20 [i_0] [15] [i_11] [i_0 - 1] [i_0 + 1]), (((0 == (arr_21 [i_0])))))))));
                    }
                }
            }
        }
    }
    var_26 = var_4;
    var_27 = (!83);
    #pragma endscop
}
