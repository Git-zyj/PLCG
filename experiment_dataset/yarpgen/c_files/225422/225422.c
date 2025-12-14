/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_17 = var_12;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (((~var_14) ? ((var_5 ? (!65) : 13807531974919244976)) : var_6));
                        var_19 |= ((9 ? var_7 : var_3));
                        var_20 = (((var_6 ? (1 <= var_13) : ((13575 ? 0 : 16665)))));
                        var_21 |= ((var_16 ? (187 / var_12) : -19468));
                        var_22 = (max(var_22, (((((var_13 ? var_15 : var_14)) <= (((26 ? var_6 : var_2))))))));
                    }
                }
            }
            var_23 *= (35 == (((((var_8 ? var_14 : 128))) ? (((var_4 ? var_3 : var_15))) : var_12)));
            var_24 = (255 ? var_1 : ((-var_5 * ((var_6 ? var_1 : 0)))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        var_25 = ((var_1 ? var_10 : (var_3 - var_12)));
                        var_26 = (max(var_26, ((((!65525) ? ((var_8 ? ((var_5 ? var_6 : var_4)) : var_14)) : var_5)))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_27 = 1;
                var_28 = ((var_13 ? 176161947 : ((((13802 ? 0 : var_12))))));
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_24 [i_0] [i_4] [i_0] [i_0] [6] = 11927;
                            arr_25 [i_0] [i_0] [1] [7] [i_0] [i_0] = (((((var_6 >> ((var_0 ? 0 : var_2))))) ? var_15 : -14747));
                            var_29 |= ((var_13 ? (((232 ? -15 : -var_2))) : ((var_7 ? (((58720256 ? var_6 : var_9))) : 1))));
                            var_30 = (max(var_30, ((((var_12 ? var_12 : 76))))));
                            var_31 = (max(var_31, 4294967295));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            arr_28 [i_0] = -var_4;
            arr_29 [0] [13] = var_4;
            var_32 = var_10;
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_37 [i_0] [i_0] [i_13] [9] [9] = ((var_0 ? var_9 : ((var_16 ? var_15 : var_7))));
                        var_33 += 0;
                    }
                }
            }
            var_34 = ((var_9 ? ((((var_12 ? var_16 : var_13)))) : 0));
        }

        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_40 [i_0] [i_15] = ((4092 ? 2392680956 : 201));
            var_35 |= ((~((-1727 ? var_0 : 1))));
            var_36 = ((-(((580257501725069915 || var_9) ? var_3 : var_1))));
        }
        arr_41 [i_0] [4] = var_12;
    }
    var_37 = var_13;

    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        var_38 += var_15;
        arr_45 [i_16] = ((10805487513316757857 | (~1)));
        var_39 += 2251443643187791855;
        var_40 = (var_16 + var_2);
        arr_46 [i_16] = (~var_3);
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {
        var_41 = ((-100 - ((var_0 ? var_6 : ((65535 ? var_2 : var_8))))));
        arr_51 [i_17] [i_17] = (!19449);
        var_42 = (((var_1 ? (var_10 & 0) : 32313)));
    }
    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
    {
        var_43 = var_13;
        arr_54 [i_18] = ((!(52606 && var_6)));
    }
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        var_44 = ((-2454378639 ? 4087800922 : var_12));
        var_45 = (min(var_45, (((((((var_13 ? var_14 : var_0)))) || ((((var_9 ? 0 : 18446744073709551595)))))))));
        arr_58 [10] [i_19] = (~var_3);
        arr_59 [i_19] = var_9;
        var_46 = (((((var_0 ? 0 : var_5))) && (103 && var_9)));
    }
    var_47 = 25697;
    var_48 = ((~(7704 ^ 46806)));
    #pragma endscop
}
