/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((-(arr_2 [i_0])));
        var_14 |= 0;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] [i_1] &= arr_0 [i_1];
        arr_10 [i_1] [i_1] = var_6;
        var_15 = (min(var_15, ((max(0, 1)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_16 = (((((0 ? (arr_14 [i_2]) : (arr_7 [i_2] [i_3])))) ? (((!(arr_14 [i_2])))) : -0));
                var_17 = (((-((var_4 ? 1 : var_3)))));
                var_18 *= (((((~(var_10 > var_5)))) == ((var_4 ? var_8 : (arr_11 [i_2] [i_2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] [i_7] = (~var_11);
                            var_19 = var_8;
                            arr_28 [i_4] [i_4] [i_4] [3] [i_7] [i_4] = ((!(arr_23 [i_7 - 1] [i_7 - 1] [0] [i_7 - 1])));
                            arr_29 [i_7] [i_6] [i_5] [i_7] = (((var_5 * (arr_25 [i_4] [i_5] [i_7] [i_7] [i_7 - 1]))));
                            arr_30 [i_5] [i_7] = ((arr_24 [i_4] [i_7] [1] [7] [i_6] [8]) * var_11);
                        }
                    }
                }
                arr_31 [4] [i_5] = (max((min((arr_19 [i_5]), (arr_19 [i_5]))), (min((arr_19 [i_4]), var_12))));
            }
        }
    }
    var_20 = (min(var_20, var_4));
    #pragma endscop
}
