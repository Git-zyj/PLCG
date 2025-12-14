/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((var_4 != var_6), (var_2 && var_5)));
        var_10 = (min(var_10, (-8191 > 0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_13 [i_0] = (max((var_9 | var_5), 67108863));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_3] = ((63 + (var_3 & var_2)));
                        arr_18 [i_3] [i_0] [i_0] = (min((var_0 - var_9), (((var_7 ^ var_4) ? (((var_5 ? var_9 : var_6))) : var_2))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_11 ^= (((max(var_5, var_3))) ? (((var_8 >> (var_1 + 68)))) : (!var_2));
                        arr_23 [i_1] [i_0] [11] [i_1] [i_1] = (((((var_9 ? var_4 : var_6)))) >> ((min((!var_2), var_7))));
                        var_12 = (min(var_12, var_1));
                        var_13 = (((((var_7 ? (min(var_9, var_9)) : (min(4272538463, 11))))) ? (min(4294967291, 2032)) : ((var_8 * (!22428832)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_2] [i_0] [i_5] = (((var_4 && var_3) || (var_0 || var_1)));
                            var_14 = (max(var_14, var_3));
                            arr_29 [i_0 + 1] [i_1] [i_0] [i_0] [i_6 - 2] = var_2;
                        }

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_15 = ((var_4 / var_5) != ((var_3 ? var_2 : var_0)));
                            var_16 = var_3;
                            arr_33 [i_0] [i_0] [i_2] [14] &= ((!(var_1 != var_3)));
                            arr_34 [i_0 - 1] [i_0] = var_9;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_37 [i_0 - 2] [i_1] [i_8] [i_2] [18] [i_8] &= (var_1 / var_8);
                            arr_38 [i_8] [i_0] [i_0] [i_0] [i_0] = var_3;
                            var_17 |= (~(var_9 != var_8));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_42 [5] [7] [i_0] [7] = (var_8 || var_2);
                            var_18 = ((((var_6 ? var_0 : var_9)) ^ (var_6 ^ var_5)));
                            arr_43 [i_0] [2] [i_2] [i_1] [i_0] [i_0] = (((~var_8) / (var_5 - var_8)));
                            var_19 = (min(var_19, ((((var_9 ? var_8 : var_0))))));
                            var_20 = ((var_2 ? (var_8 * var_5) : ((-2018 ? 823320841733887581 : -17869))));
                        }
                        var_21 *= ((~(var_5 & var_2)));
                        var_22 = var_7;
                    }
                    arr_44 [12] [i_0] [12] = (((var_1 + var_5) % (((var_8 + var_9) - ((var_6 ? var_9 : var_3))))));
                    var_23 = var_5;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_47 [14] &= var_1;
        arr_48 [i_10] [7] = var_2;
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_24 = (min(var_24, var_7));
        var_25 = (max(var_25, (!var_3)));
    }
    var_26 = var_7;
    #pragma endscop
}
