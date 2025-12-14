/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1121593642;
        var_19 = 124;
        var_20 ^= (min(98, (arr_1 [i_0])));
    }
    var_21 = (((var_7 ? var_1 : var_7)));
    var_22 = (max(var_22, ((max(((-((12628 ? 44892 : 452746726)))), (~200))))));

    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, 148));
        arr_6 [i_1] |= ((((!(arr_4 [i_1]))) && (arr_5 [i_1 - 1])));
        arr_7 [i_1] = ((-(1 != -10997)));
        arr_8 [i_1] = (((arr_5 [i_1 - 1]) <= ((((arr_5 [i_1]) == -12954)))));
        arr_9 [i_1] = (arr_4 [i_1 - 1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((var_17 ? (arr_4 [i_2 + 1]) : (arr_10 [i_2]))))));
        arr_12 [i_2] |= (((arr_4 [i_2 + 1]) > (arr_4 [i_2 - 1])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_3] [i_3] [i_4] = arr_4 [i_4];
                    var_25 = (max(var_25, (var_13 != 56533)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_26 [i_2] [i_3] [i_4] [i_5] [i_6] = (~(arr_19 [i_5] [i_6 - 1] [i_2 - 1] [i_5]));
                                var_26 = (!41032);
                                arr_27 [i_6] [i_6] [i_2] [i_5] [i_6] = ((var_13 <= (arr_4 [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
