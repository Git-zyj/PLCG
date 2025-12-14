/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = ((((1758109271 ? 6291371178560158087 : 14931322820067290148))) ? (!var_16) : ((var_8 ? ((var_10 ? var_0 : var_11)) : (!12))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_18 = ((-var_1 ? ((var_4 ? var_0 : var_15)) : -var_16));
                            var_19 = -1233311596189894184;
                            arr_15 [i_4] [i_4] [i_2] [i_3 - 1] [i_4] &= var_10;
                        }
                        var_20 = (min(var_20, (((var_12 ? -var_14 : var_3)))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_21 = (max(var_21, var_10));
        arr_18 [i_5] [i_5] = var_12;
        var_22 = ((1 ? -6291371178560158073 : 1233311596189894180));
        var_23 = ((((var_1 ? var_15 : var_0))) ? var_1 : (~var_13));
        var_24 *= ((-var_2 ? (~var_9) : (((var_10 ? ((var_8 ? var_5 : var_0)) : (~var_10))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_32 [i_6] [i_6] [2] [i_9] [8] = var_1;
                                var_25 = (var_9 ? -var_13 : ((~(~var_9))));
                                var_26 = (min(var_26, ((((((var_10 ? var_12 : var_12))) ? (((var_11 ? var_12 : var_3))) : (~var_9))))));
                            }
                        }
                    }
                }
                var_27 = ((var_3 ? var_13 : var_5));
                var_28 = (((~var_7) ? (((var_15 ? var_12 : var_11))) : (~var_7)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            {

                for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
                {
                    arr_41 [i_12] = ((-var_1 ? (!var_2) : ((var_0 ? var_5 : var_10))));
                    var_29 += var_16;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_47 [i_14] [i_14] |= ((~((var_1 ? var_4 : var_4))));
                                arr_48 [11] [i_12] [i_13] [i_13] [i_14] [i_15] [i_13] = var_11;
                                var_30 -= ((~((var_7 ? var_11 : var_6))));
                                var_31 = (((~var_10) ? -0 : (!var_6)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    arr_51 [i_11] [2] [i_16 - 1] [16] |= ((var_10 ? var_15 : var_14));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_32 = (!var_7);
                                var_33 ^= -var_10;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_34 = (max(var_34, (!61838)));
                            var_35 = ((var_11 ? ((var_16 ? var_11 : var_12)) : -var_14));
                            arr_63 [i_12] = var_5;
                            var_36 = (((var_7 ? var_8 : var_2)));
                        }
                    }
                }
            }
        }
    }
    var_37 = (~var_4);
    #pragma endscop
}
