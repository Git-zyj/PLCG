/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = ((var_0 ? ((3076153711 ? (~var_6) : ((((arr_4 [i_2] [i_2] [i_2]) ? (arr_4 [i_0] [i_0] [i_0]) : var_7))))) : (((max((arr_6 [i_1] [i_2]), (arr_6 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] = var_8;
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_4] = (max(((((arr_10 [i_2] [i_2] [i_4] [i_2] [i_2]) ? (arr_10 [i_4] [i_3] [i_4] [i_1] [i_0]) : (arr_10 [i_0] [i_0] [i_4] [i_3] [i_4])))), ((var_11 ? var_16 : 40314))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    var_18 = ((~(arr_5 [i_6] [i_6 - 2] [i_6 - 2])));
                    var_19 = (min((((1659083310909667385 | var_4) ^ (min((arr_3 [i_0]), 25218)))), ((~(max((arr_3 [i_0]), (arr_2 [i_5])))))));
                }
            }
        }
    }
    var_20 = (max(var_20, (~-10)));

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_21 = 25221;
        arr_24 [i_7] = ((~((((arr_21 [i_7] [i_7]) >= (arr_23 [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_22 = ((max((arr_27 [i_7] [i_8] [i_9]), ((221 ? 25218 : 1675526639)))) | var_4);
                    var_23 = (min(var_23, var_0));
                    var_24 = (((arr_23 [i_7]) && (((min((arr_21 [i_7] [i_9]), var_16))))));
                }
            }
        }
        var_25 = var_12;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_33 [i_10] = var_2;
        arr_34 [i_10] [i_10] = (((((~(var_6 - -18)))) ? (min(var_14, (arr_28 [i_10] [i_10] [i_10]))) : var_12));
        arr_35 [i_10] = (max(3992934968, 125));
    }
    #pragma endscop
}
