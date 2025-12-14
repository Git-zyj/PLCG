/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (((((22151 ? ((max(-44, 4294967295))) : 40))) ? var_10 : (((var_7 <= (var_12 * var_17))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        var_20 = 22135;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_1] = (var_1 <= -var_9);
            arr_10 [i_2] = var_16;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_1] = var_2;
            var_21 = (var_9 && var_10);
            var_22 = var_17;

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                var_23 = (max(var_23, ((var_15 > ((22151 ? var_3 : var_0))))));
                var_24 = (~var_17);
            }
            arr_16 [i_1] [i_3] = (var_9 ? var_1 : var_6);
        }
        var_25 -= ((var_0 ? var_5 : var_2));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_26 = ((~((var_6 ? (max(var_3, var_17)) : var_12))));
                            var_27 = 22159;
                            arr_31 [i_5] [i_8] [i_7] [i_8] [i_9] = var_5;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_8] [i_8] = ((((min(var_10, var_10))) ? (min((((-22159 ? 22145 : -22147))), (max(-7961755402953082219, -22159)))) : (((((max(127, var_13))) ? ((var_7 ? var_3 : var_1)) : (((var_4 >> (var_10 + 821834137)))))))));
                            arr_36 [i_10] [i_5] [i_8] [i_7] [i_6] [i_5] [i_5] = var_2;
                        }
                        var_28 = ((~((((var_5 ? var_7 : var_2))))));
                        var_29 = (max((var_15 & var_9), (((max(var_7, var_7)) << (var_12 - 31067)))));
                        var_30 *= (max(22151, -22159));
                    }
                }
            }
        }
        arr_37 [i_5] = -var_8;
        arr_38 [i_5] = ((8661162028718057316 ? var_2 : -var_5));
        arr_39 [i_5 + 2] = min((max((max(0, 7597354050325997659)), 2365574125)), (((-22149 ? -22159 : -97))));
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_31 = (~var_13);
        var_32 = var_1;
        arr_42 [i_11] = ((var_5 ? var_8 : var_3));
    }
    #pragma endscop
}
