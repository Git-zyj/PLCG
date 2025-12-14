/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (max((min(645433974173990235, var_11), 645433974173990244)));
                    var_16 = (1 > -1016194534252841356);
                }
            }
        }

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_17 = (max(var_17, 44424));
                            var_18 = (min(((((!var_8) ? (arr_13 [i_0] [i_3] [i_4] [i_4]) : (~var_7)))), (max(18204, -4753244248831175549))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_19 ^= ((242 ? (((~(~var_3)))) : (min((arr_20 [i_0] [i_8] [i_0 + 1] [i_0] [i_8] [i_4] [i_7]), ((((arr_3 [i_0]) ? (arr_10 [i_8]) : var_12)))))));
                            arr_27 [i_0] [i_0] = ((-((min(25092, 5203)))));
                            var_20 &= (max(((min((~0), (~var_4)))), (((var_3 ^ var_9) ? ((645433974173990235 ? var_9 : (arr_25 [i_3] [i_3] [i_8] [i_8] [i_3]))) : -7345460891967229728))));
                            var_21 = (min(var_21, var_5));
                        }
                    }
                }
                var_22 = (min(var_22, (((~(arr_16 [i_4] [i_4] [i_4] [i_4]))))));

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_23 -= ((((~var_1) ^ var_4)));
                    arr_32 [i_0] [i_9] [i_4] [i_9] [i_3] [i_0] = ((~((((max(var_9, var_6))) ? (((arr_17 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] [i_9]) ? var_12 : var_12)) : var_6))));
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    var_24 = var_0;
                    var_25 -= (((14053192639157533806 ? 250 : -806580088757589485)));
                }
            }
            var_26 += 242;
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 11;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                {
                    var_27 = ((-((var_4 ? 14754646544655472254 : var_11))));
                    var_28 = 14754646544655472240;
                    var_29 ^= 3685638666514929929;
                    arr_43 [i_11] [i_13] = (var_3 - var_0);
                    arr_44 [i_12] |= ((var_1 ? (var_10 / var_12) : var_9));
                }
            }
        }
        arr_45 [i_11] [i_11] = 1016194534252841362;
        var_30 *= (((((arr_10 [i_11]) + 2147483647)) << (((arr_18 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1]) - 44009))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 11;i_15 += 1)
            {
                {
                    arr_54 [i_11] [i_11] [i_11] &= ((var_8 ? (~var_6) : var_2));
                    var_31 ^= ((3164018560 ? ((var_9 ? (arr_9 [i_15] [i_14]) : var_7)) : var_0));
                    var_32 -= 37000;
                }
            }
        }
    }
    var_33 = (((((0 ? var_8 : var_5))) ? 1381928008654248383 : 7));
    var_34 = var_7;
    var_35 = var_9;
    #pragma endscop
}
