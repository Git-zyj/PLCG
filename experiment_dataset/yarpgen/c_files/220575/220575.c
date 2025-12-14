/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (((((((((112 ? var_6 : 65535))) ? 65534 : 0))) ? 0 : 3455216835)))));
                        arr_9 [i_0] [i_0 - 1] [i_2] [i_1] = (((((-(arr_3 [i_0 - 1] [i_0 - 1])))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : var_14));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_12 [i_0] [i_4] [i_0 - 1] = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_13))) ? (arr_0 [i_0 - 1]) : (~-78)));
                            var_19 = var_14;
                        }
                        arr_13 [i_0] [i_0] [5] = 2046308375;
                    }
                }
            }
        }
        var_20 *= 1018368828303987400;
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5 + 1] = ((3221225472 ? (((((min(124, var_3)))) & (arr_5 [i_5] [7] [i_5]))) : (arr_4 [i_5] [i_5] [i_5] [i_5])));
        var_21 = ((((-(arr_15 [i_5 + 1] [i_5]))) > (min(var_14, ((~(arr_11 [i_5 + 1] [2] [12] [0])))))));
        var_22 = var_14;
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_23 = ((3221225492 ? 1110108037 : 1018368828303987400));
                    arr_26 [i_6] [4] [i_7] [10] = var_14;
                }
            }
        }
        var_24 = ((var_15 ? (arr_15 [i_6 + 1] [i_6]) : (((20 ? (((((arr_15 [i_6 + 1] [i_6 + 1]) && var_5)))) : 3221225460)))));
    }
    #pragma endscop
}
