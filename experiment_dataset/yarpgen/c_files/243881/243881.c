/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = 53975;
                                arr_17 [i_3] [i_3] [5] [i_2] [i_3] [i_3] [i_3] = (~1);
                                arr_18 [i_0] [i_1] [i_1] [i_3] [i_2] = ((var_12 == (arr_1 [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_19 = ((((((((var_6 ? (arr_12 [7] [2] [i_2] [i_5]) : var_3))) || (255 != var_0)))) % 8191));
                                var_20 = (min(var_20, ((((arr_6 [i_1] [i_2] [i_5]) / (arr_5 [i_0] [i_1] [i_1]))))));
                                var_21 = (min(var_21, (((((arr_9 [i_5] [i_1] [0] [i_6]) ^ var_10))))));
                            }
                        }
                    }
                    var_22 ^= (var_6 ? (arr_8 [i_0] [i_0] [i_0]) : (var_13 & 262143));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_33 [i_7 - 3] [14] [i_8] [i_7] [14] [7] = (arr_32 [i_7] [i_10] [i_10] [i_7]);
                            var_23 = ((var_3 ? (arr_29 [i_7] [i_7]) : var_0));
                            var_24 = ((var_9 == ((-(arr_28 [i_7] [i_9 + 1])))));
                        }
                    }
                }
                arr_34 [i_7 - 2] [i_7 - 2] [i_7] = 0;
                var_25 = ((+(((arr_26 [i_7 + 1]) ? (arr_26 [i_7 - 1]) : (arr_26 [i_7 - 2])))));
                var_26 = 1206070252;
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                arr_41 [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 3] [i_7 + 1] = ((((arr_39 [i_13] [3] [3] [i_12 - 1] [i_7] [i_7] [i_13]) ? (((arr_39 [i_7] [i_8] [i_8] [i_11] [i_7] [i_8] [i_13]) * -2015872280)) : (var_16 | var_0))));
                                var_27 = (((((134217727 ? -1567454152 : -1567454152))) <= 641492009));
                                arr_42 [i_7] [i_7] [i_11] [i_7] [i_13] = 1;
                                var_28 = ((2975634983220664706 ? 1567454151 : -1567454151));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 22;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                var_29 = (~var_7);
                                var_30 = (arr_48 [i_16 + 1] [i_17 + 2] [i_18]);
                            }
                        }
                    }
                    var_31 = (((((arr_47 [i_16 + 2] [i_16 - 1] [i_16 + 1]) ? var_10 : (arr_52 [i_16] [i_16 - 1] [i_16 + 2] [i_16 + 1]))) % (arr_47 [i_16 - 2] [i_16 - 2] [i_16 - 1])));
                }
            }
        }
    }
    var_32 = var_17;
    #pragma endscop
}
