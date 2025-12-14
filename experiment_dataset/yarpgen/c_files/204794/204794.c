/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((-(max((18446744073709551615 * var_11), (18446744073709551597 != 30680)))));
        var_20 = var_19;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (min((arr_2 [i_0 - 3]), 1));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0 - 1]);
                }
            }
        }
        arr_10 [i_0] [i_0] = ((1488634710 ? ((((4221230435 & (arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))) ^ (~-17616))) : -1234180135));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_22 = ((((arr_11 [i_4]) ? 8614063108278344849 : var_6)));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_6] = (var_17 / var_18);
                        var_23 = (((min((var_17 || var_3), (((arr_18 [i_6] [i_5] [i_4] [0]) ? 1 : 12328291177416555560)))) > (((((var_1 ? var_4 : var_4)))))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_24 = (((max((min(18446744073709551612, (arr_19 [i_7] [i_3] [i_3]))), 16139)) - ((((arr_17 [i_3] [i_5] [i_3]) ? 1 : (arr_5 [i_7]))))));
                        var_25 = (min((((-(var_2 < var_18)))), (1 + 1488634687)));
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        var_26 = ((1488634708 ? ((var_17 ? (arr_18 [i_3] [i_4] [i_4] [i_8 + 1]) : var_13)) : (arr_18 [i_5] [i_5] [i_5] [i_8 + 1])));
                        arr_29 [i_3] [i_4] [i_3] [i_8] [i_8] = ((((~2474859447) ? ((((arr_1 [i_8]) && 12328291177416555539))) : var_6)));
                        arr_30 [i_8] = ((max((((var_0 != (arr_6 [i_8])))), (min(var_3, var_5)))));
                    }
                    var_27 = ((((((1 ? var_3 : (arr_19 [i_3] [i_3] [i_5]))))) ? (((var_12 * 90479955) ? (arr_23 [i_5] [i_5] [i_4] [i_4] [14] [i_3]) : ((var_7 ? -1109390998 : var_18)))) : ((((((!(arr_21 [i_3] [i_3] [i_3] [i_3])))) - (arr_26 [i_3] [i_3] [i_3] [7]))))));
                    var_28 = max(var_4, ((var_12 ? (((arr_11 [i_3]) ? (arr_28 [i_5] [i_4] [i_3] [i_3] [i_3] [i_3]) : 316089881)) : (max(var_1, 405859264)))));
                    var_29 = (arr_13 [i_3] [1] [i_5]);
                }
                var_30 = ((((arr_11 [i_3]) <= 3144221867)));
            }
        }
    }
    var_31 = 4197549338;
    #pragma endscop
}
