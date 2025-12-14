/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_20 = (min(var_20, (arr_5 [17] [i_1])));
                    arr_7 [i_1] [10] [2] [i_2] = (max((arr_6 [i_0] [i_0] [i_2 + 1] [i_1]), (min(var_7, ((-113 ? 0 : (arr_3 [i_0] [i_0])))))));
                    arr_8 [i_0] [8] [i_1] = ((~(min((((var_12 ? 1 : var_9))), 9001222700675619235))));
                    var_21 = var_9;
                }
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_0] |= (arr_2 [i_0]);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_22 = (min(var_22, (((var_12 ? (arr_10 [i_1] [18] [i_3 + 2] [i_0]) : -1521)))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_23 = ((-(arr_12 [i_3] [i_3 + 1] [i_5] [i_5])));
                            var_24 = var_17;
                            var_25 = (arr_15 [i_0] [i_1] [i_3 + 2]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_1] = (((!0) > (arr_10 [i_0] [i_1] [i_3 + 2] [i_1])));
                            var_26 = ((var_9 ? (arr_5 [i_4] [i_4]) : (-22227 && var_6)));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_27 = ((!(arr_17 [i_3 + 2] [i_3 + 2] [i_3] [i_1])));
                            var_28 = (((((arr_20 [i_0] [1] [i_0] [i_4] [i_4] [10]) && (arr_15 [i_0] [i_0] [i_4]))) ? var_0 : var_9));
                        }
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_29 = var_9;
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = var_7;
                        }

                        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_9] [6] = ((var_2 ? (var_12 ^ var_3) : var_1));
                            arr_32 [i_1] [i_1] [i_3] = 30223;
                            var_30 = ((var_9 ? (arr_3 [i_9] [i_1]) : var_5));
                            arr_33 [i_1] [i_1] [i_3] [i_4] [i_9] = var_0;
                        }
                        for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_1] [i_0] [22] = ((((11273132475067055914 ? var_15 : 7936))) ? (arr_17 [i_10 + 3] [i_3 + 3] [i_3 + 1] [i_1]) : var_11);
                            arr_37 [i_4] [i_1] [i_3 + 2] [i_4] [i_10 + 2] [i_4] = 640201856;
                            var_31 = (((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_4]) : var_2));
                        }
                    }
                    var_32 = (max(((((arr_4 [i_1]) ? ((var_1 ? -22227 : var_17)) : ((max(var_9, 0)))))), (max(((var_11 * (arr_4 [i_1]))), 268431360))));
                    var_33 = (max((min((arr_27 [i_3 + 1] [i_1] [6] [14] [6]), (arr_22 [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1]))), (arr_22 [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1])));
                }
                var_34 ^= ((((var_6 ? (max(var_17, (arr_0 [i_0]))) : (arr_12 [i_0] [i_0] [i_0] [18]))) <= (arr_26 [i_0] [i_0] [i_0] [i_0] [12])));
                var_35 |= ((!((((((-22514 ? -29241 : (arr_16 [1])))) ? 16887700 : (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_36 |= (~((var_7 ? ((min(var_5, var_17))) : (max(var_7, var_15)))));
    var_37 = var_10;
    var_38 ^= var_12;
    #pragma endscop
}
