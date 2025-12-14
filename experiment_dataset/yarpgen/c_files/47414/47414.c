/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = ((1744646119 ? ((min((max(8, var_6)), var_7))) : var_9));
                var_12 = 9512941371504205800;

                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_9 [3] [i_3] [i_0] [i_0] [i_1] [i_0] = var_0;
                        arr_10 [i_0] [7] [i_2] [21] = (min(605859511011786590, -605859511011786590));
                    }
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        var_13 |= 605859511011786590;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_15 [i_0] [i_0] [19] [i_0] [i_0] [i_0] = var_4;
                            arr_16 [i_0] [i_1] [i_4 + 2] [i_4 + 2] [i_0] = (((var_6 ? -605859511011786590 : var_2)));
                            arr_17 [i_5] [8] |= (((!var_3) ? var_3 : -57));
                            var_14 = -1554889957;
                            var_15 = (min(var_15, var_10));
                        }
                        var_16 = (max(var_16, (((-(max(44909, 605859511011786590)))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_17 = (max(var_17, (((max((max(605859511011786590, 0)), (-2147483647 - 1)))))));
                        arr_21 [i_0] [i_0] = ((~((((min(-84, -521765495))) ? 241 : (44908 | var_0)))));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_24 [i_7] [i_7] [i_2] [i_7] |= ((!((min(((605859511011786606 ? var_2 : -591020528)), (~-14761))))));
                        arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] [2] = ((!((max(var_9, (max(0, var_1)))))));
                        arr_26 [i_0] [i_0] [i_1] [i_1] [i_0] [i_7] = var_1;
                        var_18 *= (max(-1, (((((-1467183602 ? var_7 : var_4))) ? (!var_10) : -var_6))));
                    }
                    arr_27 [20] |= (max(((min(-1467183602, var_9))), -134217728));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = (((((((max(var_0, var_5))) ? ((var_10 ? var_6 : 43243)) : var_7))) ? ((-var_0 ? -var_5 : (~44909))) : ((min(0, var_5)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_8] [i_0] [i_0] [i_0] = 0;

                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        arr_36 [i_0] [i_0] [24] [i_0] = -var_10;
                        arr_37 [i_0] [i_0] [i_0] [i_1] [i_8] [i_0] = (~-var_9);
                        arr_38 [i_0] [i_8] [8] [i_9 + 1] [i_9] [19] = (24008 ? 44880 : (((6 ? 48 : var_4))));
                    }

                    for (int i_10 = 2; i_10 < 24;i_10 += 1)
                    {
                        arr_42 [i_0] [i_10] [i_8] [i_0] = ((250 ? 9 : 247));
                        var_19 = (max(var_19, 0));
                        var_20 = (max(var_20, var_6));
                        arr_43 [i_1] [i_0] = (-(~5));
                        var_21 = var_8;
                    }
                    var_22 = var_8;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_23 *= (((242 ? 14760 : 576320014815068160)));
                                var_24 = (max(var_24, -28294));
                                var_25 = (max(var_25, 99));
                                arr_48 [i_0] = (-1 >= -605859511011786590);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                arr_56 [4] [i_1] [16] [i_1] [i_13] |= 246;
                                arr_57 [i_0] [i_15] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((-14760 ? (-32767 - 1) : (!6)));
                            }
                        }
                    }
                    var_26 = (max(var_26, (((2251799813668864 ? (!1023) : (!var_1))))));
                }
            }
        }
    }
    var_27 |= (((max(605859511011786590, (-32767 - 1))) + (((((~24292) > var_8))))));
    var_28 = ((min(((max(62, (-32767 - 1)))), (~56687))));
    var_29 = (min(((min(32754, -235))), ((-((34 ? var_3 : 703710055))))));

    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        arr_60 [i_16] = var_1;
        arr_61 [i_16] = ((-2251799813668864 ? (((!(!0)))) : ((((max(-1327619264, var_10)) != (!var_4))))));
        arr_62 [i_16] = (max(-17, var_6));
    }
    #pragma endscop
}
