/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = min(((max((max(var_4, (arr_2 [i_0]))), (min(32767, 186))))), (max(((min(1, 1491842449))), (max(var_16, (arr_1 [i_0 + 1]))))));
        var_17 = (max(2803124845, 16391));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_2] [5] [i_4] = 8322104548427282146;
                        var_18 = (max(var_18, 19693));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_19 = (min(var_19, 2803124847));
            var_20 = (min(var_20, -3935658653991614008));
            var_21 = (max(var_21, 1));
            arr_17 [13] [i_5] = 1;
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_22 = (max(var_22, 169));
            var_23 = (min(var_23, 1));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_24 = (max(var_24, 1491842450));
            var_25 = (min(var_25, 3051623656));
            arr_24 [i_1] [i_1] [i_1] = -1;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_26 = (min(var_26, 63));
                        var_27 ^= 44849;
                        var_28 = 57;
                    }
                }
            }
            arr_33 [i_1] [i_8] = -9792;
        }
    }
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_29 -= -129053061;

            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_30 = (max(var_30, -9800));
                            var_31 -= 54408;
                            var_32 = (min(var_32, 4294967295));
                        }
                    }
                }
                var_33 = (min(var_33, -129053056));
                var_34 = (min(var_34, 31775));
                arr_48 [i_11] [i_11] &= 1;
            }
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    arr_53 [7] [7] |= -14614;
                    var_35 = 17216;
                }
                for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
                {
                    var_36 -= 583499544144174121;
                    var_37 = (max(var_37, 60));
                    var_38 |= 65535;
                    arr_56 [i_18] [i_16] [i_18] [i_18] [i_11 - 1] [i_11 - 1] = 40909;
                }
                for (int i_19 = 1; i_19 < 16;i_19 += 1) /* same iter space */
                {
                    var_39 -= 6018119900860904312;
                    var_40 = 196;
                    arr_59 [i_11 - 1] [i_12] [i_16] [2] [i_16] |= 583499544144174147;
                    arr_60 [1] [1] [i_12] [i_16] [i_12] &= 187;
                }
                for (int i_20 = 1; i_20 < 16;i_20 += 1) /* same iter space */
                {
                    var_41 += 187;
                    arr_63 [i_11] [i_11] [i_20] [i_20] = 63855;
                }
                arr_64 [i_11] [i_11] [i_11 - 1] = 3642607977;
                var_42 *= -4819628518188001219;
            }
        }
        for (int i_21 = 0; i_21 < 18;i_21 += 1) /* same iter space */
        {
            arr_67 [i_21] [i_21] = (min(6018119900860904312, 4175));
            var_43 -= (max((max(((max(1150921580, (arr_58 [i_11 - 1] [i_21] [i_21] [i_11 - 1] [i_21] [i_21])))), (min((arr_62 [i_11] [i_11] [i_11] [i_11 - 1] [i_11]), (arr_50 [i_11] [i_11] [i_11]))))), ((min(220, 32767)))));
            var_44 |= (max((max((max(68, -5563103352695457581)), (max(var_4, 2450972789994053809)))), (min((max(144115188075855872, (arr_55 [4] [i_21] [i_11] [12] [i_21] [8]))), (min(var_15, (arr_38 [i_11] [i_11])))))));
        }
        arr_68 [i_11] [i_11 - 1] = min((max((min(-8987352915825032466, 9223372036854775801)), 7)), ((min(1, 255))));
        arr_69 [i_11 - 1] = (max((min((max(-6018119900860904306, -4169)), ((max(65534, 1111263626))))), (min(((min(var_14, (arr_23 [1] [1] [i_11])))), (min(var_16, var_0))))));
    }
    for (int i_22 = 2; i_22 < 19;i_22 += 1)
    {
        var_45 = (max(var_45, ((min((max((min((arr_16 [2] [2] [2]), -2545054321205449594)), ((min(var_11, var_9))))), (min((min(9223372036854775801, 4169)), (min(var_10, var_5)))))))));
        var_46 = (max(583499544144174133, (max((max(-9223372036854775802, 0)), (min(-9223372036854775802, 232))))));
    }
    var_47 |= (min(((min((min(var_1, var_4)), ((min(1, 58)))))), (max((min(var_12, var_11)), (max(var_10, var_4))))));
    var_48 = (max((min(-4169, (min(16490, -8254083144825380019)))), (max((min(var_14, var_8)), ((max(-1, -4176)))))));
    #pragma endscop
}
