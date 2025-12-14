/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 31;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_15 = var_3;
                    var_16 = 96;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_17 = 4611686018427387903;
                    arr_10 [i_0] [i_3] [i_0 - 1] = ((var_11 ? 2147483647 : -1077));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_18 = (((((var_12 ? var_1 : var_12))) ? 1781613137 : ((-1 ? 35184372088831 : 7))));
                            var_19 = (((((786686157 ? -1 : 15))) ? 2007266314 : 2147483647));
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_20 = var_1;
                            var_21 = ((8442424234921656097 ? var_4 : (((55907 ? 55912 : 22174)))));
                            var_22 ^= ((96 ? 8 : -12574));
                            arr_18 [i_0 + 1] [i_3] [i_3] [i_3] [i_4] [i_4] [i_6] = var_9;
                            var_23 = ((-1 ? 61485763 : 1073741820));
                        }
                        var_24 = var_0;
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        arr_22 [i_7 - 1] [i_3] [i_3] [i_0 - 1] = -8;
                        var_25 = var_8;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_26 |= ((3 ? 2305843009213693888 : (((var_6 ? var_0 : var_3)))));
                        var_27 = 92;
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_3] = 1048575;
                        arr_30 [i_3] [i_3] [i_1] [i_3] = 8114858864697771762;

                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_28 ^= 17592186044415;
                            var_29 = 164;
                        }
                        for (int i_11 = 3; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_30 = ((var_6 ? 6710639904559196495 : (((-21317 ? 511 : 333365940)))));
                            var_31 ^= 3961601360;
                        }
                        for (int i_12 = 3; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            var_32 = (var_5 ? 2147483648 : ((3749 ? 5150934311710604091 : var_3)));
                            arr_38 [i_0] [i_3] [i_3] = 8114858864697771762;
                            var_33 = 333365964;
                        }
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_42 [i_3] = 65535;
                        var_34 = 524047185580382315;

                        for (int i_14 = 3; i_14 < 17;i_14 += 1)
                        {
                            arr_46 [i_0] [i_3] [i_3] [i_3] [i_14] = ((5764 ? 2511674370 : 8114858864697771759));
                            arr_47 [i_1] [i_3] [i_3] = -5058530455730308286;
                            var_35 *= 28210;
                            var_36 = 2146959360;
                        }
                        for (int i_15 = 2; i_15 < 17;i_15 += 1)
                        {
                            arr_50 [i_0] [5] [i_3] [i_15] = var_0;
                            var_37 = 11782;
                            var_38 = ((-1 ? -2146959361 : -8509234435640666910));
                            var_39 |= var_1;
                            var_40 = ((-1798099204 ? ((var_1 ? 1 : -25040)) : ((27538 ? 30093 : 2015338881))));
                        }
                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            var_41 = var_8;
                            var_42 ^= 65535;
                            arr_54 [14] [i_1] [i_1] [i_3] [i_3] [i_13] [i_16 + 1] = 20260;
                        }
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        arr_57 [i_3] [i_3] = 255;
                        var_43 = 3596416967317503262;
                    }
                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        var_44 += (((((var_4 ? 21261 : -20728))) ? ((2161727821137838080 ? var_12 : var_6)) : var_13));
                        var_45 *= ((var_4 ? ((4095 ? 65535 : var_2)) : 23006));
                        arr_62 [i_3] [i_1] [i_1] [i_18] [i_18] = -405128829;
                    }
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_46 = ((var_12 ? 15 : 1023));
                    var_47 = (min(var_47, 2305843009213693951));
                }
                var_48 += 7;
                var_49 = 5150934311710604091;
            }
        }
    }
    var_50 ^= 65535;
    var_51 = -1;
    #pragma endscop
}
