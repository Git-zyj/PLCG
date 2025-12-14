/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((-((-(!var_2)))));
    var_19 = (1165754879497549441 && var_0);

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (!var_3);
        var_21 = var_9;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_22 = (!var_16);
            arr_5 [1] &= var_8;

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_23 = (min(var_23, -23));
                var_24 |= ((!(arr_0 [9])));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_25 = ((((((var_6 ? var_6 : var_5)) + var_0))) ? 812986971 : var_17);
                            var_26 = var_4;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_27 = var_17;
                    var_28 = (min(var_28, (((4294967287 ? (~var_4) : 4133562798903930043)))));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 4; i_8 < 12;i_8 += 1)
                    {
                        var_29 = (!1);
                        var_30 = ((-969036039031473486 ? var_8 : 25883));
                        arr_25 [i_0] = var_2;
                    }
                    var_31 = (max(var_31, -176401711333654375));
                    var_32 = ((var_12 ? (!var_13) : (var_15 - 1289386641960249366)));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_33 = ((((!(((-(arr_7 [i_1] [i_7] [i_9])))))) ? (((!(!var_0)))) : var_14));
                        var_34 = arr_7 [i_0] [11] [i_0 + 1];
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_30 [i_10] [i_0] [i_3] = ((-(arr_9 [i_0] [i_1] [i_0])));
                        var_35 = (~var_6);
                        arr_31 [i_10] [i_7] [i_0] [i_1] [3] = ((1 ? var_0 : (!var_6)));
                    }
                }
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    var_36 = ((!(!var_9)));
                    var_37 = (arr_28 [i_0]);
                    var_38 = ((~((var_6 ? (arr_2 [i_0 + 1]) : var_7))));
                    var_39 -= (((~var_8) ? var_0 : var_10));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    var_40 = 5257;
                    var_41 = arr_32 [i_0] [i_0] [i_0 - 1] [i_12];
                }
            }
            arr_36 [i_0] = ((var_12 <= (var_14 == var_15)));
        }
        for (int i_13 = 4; i_13 < 11;i_13 += 1)
        {
            var_42 = (((var_11 + 2147483647) >> (2990643334944655072 - 2638481103)));
            var_43 = (((arr_12 [i_0] [i_0] [i_0] [11] [i_13] [2]) ? (((arr_4 [i_0]) ? 52 : -113)) : (((var_15 != var_10) << (-var_17 - 804131925)))));
            var_44 &= ((((var_2 ? (var_16 ^ var_0) : var_16)) < -0));
        }

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_45 &= var_9;
            var_46 ^= var_2;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_47 = (!(arr_38 [i_0] [i_0 + 1] [i_0]));
            var_48 = (((var_11 ? var_14 : 41442)));
            var_49 = (arr_26 [8] [i_15] [i_15]);
            var_50 = (i_0 % 2 == zero) ? (((-var_11 << (((arr_9 [i_0 - 2] [i_0] [i_0]) - 95))))) : (((-var_11 << (((((arr_9 [i_0 - 2] [i_0] [i_0]) - 95)) + 45)))));
            arr_46 [i_0] [i_0] = var_4;
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            var_51 = (min(var_51, (~var_13)));
            var_52 = (min(var_52, var_12));
        }
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 11;i_17 += 1) /* same iter space */
    {
        var_53 = var_13;
        var_54 = -6;

        for (int i_18 = 1; i_18 < 9;i_18 += 1)
        {
            var_55 = 1;
            arr_56 [i_18] [i_18] = (~15);

            for (int i_19 = 4; i_19 < 11;i_19 += 1)
            {
                arr_60 [12] [i_18] [i_19] = var_4;
                var_56 = (~84882499);
                var_57 = (!-102);
            }
        }
        var_58 = (min(var_58, (~var_8)));
    }
    for (int i_20 = 1; i_20 < 8;i_20 += 1)
    {

        for (int i_21 = 3; i_21 < 11;i_21 += 1)
        {
            var_59 = ((~((var_7 ? var_11 : var_13))));
            var_60 = (min(var_60, var_8));
            var_61 = (min(var_61, (((!(((var_12 ? var_11 : var_0))))))));
        }
        /* LoopNest 2 */
        for (int i_22 = 3; i_22 < 11;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                {
                    var_62 = (max(var_62, (1 - 566332666257177961)));
                    arr_72 [i_22] = -var_15;
                    var_63 = var_11;
                    var_64 = var_4;
                }
            }
        }
        arr_73 [1] = ((-((((arr_53 [3] [i_20]) ? var_8 : 6)))));
        var_65 = 65535;
        var_66 = (((~308642896) ? ((((arr_52 [i_20] [i_20]) >> (((~9063835458474119772) - 9382908615235431843))))) : (((~var_1) ? 1 : (~var_16)))));
    }
    #pragma endscop
}
