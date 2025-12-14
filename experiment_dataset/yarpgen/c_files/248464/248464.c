/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((var_7 ? var_15 : var_12)));
    var_17 += var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (~((((var_10 ? var_12 : var_6)))));
            arr_8 [i_0] |= (((~var_15) >= ((var_3 ? (var_8 < var_0) : var_10))));
        }
        var_18 = var_13;
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_19 += ((((((((-2147483647 - 1) ? -2147483647 : 1))) ? (!var_11) : ((var_2 ? var_3 : var_14)))) >= (((((((var_11 ? var_4 : var_11))) != var_0))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_16 [i_2] = ((var_14 ? (((((~var_0) && var_3)))) : (var_4 / var_14)));
            var_20 = (max(var_20, (((((((var_5 != var_5) ? (var_14 & var_10) : (~var_14)))) ? (((((~var_8) && var_9)))) : (((!var_4) ? (((var_12 >> (var_5 - 58961)))) : ((var_7 ? var_8 : var_1)))))))));
            var_21 |= var_6;
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_19 [i_4] = ((!((((((var_8 ? var_13 : var_7))) ? var_0 : (var_6 + var_10))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_22 = (6053277378769730395 ? var_0 : -2147483621);

                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        var_23 ^= (((-((var_5 ? var_3 : var_12)))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_34 [i_4 - 1] [i_5] [i_6] [i_7 - 1] [i_7 + 3] [i_8] = (~((20059 >> (-6887779169909808930 + 6887779169909808959))));
                            arr_35 [12] [i_8] [i_6] [i_8] = (((var_15 ? -var_5 : ((var_14 ? var_1 : var_12)))));
                        }
                        var_24 = ((((!(((var_7 ? var_10 : var_15)))))));
                    }
                }
            }
        }
    }
    var_25 = var_4;
    var_26 = var_15;
    #pragma endscop
}
