/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (~17864);
                                var_12 = 14958;
                            }
                        }
                    }
                }
                arr_12 [i_0 + 1] [i_1] = (((((-(arr_10 [i_0 + 1])))) ? 5354327521530169366 : (~14957)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_20 [i_5] [10] [i_5] = 1951675402;

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_13 = 12629;
                        var_14 = (max(var_14, (((~((~((-(arr_21 [i_5] [i_6] [4] [i_5]))))))))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_15 = (min(var_15, -11677));
                            var_16 = ((0 % ((1129509424 ? (0 || -14945) : 5354327521530169377))));
                            var_17 ^= var_6;
                        }
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            var_18 = (arr_25 [23] [23] [1] [i_8] [i_10]);
                            arr_30 [i_5] [i_6] [18] [i_8] [i_5] [i_10] = ((1 * ((((max(var_9, 38))) / 16383))));
                            arr_31 [i_5] [i_6] = ((-((-(~56)))));
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_36 [19] [i_6 - 1] [17] [i_7] [i_8] [i_5] [17] = var_3;
                            arr_37 [i_11] [6] [1] [i_6 + 1] [6] [i_5] &= ((14948 << (var_0 - 1306163100)));
                            var_19 = (-14941 | 74);
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_20 += (max(4294967295, -5354327521530169367));
                            var_21 = var_2;
                            var_22 = var_9;
                            var_23 = (var_10 | var_2);
                        }
                        var_24 = (-var_1 >= (((var_6 ? (((arr_16 [9] [8]) ? var_6 : var_5)) : 1))));
                        var_25 = (max(var_25, (max(-200, ((4121960083 ? var_1 : var_2))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        var_26 = (var_3 | -var_10);
                        var_27 = ((((var_7 ? var_0 : var_1)) - (var_8 && var_3)));
                        arr_42 [i_5] [i_5] = (!var_4);
                    }
                }
                arr_43 [i_5] [i_5] = (!1061453351);
                arr_44 [i_5] [i_6 + 1] [4] = (min(((217 ? 0 : 4844488766957936725), ((min(1, -7219))))));
                var_28 = (max(var_28, var_6));
            }
        }
    }
    #pragma endscop
}
