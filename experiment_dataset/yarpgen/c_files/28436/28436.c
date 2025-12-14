/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((!6490453367255019297), var_5));

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 *= (max((var_5 <= 1828111830), (min(6490453367255019298, (-6490453367255019271 ^ var_0)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_14 = (!6490453367255019314);
                            var_15 = var_11;
                            var_16 = (min((max((min(var_4, -20)), var_4)), var_2));
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_17 = ((~(min((min(-20, var_4)), -6490453367255019302))));
                            var_18 |= (max((max(var_11, (max(-929, -6490453367255019297)))), ((~(min(6490453367255019297, var_11))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_19 = (min(var_19, ((max(var_3, (+-120))))));
                            var_20 = (max(var_20, (((min(((max(0, -6490453367255019302))), var_5))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_21 = ((!(((min(var_2, 4174988389272554527))))));
                            var_22 = (max(var_22, (((var_0 <= (var_7 == -4235))))));
                            var_23 = ((12529118413004720833 <= (min((min(114, var_4)), var_3))));
                            var_24 *= var_2;
                        }
                        var_25 = (((~15) << 0));
                        var_26 ^= (-20 * 57);
                        var_27 -= (min(((max((var_9 || 1), -8485582125284466371))), (((min(var_1, var_4)) + var_0))));
                        var_28 = ((var_8 == ((min((var_7 + var_11), (31862 || var_8))))));
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_0] [i_8] = -38111;
                        var_29 = (min(var_29, ((max((((!9232) | (max(-4174988389272554547, 1)))), -var_5)))));
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_30 ^= (min((min(var_3, 6490453367255019302)), ((max(1, var_9)))));
                        var_31 = 9235;
                        arr_24 [i_0] [i_0] [i_0] [i_9] = var_0;
                        var_32 += ((((var_0 | 710826175) >= var_1)));
                    }
                    var_33 *= (!3140);
                    var_34 += ((min(64322, -3289)));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_35 = (min(var_35, ((max(-9235, (max(0, (~0))))))));
                        var_36 &= 120;
                        var_37 = ((max(1, (var_7 | 10))));
                        arr_28 [i_0] [i_0] [i_10] [i_0] [12] = (((var_8 >= var_2) >= (((var_6 / var_10) - 101))));
                    }
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        var_38 *= ((var_8 >> (min(20, -var_0))));
                        var_39 = (max(((((min(65531, var_9))) | (42479 <= var_10))), 6490453367255019298));
                    }
                    arr_33 [i_0] [i_0] [i_2] [i_2] = ((-var_0 && (~1876644047)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_40 |= ((-(!0)));
                            var_41 = (var_2 & var_9);
                            var_42 = var_4;
                        }
                    }
                }
            }

            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                arr_50 [i_12] [i_12] [i_17] = (!var_7);
                arr_51 [i_12] [i_12] = 255;
                var_43 = var_8;
                var_44 *= var_1;
            }
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                var_45 = 2147483645;
                var_46 = (min(var_46, 237));
            }
            var_47 *= 12246245673484280005;
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_48 = ((!(var_7 >= var_4)));
            var_49 -= var_5;
            var_50 = var_8;
        }
        var_51 = (-9223372036854775807 - 1);
    }
    for (int i_20 = 3; i_20 < 12;i_20 += 1) /* same iter space */
    {
        var_52 = (~19);
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    {

                        for (int i_24 = 0; i_24 < 14;i_24 += 1)
                        {
                            var_53 *= (var_5 ^ -var_3);
                            var_54 = ((((max((~var_10), ((max(var_9, 127)))))) ^ (((19 & -9226) & (1691719093 % 9223372036854775807)))));
                            var_55 = (min(var_55, (((max(var_1, (-9223372036854775807 - 1)))))));
                            var_56 = (min((-2147483647 - 1), -1));
                        }
                        var_57 = ((((max(var_0, 15529))) || var_3));
                    }
                }
            }
        }
        var_58 += max((var_6 < var_2), 65521);
        var_59 = ((!(1 / var_5)));
    }
    for (int i_25 = 3; i_25 < 12;i_25 += 1) /* same iter space */
    {
        arr_74 [i_25] [i_25] = var_9;
        var_60 = (min((max(1691719075, var_4)), (((max(var_11, 20))))));
        var_61 += ((-2147483630 & (var_5 & -9204)));
        var_62 = (min((-var_8 + var_10), (var_2 | 0)));
        arr_75 [i_25] [5] = (max((((((min(-63, 45311)))) | var_8)), ((min(var_8, ((max(var_1, 1))))))));
    }
    var_63 = var_5;
    #pragma endscop
}
