/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_1] = -28490;

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                arr_7 [i_1] [i_2] = 28490;
                var_14 = -4186577305855417376;
                var_15 = (min(var_15, (~-14797)));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [10] [i_1] [21] [10] = 19;
                        var_16 = 14260166767854134239;
                        arr_16 [i_4] [i_4] [22] [18] [i_4] = (~-42);
                        var_17 = (min(var_17, 1));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 &= -217;
                        var_19 = (min(var_19, 1));
                        var_20 = (max(var_20, -1));
                        arr_19 [i_5] = (!-642633900);
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_22 [i_0] [3] [i_6] [i_0] [0] [i_0] = 1386636123;
                        arr_23 [i_6] [i_6] [1] [i_0] [i_6] = (~8196800321001422567);
                        var_21 = (max(var_21, (~14)));
                    }
                    var_22 &= -118;
                }
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_23 = 14260166767854134239;
                arr_26 [i_7] [8] [17] [i_7] = 8032;

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_29 [11] [i_1] [i_8] [i_0] [i_1] = 1;
                    arr_30 [i_8] = 2797245126;
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_24 = (min(var_24, 4186577305855417376));
            var_25 = -26507;
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_37 [14] [6] |= ((!(!-111797712)));

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                arr_40 [i_0] [i_10] [i_11] = (max((!-26508), -18032207198576271500));
                var_26 |= (max((~15), (~15973091629820942783)));
            }
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    {
                        var_27 = (!1496765294);
                        var_28 = (min(var_28, 1581278237022435460));
                        var_29 = (max(var_29, 1));
                        var_30 = (!170);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        var_31 = 1;
                        var_32 ^= -1;
                    }
                }
            }
        }

        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    {
                        var_33 = (max(9377, 710902508));
                        arr_66 [i_0] [i_17] [2] [i_19 + 1] [i_0] [1] &= (max(1, (~115)));
                        var_34 = (~1);
                        var_35 *= (max((max(1205678082, 10994)), 1));
                    }
                }
            }
            var_36 = (min(var_36, ((min(1755512542297908792, -28490)))));
        }
        for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
        {
            var_37 = (max(var_37, 1));
            var_38 = 1;
            arr_70 [i_0] [i_20] = 6711635738211905354;
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 22;i_21 += 1)
    {
        var_39 ^= 1;
        var_40 -= 7922;
        var_41 = (min(var_41, (!0)));
    }
    var_42 = (!-var_1);
    var_43 = (max(16329985214227907938, (((max(1, 3263655362))))));
    #pragma endscop
}
