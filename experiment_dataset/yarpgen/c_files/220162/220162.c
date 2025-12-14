/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((~var_4), -var_1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_2] [i_1] = -7295279484489293900;
                        arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((7 ? -90 : var_2));
                        var_20 = ((11 ? var_6 : var_4));
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((max(3916782662, ((max(var_0, -31639))))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_15 [i_2] [1] [i_2] [i_4] [i_4] = var_14;
                            var_22 += (~var_12);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_23 = (max(var_23, ((max((max(((8965669793666029839 ? 0 : var_4)), (max(var_15, 7998)))), ((((~var_17) >= ((255 ? -4914358989665770187 : var_8))))))))));
                            var_24 = max(var_13, ((-32 * (max(var_14, 31)))));
                            var_25 = (min((~var_4), (min(-8726786290663310712, 4294967285))));
                        }
                        var_26 = (max(((0 ? -8726786290663310712 : var_9)), 3322808845));
                    }
                    arr_20 [i_2] [i_2] [i_2] [i_0] = ((-(var_17 < var_18)));
                    var_27 = (var_17 != var_9);
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_28 -= ((-((7998 ? 8726786290663310711 : var_12))));
            var_29 -= var_17;
        }

        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            var_30 -= ((((!(31632 && var_12))) ? (!31632) : ((((!var_17) && (((-8965669793666029813 ? 9972 : (-32767 - 1)))))))));
            arr_27 [i_0] [i_0] [i_8] = (802694213713336603 ? -802694213713336598 : -7);
            arr_28 [i_0] = ((var_15 ? (((var_1 > (min(999276381987665269, var_17))))) : ((((((12816784224734275017 >> (-7423 + 7466)))) || -7126334662734326488)))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            var_31 = 802694213713336603;
            arr_31 [i_0] = ((-((var_16 ? var_0 : var_9))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            arr_34 [i_10] [i_10] [i_10] = 4453605802208598074;
            arr_35 [i_10] [i_10] = var_0;
            var_32 -= ((11 ? var_7 : var_8));

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((15864 != (~var_15))))));
                            arr_45 [i_10] [i_11] [i_10] = var_7;
                            var_34 -= (~var_9);
                            var_35 = (((86 ? var_8 : -7717140628169945426)));
                            var_36 = ((var_4 ? var_2 : var_10));
                        }
                    }
                }
                arr_46 [12] [i_10] [i_10] [i_11] = -18410715276690587648;
            }
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 19;i_16 += 1)
                {
                    {
                        arr_55 [i_15] [i_15 + 1] [i_15 - 1] [12] [i_15 + 1] [1] = 79351697;
                        var_37 = (max(var_37, (~var_16)));
                    }
                }
            }
            var_38 = -var_5;
            var_39 = (9724 ? var_10 : (((~-21) - ((var_1 ? var_18 : var_10)))));
        }
        var_40 = (min(var_40, (((-var_9 ? 4294967295 : (((-1 ? -9 : var_11))))))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 9;i_19 += 1)
            {
                {
                    arr_66 [i_18] [i_18] [9] [i_18] = (var_0 || var_6);
                    arr_67 [i_18] = 630;
                }
            }
        }
        var_41 = 9730;
    }
    #pragma endscop
}
