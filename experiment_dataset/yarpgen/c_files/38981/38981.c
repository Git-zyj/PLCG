/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1284 ? 2620723678 : 1674243618));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (!var_12);
        var_22 -= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_23 = (min(var_23, 1284));
        var_24 = (max(((max((arr_3 [i_1 + 2]), (arr_3 [i_1 + 2])))), 6435250741782602728));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_25 = -84;
            var_26 = (min(var_26, ((min(28590, ((var_2 ? var_1 : 10756500657094071138)))))));
            arr_8 [i_1] = 269987956;
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_27 = (min(var_27, 1));
                        var_28 = 12347770237346923124;
                        arr_18 [i_3] [i_4] [i_3] [i_3] = (arr_4 [i_1 + 1] [i_1 + 2]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1]) % (-269987952 + 8103560908367838202)))));
                            arr_26 [i_3] [i_3] = ((var_8 ? var_8 : (~var_1)));
                            var_30 -= (269987956 || 829655654);
                            var_31 = var_11;
                        }
                    }
                }
            }
            var_32 = (!-var_13);
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_33 = (max(-var_5, ((-1765 - (-127 - 1)))));
            var_34 = ((var_14 ? (((((-1353958879 ? 96 : -120))) ? 0 : ((min(0, var_5))))) : ((0 ? -2147483645 : (1 || 5870655927931926742)))));
        }
        /* vectorizable */
        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            var_35 += ((var_15 % (arr_28 [i_1 + 2] [i_10 - 4] [i_10 - 1])));
            var_36 = ((var_0 ? var_13 : 1));
            var_37 += var_18;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_34 [i_1] = (((((-1133916165471908153 ? 11350675250293741060 : var_12)) ^ var_0)));
            var_38 = (min((arr_13 [i_1] [i_1 - 1] [i_11] [i_11]), var_8));
        }

        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
        {
            var_39 = (!(arr_31 [2]));
            arr_38 [i_1] |= var_16;

            /* vectorizable */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                var_40 = (((-8820314695536988572 && 1) ? ((var_15 ? -4278640480850805637 : var_14)) : (arr_24 [i_12] [i_12] [i_1 - 1] [i_1 + 2] [i_1 - 1])));
                var_41 -= 0;
                var_42 = (max(var_42, 2946778348815446531));
            }
            var_43 -= (max((min(((var_11 ? var_10 : (arr_11 [i_1] [i_1] [i_12] [i_12]))), var_5)), -84));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            arr_46 [i_14] = 269987985;
            var_44 = (((max(18446744073709551615, 1927305636)) & (25766 ^ var_11)));
        }
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        arr_49 [i_15] = (max((((var_19 || ((min(-4278640480850805637, -84)))))), (((arr_47 [i_15]) % 939524096))));
        var_45 -= (max(((0 ? var_2 : (min(1200564529424262766, var_19)))), (min(3355443201, 7479251741747088840))));
        arr_50 [i_15] [i_15] = ((8 >= var_1) ? ((min(var_13, var_16))) : (-2147483647 - 1));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                {
                    var_46 = var_5;
                    var_47 = (~(((((-2147483647 - 1) ? 2147467264 : var_4)) >> (var_14 - 44))));
                    var_48 += ((~((var_6 & (arr_48 [i_17])))));

                    for (int i_18 = 4; i_18 < 23;i_18 += 1)
                    {
                        var_49 = (max((((arr_57 [i_16] [i_15] [i_18 - 3] [i_18 - 1] [i_18 + 1]) + var_1)), (!2828710596)));
                        arr_59 [i_15] [i_15] [i_17] = 1;
                        var_50 = (((((((min(-41, 29726))) ? 14 : (arr_54 [i_15] [i_15] [i_15] [i_15])))) && ((var_5 >= (min(1546744731, var_8))))));
                    }
                    for (int i_19 = 3; i_19 < 23;i_19 += 1)
                    {
                        arr_63 [i_15] [i_15] [i_15] [i_15] = ((-((min(-74, var_6)))));
                        var_51 += ((((min((arr_53 [i_15] [i_16] [i_17]), var_19))) ? ((min((arr_54 [i_19 - 3] [i_19 - 2] [i_19 - 2] [i_19 + 1]), 190))) : var_15));
                    }
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        arr_68 [i_20] = -var_16;
        var_52 = (~var_14);
    }
    #pragma endscop
}
