/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((((((2147483392 ? var_15 : var_1))) ? ((min(254502861, var_7))) : var_6))) ? (((((var_11 ? var_9 : 0))) ? ((var_4 ? var_5 : 18446744073709551612)) : var_10)) : var_2));
    var_21 = (max(var_4, (max(-18688, var_4))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (max(2147483618, 2147483648));
        arr_4 [6] [1] &= 110;
        arr_5 [i_0] [i_0] = max((arr_0 [i_0]), ((var_2 ? 10913 : (arr_0 [i_0 + 1]))));
        var_22 = (((arr_2 [i_0]) ? ((min(-22391, -22864))) : 1558595021340852749));
        arr_6 [i_0] = ((min((arr_1 [9] [i_0 + 1]), (min(var_5, var_11)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_23 -= ((arr_10 [i_1]) ? (arr_1 [i_1] [i_1]) : ((var_7 ? 3 : var_15)));
            arr_11 [i_2] = (53723 >> (-9154487138200349778 + 9154487138200349788));
            arr_12 [i_1] [i_2] [i_2] = (((arr_1 [i_1] [i_2]) && (arr_1 [i_1] [i_2])));
            arr_13 [i_2] [1] = var_7;
        }
        var_24 ^= ((!(((-(arr_0 [i_1]))))));
        var_25 -= (max(((((arr_9 [i_1] [i_1] [i_1]) / var_5))), 1));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = ((!(arr_14 [i_3] [i_3])));
        var_26 -= (var_10 < var_6);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_27 = (1 == -27123);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_28 = (max(var_28, (arr_21 [i_4] [i_5] [i_6])));
                    arr_23 [10] [0] [10] [i_5] = 22734;
                }
            }
        }
    }
    #pragma endscop
}
