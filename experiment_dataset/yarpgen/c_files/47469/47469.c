/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_13;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 ^= (~-9022014127016514945);
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = 30309;

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_19 ^= (~35223);
                            var_20 = (~0);
                            var_21 = -536869888;
                            arr_16 [i_0] = (--1071644672);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 = (~30319);
                    var_23 &= (!0);
                    var_24 = 0;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_28 [i_5] [i_0] [i_6] = 1110384710;
                                var_25 += 1728449510;
                                var_26 = -3;
                                var_27 = ((~(~98)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_28 = (-127 - 1);
                        var_29 = 30304;
                        var_30 -= 35239;
                    }
                }
            }
        }

        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_31 -= (-127 - 1);
            var_32 = (max(var_32, 20));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_48 [i_0] [i_0] [i_14] [i_14] [i_15] = (!4138178136215323667);
                            var_33 = (min(var_33, 32375));
                            var_34 = ((((!(-32767 - 1)))));
                            var_35 = (min(var_35, 30301));
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 11;i_18 += 1)
            {
                {

                    for (int i_19 = 1; i_19 < 12;i_19 += 1)
                    {
                        var_36 = -14128391456567571685;
                        var_37 = (~-2305843009213689856);
                    }
                    var_38 ^= ((-(~-47)));
                }
            }
        }
        var_39 = (~20);
        /* LoopNest 3 */
        for (int i_20 = 1; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 13;i_22 += 1)
                {
                    {
                        var_40 = -32376;
                        var_41 = (min(var_41, (!-35239)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 12;i_23 += 1)
    {
        for (int i_24 = 2; i_24 < 10;i_24 += 1)
        {
            {
                var_42 = -46;
                var_43 = 8388608;
            }
        }
    }

    for (int i_25 = 0; i_25 < 12;i_25 += 1)
    {
        var_44 = ((~(!1)));
        var_45 += 1071644664;
    }
    #pragma endscop
}
