/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(!var_12)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((1 ? 1 : -2650646532892325286)))));
                    arr_8 [i_0] [i_2] [i_2] [2] = (var_7 | -var_8);
                }
            }
        }
        var_21 = ((var_8 << ((((var_9 ? var_17 : var_0)) - 1422306952))));
        arr_9 [i_0] = (~var_7);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_24 [i_6] [i_4] [i_4] [i_6] [i_4] [i_4] = var_6;
                        var_22 = ((var_7 ? var_3 : var_4));
                        var_23 ^= (((var_6 && var_4) ? ((var_8 ? var_12 : var_2)) : (!var_11)));
                        var_24 ^= ((var_7 ? -var_5 : (var_15 > var_1)));
                    }
                }
            }
        }
        var_25 = (var_13 && var_14);
        arr_25 [11] = ((var_7 ? var_7 : var_5));
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_26 ^= ((((((((var_14 ? var_18 : var_8))) ? var_17 : ((var_2 ? var_3 : var_11))))) ? (((!var_11) ? var_4 : (!var_18))) : -var_10));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_27 = (((!var_11) | (var_17 > var_2)));
                        var_28 -= var_14;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 4; i_11 < 12;i_11 += 1)
        {
            var_29 = (~var_10);

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_43 [i_11] = var_11;
                    var_30 -= (var_15 ? var_11 : var_5);
                    var_31 = ((var_5 ? var_13 : (var_2 > var_2)));
                    var_32 = (((!var_16) >= (!2195991407)));
                    var_33 = (max(var_33, (((var_2 ? 1 : -2147483631)))));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_34 = (min(var_34, ((var_11 ? (!var_0) : var_17))));
                        arr_50 [i_11] [i_15] = ((~(var_2 % var_14)));
                        var_35 |= ((var_14 ? var_16 : var_0));
                        arr_51 [i_7] [i_7] [i_11] [i_7] [i_7] [i_7] [i_7] = (var_16 ? var_0 : var_1);
                        var_36 -= (!var_2);
                    }
                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        var_37 = ((-(!var_16)));
                        var_38 = ((var_0 ? (!var_2) : (var_2 % var_8)));
                    }
                    for (int i_17 = 1; i_17 < 12;i_17 += 1)
                    {
                        var_39 = (((!var_16) ? ((var_10 ? var_6 : var_6)) : -var_11));
                        arr_57 [i_7] [i_11] [i_12] [i_17] = (var_6 != var_0);
                        arr_58 [i_7] [i_11 - 1] [i_12] [i_17] [i_17] [i_11] [i_11 - 2] = ((!(var_1 != var_16)));
                    }
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        var_40 = ((!(!var_4)));
                        var_41 = var_15;
                    }

                    for (int i_19 = 3; i_19 < 12;i_19 += 1)
                    {
                        arr_66 [i_7] [i_11 + 2] [i_12] [i_11 + 2] [i_11 + 2] [i_11] [i_7] = ((var_8 ? var_8 : (!var_14)));
                        var_42 = ((var_8 << (var_1 + 65879579)));
                        var_43 = (!var_0);
                    }
                    for (int i_20 = 1; i_20 < 11;i_20 += 1)
                    {
                        var_44 = (max(var_44, var_2));
                        var_45 -= ((!(!var_10)));
                        var_46 = (!var_4);
                        var_47 = (-var_13 + var_17);
                        var_48 = ((~(var_6 >= var_5)));
                    }
                }
                arr_69 [i_7] [i_7] [i_7] [i_11] = ((!(!var_6)));

                for (int i_21 = 1; i_21 < 13;i_21 += 1)
                {
                    var_49 ^= -var_13;

                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        var_50 = ((var_13 && (!var_17)));
                        var_51 = (max(var_51, (!var_3)));
                    }
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        var_52 = ((var_7 ? ((var_17 ? var_6 : var_4)) : var_1));
                        var_53 -= ((-(!var_0)));
                        var_54 = ((((var_4 ? var_18 : var_0)) != var_7));
                    }
                }
            }
            for (int i_24 = 0; i_24 < 14;i_24 += 1)
            {
                var_55 = (!-17);
                var_56 = ((var_8 != (((var_14 ? var_11 : var_2)))));
                var_57 ^= (var_8 > var_8);
                var_58 = -var_0;
            }
            var_59 = (min(var_59, (var_5 > var_11)));

            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {
                var_60 = (((!var_7) ? (!var_0) : (var_4 && var_7)));
                var_61 = var_18;
            }
        }
        var_62 = (max(var_62, ((((var_0 && var_18) ? (var_10 | var_2) : (var_6 != var_11))))));
        arr_84 [i_7] = (var_1 ? ((-(!var_13))) : ((min(255, 49))));
        var_63 = (((((min(var_8, var_15)) | (var_14 % var_12))) >= (!6)));
    }
    var_64 = (max(var_8, ((max(var_1, var_13)))));
    #pragma endscop
}
