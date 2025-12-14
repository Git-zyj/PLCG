/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_3 ? 0 : var_6)) - (((0 ? 17 : var_5)))))) ? (222 == var_2) : (max((var_2 < 222), var_1))));
    var_12 = (max(var_12, ((max((var_8 >= var_9), 248)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_13 = (222 / var_1);
            var_14 = (~var_0);
            var_15 *= ((!(((var_10 ? var_5 : var_4)))));
            arr_6 [i_1] [i_1 - 2] [i_0] = ((235 ? var_8 : (((-1671313164 ? (arr_4 [i_0] [i_0] [7]) : 240)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] = (((arr_3 [i_0] [i_1 + 2] [i_2]) || 252));
                        arr_14 [i_3] = (((arr_5 [i_3] [i_3]) ? (arr_4 [i_1 + 3] [i_1 - 1] [i_1 + 2]) : (var_5 - var_0)));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] = ((var_5 ? (!var_8) : var_5));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_16 += (((arr_16 [i_4 + 1] [i_4 + 1] [9]) ? ((-(arr_8 [1] [1] [0]))) : (var_5 * var_2)));
                            var_17 = (var_2 ? var_1 : 32);
                            arr_26 [i_0] [i_5] [i_6] [i_7] = ((!(((7888931286926309158 ? 19 : (arr_20 [i_6] [i_0] [i_6] [i_5]))))));
                            arr_27 [i_0] [i_0] [6] [i_6] [8] = (((arr_20 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4 - 3]) ? (arr_19 [i_4 - 2] [i_4] [i_4] [2]) : 222));
                        }
                    }
                }
            }
            arr_28 [i_0] = (65532 | var_8);
            arr_29 [10] = (((arr_22 [i_4] [i_4] [i_0] [i_4] [i_0]) ? var_4 : (~var_4)));
        }
        for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_32 [i_0] = ((var_3 | (var_0 < 0)));
            arr_33 [i_0] [i_8] = var_10;
            arr_34 [i_8] = (((var_7 || 243) || (!var_9)));
            var_18 = (10148 - -8853203801156722509);
        }
        var_19 = var_7;
    }
    var_20 = var_3;
    #pragma endscop
}
