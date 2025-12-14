/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 |= (min((-7569706380573955061 > -71), var_17));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_20 -= (10679 / 64016);
        var_21 = (min(var_21, (((var_15 ? (var_4 > -1) : ((-1482657993380202032 ? var_10 : var_12)))))));
        var_22 = (min(var_22, ((var_11 ? ((140720308486144 ? 2 : -13)) : var_16))));
        var_23 = (min(var_23, (((25 ? -5 : -115)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (((((var_8 ? 1 : var_2))) ? -0 : var_14));
        var_24 &= (~1);
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_25 = ((((((!(((-390738303919510905 ? 0 : 1))))))) > ((13 ? (!1) : 18446744073709551602))));
        var_26 = (1 ? -8938318228318148744 : ((((-2147483647 - 1) ? 3425502249 : var_13))));
        var_27 = ((min(var_9, 5514402479952798526)));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_28 = (max(var_28, (~var_13)));
                        var_29 += -32760;

                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            var_30 = (min(var_30, (((-5943316979217769195 ? (-2147483647 - 1) : -5943316979217769179)))));
                            var_31 = ((~(!117)));
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_32 = (max(var_32, var_3));
                            var_33 = (min(var_33, 2098539684));
                        }
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            var_34 = (max(var_34, (((-((max(var_0, var_14))))))));
                            var_35 = ((((((var_3 / 12313984968792136688) % 32763))) ? ((min(2196427612, var_2))) : var_12));
                        }
                        var_36 = ((1 - 679487136) < (1 != var_15));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    arr_33 [i_2] [i_10] [i_10] = (min(32760, 3615480174));

                    for (int i_11 = 4; i_11 < 9;i_11 += 1)
                    {
                        var_37 = ((1 ? ((-1 ? 255463408 : 2147483647)) : ((((-2147483647 - 1) + 1235618979)))));
                        var_38 = (max(6847008830984554029, 12313984968792136675));

                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            arr_40 [i_2] [i_10] = (min(2118703197, var_5));
                            arr_41 [i_10] [i_9] [i_10] [8] [i_12 - 1] [0] [i_9] = ((var_17 ? ((1 ? 1 : 2147483647)) : 1152921504606846976));
                            var_39 += ((-47 ? (!2145663107) : 22220));
                            var_40 = ((((!(2074225185 ^ 0))) ? var_2 : (!1)));
                        }
                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 10;i_13 += 1) /* same iter space */
                        {
                            var_41 = (!2147483632);
                            var_42 &= -var_8;
                            var_43 = (min(var_43, var_6));
                        }
                        /* vectorizable */
                        for (int i_14 = 4; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            var_44 = (13920623799361430330 && 4526120274348121303);
                            var_45 = (min(var_45, (((((var_0 ? 6132759104917414956 : 1)) <= (((-32749 ? (-2147483647 - 1) : 679487117))))))));
                        }
                        var_46 = (~6132759104917414940);
                    }
                    var_47 = (((~var_13) ? ((min(var_8, -32747))) : ((min(1, (var_11 <= var_7))))));
                }
            }
        }
    }
    #pragma endscop
}
