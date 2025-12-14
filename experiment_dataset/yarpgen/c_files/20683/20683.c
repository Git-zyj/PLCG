/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((max(var_13, var_10)) ? (((-127 - 1) ? (arr_1 [i_0]) : var_11)) : var_9)))))));
        arr_2 [i_0] = ((23 ? 25 : 224));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_19 = ((35 ? 12 : (63 > 27)));
        var_20 ^= ((((!(arr_5 [i_1]))) || (1 < 15)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 = (~1);

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_22 = (min(var_22, (((((212 ? -76 : 137)) <= (arr_7 [i_3]))))));
            arr_10 [i_2] [i_2] [i_3] = ((var_4 ? (arr_4 [i_2]) : ((13800 ? 23 : 2451735953205500023))));
            var_23 = ((~(arr_3 [i_3])));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_15 [i_4] [i_4] [16] = var_1;
            arr_16 [i_4] = 1;
        }
    }
    var_24 = -var_10;
    var_25 = ((var_4 ? ((max(var_9, var_12))) : 3556));
    var_26 |= (min(((((var_6 ? 1 : var_2)))), ((-((var_12 ? var_13 : var_11))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_27 = (((61302 & 2059106246) ? (arr_7 [i_7 + 1]) : (arr_0 [i_7 - 1] [i_7 - 1])));
                    var_28 = (max(var_28, (((~(((!(((var_6 ? (arr_21 [i_6] [i_7]) : var_1)))))))))));
                    var_29 = (((((!(arr_22 [i_6])))) << (((((arr_22 [i_7 - 1]) ? (arr_25 [16] [i_6] [16]) : var_8)) - 25430))));
                }
            }
        }
    }
    #pragma endscop
}
