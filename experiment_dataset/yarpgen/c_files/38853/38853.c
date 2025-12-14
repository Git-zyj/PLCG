/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_3) ^ ((var_0 ? ((10366783186209599853 ? var_2 : var_8)) : (min(-2100024926, 2147483620))))));
    var_11 -= (max((~0), ((1 ? var_3 : (~2100024926)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_2;
                var_12 ^= (~var_5);
            }
        }
    }
    var_13 ^= var_8;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_11 [i_2] [i_3] [i_3] = (~var_1);
            var_14 = (max(var_14, (((!(var_5 < var_4))))));
            arr_12 [i_2] = var_6;
            var_15 = ((7238961777522379970 ? 149 : -var_1));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_16 = 10;
                        var_17 = var_8;

                        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_2] [i_3] [i_4 + 1] [i_4] [12] [i_5] [7] = -var_0;
                            arr_21 [i_3 - 1] [i_4 + 1] [i_4] = ((-(!var_5)));
                            arr_22 [i_2] [12] [i_4] [i_4] [0] = ((var_6 ? var_8 : var_1));
                            arr_23 [i_4] = 1;
                            arr_24 [i_4] = 1244853725;
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, ((((!var_5) || (~var_5))))));
                            arr_27 [12] [12] [i_4 + 1] [14] [i_5] [i_2] &= 2100024926;
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_19 = (min(var_19, (~var_8)));
            var_20 ^= ((((var_0 ? 1 : var_4))) ? (1081549984 % 46366) : 0);
            var_21 = -var_9;
        }
        arr_31 [i_2] = var_0;
    }
    #pragma endscop
}
