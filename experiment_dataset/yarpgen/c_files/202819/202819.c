/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_15;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_22 = ((var_1 * (arr_3 [i_1])));
                var_23 = (~7);
            }
            arr_6 [i_0] [4] [i_1] = 16383;
            var_24 ^= -1;
            var_25 = (max(var_25, ((max(18442, 18462)))));
            var_26 = 0;
        }
        var_27 = (((((((((arr_2 [i_0]) ? var_14 : 1842404658))) ? -2127953581821086929 : (arr_2 [i_0])))) ? ((-(((arr_0 [i_0]) / var_11)))) : ((((var_1 / (arr_4 [i_0]))) * var_12))));
        arr_7 [i_0] = ((-664 + (min(18442, -1602682955269198738))));
        arr_8 [i_0] [i_0] = (arr_2 [i_0]);
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_28 = (max(var_28, ((max(250, (245 + 245))))));
        var_29 = (min(((((arr_4 [2]) >> (((max(17592186044415, 7)) - 17592186044410))))), (max((arr_5 [1] [i_3] [i_3]), (min(var_0, (arr_3 [i_3 - 2])))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_4] = (((arr_3 [i_5]) ? (arr_18 [i_4] [17] [17] [i_4]) : ((min(102, 1)))));

                        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_4] [i_5] [i_5] [i_4] [i_8] = ((!((max(-13020, (arr_18 [i_4] [i_5] [i_5] [i_7]))))));
                            var_30 = (((((-1 / (arr_23 [i_4] [i_5] [i_6] [i_7] [i_8 - 1])))) ? 403495641 : ((((((arr_3 [i_4]) ? (arr_0 [i_7]) : 1)) * (arr_21 [i_4] [i_7 + 3] [i_4] [i_4]))))));
                            var_31 = 2147483647;
                        }
                        for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_4] [i_7] [i_4] = (var_18 + 1);
                            var_32 *= (((((arr_20 [i_4] [i_6] [i_9 + 1] [i_7] [i_9] [i_4]) * (max(1599868475, 3)))) * 1));
                        }
                        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_33 = ((((!(arr_31 [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1]))) && (arr_31 [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1])));
                            var_34 = (min(var_2, (((var_8 ? 1 : -18458)))));
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            arr_35 [i_4] [i_6] [7] = (0 ? (arr_29 [i_4] [i_7 - 2] [i_6] [i_5] [i_4]) : ((1 ? 1 : (arr_34 [i_7 + 2] [i_4] [i_7 + 2] [2] [3]))));
                            var_35 = (min(var_35, ((max((arr_20 [i_6 - 2] [i_6] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11]), ((((arr_29 [i_6] [i_7 - 1] [i_11 + 2] [i_11] [i_11 - 3]) == (arr_20 [i_6 - 2] [i_6] [i_11 + 2] [i_11] [i_11 - 1] [i_11 + 2])))))))));
                        }
                        var_36 = (max(((var_14 ? 3298949493 : (arr_24 [i_4] [i_4] [i_4] [i_6 - 1] [i_6 + 1]))), (((arr_24 [i_5] [i_4] [i_6] [i_7 + 2] [i_6 + 1]) % (arr_24 [i_4] [i_4] [i_7 + 1] [i_7 - 1] [i_6 + 1])))));
                        var_37 = ((63 == (((var_1 ? (arr_27 [i_4] [i_4] [i_4]) : 1)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    arr_40 [i_4] [i_12] [i_13] = (min(-31657, (1 - -18454)));
                    arr_41 [i_4] [i_4] [i_13] = ((!(((1 ? 5518746665952097649 : -18463)))));
                    var_38 = var_11;
                }
            }
        }
    }
    #pragma endscop
}
