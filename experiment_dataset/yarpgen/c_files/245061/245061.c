/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = (~65535);
        var_17 = (((((((!(arr_0 [i_0] [i_0]))) ? var_5 : (((1 ? var_15 : var_10)))))) && ((((var_6 ? (arr_0 [i_0] [i_0]) : 65535)) > (arr_2 [i_0 - 2])))));
        var_18 = -1;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_19 = ((arr_5 [i_0 - 2]) ? (arr_4 [i_1]) : 4206690197);
            var_20 = (((((2 * (arr_7 [i_0] [i_1])))) ? (arr_7 [i_0] [i_1]) : (((!(arr_3 [4]))))));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] = (((((-(max((arr_0 [i_0 + 1] [i_0 - 2]), 4095))))) ? ((var_3 ? (((var_15 ? (arr_10 [i_2]) : 213))) : ((7 ? var_5 : var_9)))) : ((((~65535) & var_2)))));
            var_21 = ((-65507 ? var_7 : ((~(~-1)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] [4] [i_4] [i_4] = -var_13;
                        var_22 = (~1);
                    }
                }
            }
            var_23 = max((-1 / 2), -61441);
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_24 = (arr_16 [13] [i_0] [i_0] [i_0] [i_5 + 3] [i_5]);

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_25 -= (~5711913780400305076);
                var_26 = var_7;
            }
            var_27 = (min(var_27, (((((((((var_15 ? (arr_4 [2]) : var_8))) ? -3 : ((140737488355327 + (arr_5 [i_0 + 1])))))) ? var_0 : (max((arr_16 [i_0 + 1] [i_5] [5] [9] [i_5] [i_5 - 1]), -16)))))));
        }
        var_28 = ((((((arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1]) ? ((var_0 ? (arr_18 [i_0 + 1]) : var_1)) : (arr_10 [6])))) / (~8776941054408588949)));
    }
    var_29 = var_2;
    var_30 = ((var_11 ? -var_11 : var_15));
    var_31 |= ((!(4088 & -1)));
    #pragma endscop
}
