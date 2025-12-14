/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = (255 | -119);

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = ((((((242 ? -80 : ((127 ? 255 : (-127 - 1))))) + 2147483647)) << (1 - 1)));
            var_19 = ((((max(((153 ? (-127 - 1) : -121)), 1))) ? (var_2 <= var_1) : (((var_17 && var_9) ? (var_8 <= var_10) : ((var_14 ? var_17 : var_2))))));
        }
        var_20 = ((((max(var_0, (min(var_15, var_11))))) ? (~var_11) : (~var_4)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = ((((((((var_17 ? var_5 : var_5))) | var_18))) ? ((max((max(var_8, var_12)), ((min(var_3, var_2)))))) : ((var_16 ? ((var_18 ? var_12 : var_17)) : var_8))));
        var_21 = ((-var_14 << (((min(var_9, (var_0 | var_3))) + 41))));
        var_22 = (((((var_3 ? var_17 : var_13))) ? ((var_2 << (var_14 - 208))) : ((var_9 ? var_7 : var_7))));
        var_23 = ((((max(111, (var_15 & var_13)))) | (min(((min(var_16, var_1))), var_12))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_24 = (((var_3 && var_15) && var_18));
            var_25 += (var_6 | var_15);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_26 = (((-var_5 + 2147483647) << (var_2 - 42)));
                        var_27 ^= var_7;
                        var_28 = ((1 ? 0 : 1));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_29 |= (((((116 ? 120 : var_14))) ? var_0 : ((var_0 ? var_12 : var_14))));
            var_30 = var_11;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_31 = (var_14 && var_1);
            var_32 = (!var_9);
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_33 = ((var_6 ? var_7 : ((var_7 << (var_18 - 1871380097687064917)))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_34 = (var_4 & var_5);

                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_35 *= var_1;
                            var_36 = (max(var_36, (var_7 & var_9)));
                        }
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            var_37 = (var_3 && var_11);
                            var_38 = ((var_1 ? var_1 : var_6));
                            var_39 = var_7;
                        }
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            var_40 -= var_3;
                            var_41 = var_1;
                            arr_41 [i_9] [i_9] = (((((var_15 ? var_7 : var_13))) ? var_2 : ((var_7 ? var_18 : var_6))));
                        }
                    }
                }
            }
            var_42 = ((((2037 && (-127 - 1))) ? ((var_5 ? var_6 : var_15)) : (var_4 & var_13)));
            var_43 = (((var_14 << (var_14 - 219))));
            arr_42 [i_9] [i_3 - 2] [i_9] = (var_13 <= -var_16);
        }

        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_44 = ((var_17 ? var_17 : var_6));
            var_45 = ((var_15 && var_11) & ((var_17 ? var_15 : var_18)));
        }
        for (int i_16 = 4; i_16 < 12;i_16 += 1)
        {
            var_46 = var_12;
            var_47 = (((var_14 ? var_16 : var_18)));
            var_48 = ((((var_16 ? var_1 : var_12)) <= var_11));
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {
            {

                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    var_49 -= ((~((((max(var_4, var_6))) ? ((var_2 ? var_14 : var_1)) : (var_15 <= var_14)))));

                    for (int i_20 = 1; i_20 < 16;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            var_50 = ((((var_11 && var_1) <= ((max(var_17, var_14))))) && var_11);
                            var_51 = (min((max(var_12, var_7)), ((min(0, -65)))));
                            arr_64 [i_17] [i_17] [15] [5] = ((~var_2) ? (var_4 & var_11) : (min((var_0 * var_0), ((var_14 ? var_4 : var_9)))));
                        }
                        for (int i_22 = 1; i_22 < 15;i_22 += 1)
                        {
                            arr_68 [i_17] [i_20] [i_19] [1] |= (!(var_0 & var_2));
                            var_52 = (~(var_12 & var_15));
                            arr_69 [i_17] [i_18 + 1] = (((((min(var_13, 15)))) ? var_4 : (((((var_3 ? var_12 : var_11))) ? 1 : ((max(var_16, var_0)))))));
                        }
                        var_53 = max((262144 | var_1), (((!var_16) | var_18)));
                    }
                    arr_70 [i_17] [i_17] [i_19] [i_19] = (((max(var_4, var_9)) <= (((max((max(var_7, var_0)), (min(var_7, var_7))))))));
                    arr_71 [i_17] [i_17] [i_18] [i_17] = (((-var_11 | var_13) ? var_5 : ((var_10 & ((var_6 ? var_4 : var_5))))));
                    var_54 = ((((((((var_18 ? var_9 : var_12))) && ((max(var_4, var_3)))))) <= var_2));
                }
                var_55 |= ((var_13 << ((min((min(var_11, var_9)), (var_18 <= var_17))))));
            }
        }
    }
    #pragma endscop
}
