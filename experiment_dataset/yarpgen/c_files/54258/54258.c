/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(((((min((arr_0 [i_0]), var_0))) >= (44906 ^ 31))), ((((48 + (arr_4 [i_1] [i_0] [13]))) < 31))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] = (((8388607 || 4294967253) ? 20620 : 38));
                    var_20 = ((max((min(1, 20620)), ((max((arr_5 [i_2] [i_1]), (arr_2 [i_0] [10])))))));
                    var_21 += (min((((arr_3 [i_1]) | (arr_3 [i_1]))), (((!(arr_5 [i_1] [i_2]))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_0] = ((((((arr_1 [i_0 + 1] [i_0 + 1]) || ((((arr_2 [i_3] [i_0]) ? var_11 : 16383)))))) >> (((((arr_1 [i_0 + 1] [i_1]) - (arr_11 [i_3] [i_0] [i_0] [i_0 + 1]))) - 6204))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_22 = 65281;
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((~(arr_3 [i_0 + 1])));
                        arr_18 [i_0] [10] [6] [i_0] = var_17;
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_5] [i_0] [i_0] = var_14;
                    arr_22 [i_0 + 1] [i_0] = (arr_14 [i_0 + 1] [i_0 + 1] [i_1] [i_5]);
                    var_23 -= (min((((arr_5 [i_0 + 1] [i_0 + 1]) % (arr_5 [i_0 + 1] [i_0 + 1]))), (((arr_5 [i_0 + 1] [i_0 + 1]) ? var_11 : (arr_5 [i_0 + 1] [i_0 + 1])))));
                    var_24 += (arr_16 [i_0 + 1] [i_0 + 1] [i_0]);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_25 *= var_10;
                    var_26 *= (arr_3 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            {
                var_27 = (((arr_26 [1]) ? ((var_9 ? var_2 : var_8)) : var_14));
                arr_30 [i_7] [i_7] [21] = (min(14541, ((((arr_26 [i_7]) == (arr_26 [i_8 - 2]))))));
                var_28 &= ((var_11 ? ((((arr_26 [i_7]) ? (((arr_25 [i_7] [i_8 - 2]) & var_4)) : (arr_26 [i_8])))) : (max((min(44915, var_7)), (((~(arr_26 [i_8]))))))));
                var_29 = (min(var_29, ((max(((12542 / (arr_27 [i_8 - 2]))), (arr_27 [i_7]))))));
                var_30 += (min((arr_27 [i_8 - 2]), (((arr_27 [i_8 - 2]) ? (arr_25 [i_8 - 2] [i_8 - 2]) : var_12))));
            }
        }
    }
    var_31 = (min(var_7, var_1));
    #pragma endscop
}
