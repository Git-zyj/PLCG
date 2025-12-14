/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = (((max(var_9, (498390622 && 137438953471))) << (min((var_5 || var_4), (~-498390622)))));
        var_12 |= -var_5;
        arr_3 [1] = (((var_2 ? var_8 : var_0)));
        var_13 = (~var_5);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_2 [i_1] [i_1]);
        var_15 = var_4;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((-((99 >> (-7027082055366870265 + 7027082055366870272)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 ^= (128 < -105);

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (((-((var_0 ? var_0 : 137438953471)))))));
                            var_18 = (var_1 && 2);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_19 = ((5848 ? var_5 : var_6));
                            var_20 = ((!(arr_12 [i_7 + 2] [i_3])));
                            var_21 &= -var_5;
                            arr_26 [i_2] [i_3] [i_3] = (var_5 ? var_6 : 0);
                        }
                        var_22 = -9;
                    }
                }
            }
        }
        arr_27 [i_2] = ((var_7 ? ((((max(var_9, var_4))))) : (min(var_2, var_1))));
        var_23 = var_2;
    }
    var_24 = ((!((max(-var_9, var_1)))));
    #pragma endscop
}
