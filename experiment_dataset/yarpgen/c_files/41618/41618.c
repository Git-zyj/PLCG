/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = 15716;
            arr_6 [i_0] [i_1] [i_1] = (min(var_12, 44693));
        }
        var_17 = (max(0, 908835619));
        var_18 = (max(44693, 6923));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = var_13;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_20 ^= (var_6 / -17148);
                            var_21 = (((arr_7 [i_2] [i_2] [i_3]) ? (arr_7 [i_0] [i_2] [i_5]) : 77));
                            var_22 = var_6;
                            var_23 = var_16;
                            arr_19 [i_0] [i_2] [i_3] [0] [i_4] [i_5] = (((-77 ? 37750 : -22923)));
                        }

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_24 = -61;
                            var_25 = ((!((min((max(1099511627775, (arr_9 [i_0] [i_2] [i_6]))), 20858)))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_26 += ((((max(12, ((-1 ? 1 : var_13))))) ? (((-(arr_13 [i_7] [i_2] [i_2])))) : ((44693 ? 16383 : -81))));
                            arr_24 [i_0] [i_2] [i_3] [1] [i_7] [15] = (((var_11 + 2147483647) << (17107314878094697183 - 58079)));
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_27 = ((((((var_14 ? (arr_12 [i_8 + 2] [i_8 + 3] [i_8] [i_8]) : 27793)) + 2147483647)) << (((max((arr_26 [i_8 + 3] [i_8 - 1] [1]), ((-81 ? -1968003602 : 0)))) - 61870))));
                            var_28 ^= 13;
                            arr_36 [i_0] [i_0] [i_8] [i_8] [i_9] [i_10] [i_11] = 418030845;
                            var_29 = 2138;
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_30 = (418030831 << (var_7 - 1071421502));
                            var_31 = (max(var_31, ((((((arr_26 [i_0] [i_8 - 1] [6]) << 2)) << (61 - 60))))));
                            var_32 |= (min((max(-19, (max(17107314878094697196, -81)))), (((max(0, 62))))));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_45 [i_0] [i_10] = (arr_40 [i_10] [i_10] [i_10]);
                            var_33 = 16402;
                            var_34 = -31;
                            arr_46 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = 63;
                        }
                        arr_47 [i_0] = ((-32743 + ((+(((-16384 + 9223372036854775807) << 0))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_35 = 2;
                        var_36 = (min(var_36, ((((arr_34 [i_15] [i_8] [i_8] [i_14] [i_8] [i_8] [i_8]) << (((arr_38 [i_15] [i_14] [15] [i_8] [i_0]) - 200)))))));
                    }
                }
            }
        }
    }
    var_37 = 9;
    #pragma endscop
}
