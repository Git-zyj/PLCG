/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((min((arr_1 [i_1 - 2]), (arr_3 [i_0] [1]))) <= (((max((arr_2 [10] [i_0]), (arr_0 [i_1]))))))))) + ((((!(arr_2 [i_0] [i_0]))) ? var_2 : ((404 ? (arr_1 [i_0]) : var_4))))));
                arr_6 [i_0] [i_0] = (((((((max((arr_4 [i_0] [i_0]), 382))) ? (2147483648 - var_1) : (~var_3)))) ? var_6 : ((var_12 * (arr_2 [10] [i_1 - 2])))));
                arr_7 [i_1] [i_1] [1] = (((arr_2 [i_0] [i_1 - 3]) >> ((((arr_2 [i_0] [i_1 + 1]) && (arr_2 [9] [i_1 - 3]))))));
            }
        }
    }
    var_13 = (max(var_13, (((!((!(!17200408231555473696))))))));

    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (var_6 * (arr_2 [i_2] [i_2]));
        var_14 = (((~-1982715645) == var_5));
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 8;i_5 += 1)
            {
                {
                    var_15 = (min(var_15, 1642499387982618531));
                    var_16 = (arr_11 [i_3]);
                    var_17 = (min(var_17, (!var_0)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_23 [i_7 - 3] [i_7 - 2] [6] [i_6] [6] &= (+(((arr_14 [i_5] [i_7]) ? (!var_7) : (arr_2 [9] [i_7]))));
                                arr_24 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = (((((((18 ? 16804244685726933076 : 127))) || var_2)) && ((max((max(43081, (arr_19 [i_7 - 2] [1] [i_5] [i_5] [9] [i_3]))), (arr_17 [i_4 + 3] [i_4 + 3] [i_5 - 4]))))));
                                var_18 = (min(var_18, 4076813904));
                            }
                        }
                    }
                }
            }
        }

        for (int i_8 = 3; i_8 < 7;i_8 += 1)
        {
            arr_29 [i_3] = ((((-(((arr_12 [i_8] [i_3 - 4]) / var_10)))) + (((-(arr_0 [i_8]))))));
            arr_30 [i_3] [i_3] = (((((((max((arr_26 [i_3] [i_8]), -1982715654))) ? ((67108864 ? (arr_2 [i_3] [i_3]) : 2147483644)) : (~var_10)))) ? (0 | 42907) : (((((arr_12 [i_3 + 1] [1]) == (min((arr_1 [2]), (arr_21 [i_3] [i_3] [i_8] [i_3] [6] [i_3] [i_8])))))))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            var_19 = (max(var_19, 7168));
            arr_34 [i_3] [i_3] = ((-(arr_0 [i_3 - 1])));

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                arr_38 [i_3] [i_9 + 1] [i_9] [i_10] = ((((((arr_8 [i_3] [i_3]) ? 65535 : -81))) >= 268419072));
                var_20 = (arr_9 [i_9 - 1] [i_3 - 2]);
            }
            arr_39 [i_3] [i_3] [i_9] = ((!(arr_26 [6] [i_3 + 1])));
        }
    }
    #pragma endscop
}
