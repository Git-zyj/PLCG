/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = (~(min((arr_0 [i_0 + 2]), (((arr_1 [i_0 + 1] [i_0]) | 6)))));
        arr_6 [i_0] = ((((((arr_2 [i_0 + 3]) >= (min((arr_2 [i_0]), -13))))) > (((((arr_1 [i_0] [i_0]) | (arr_0 [13]))) >> (var_4 + 418154848)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            {
                arr_11 [i_1] = (max(((~(arr_7 [i_2] [i_2 + 1]))), (!var_4)));

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_16 [i_1] [i_1] [i_3] [i_1] = (1 - 6);
                    var_15 = (((((32 ? 3 : -1735501891))) & (((-8262219851005559893 + 9223372036854775807) << (1735501890 - 1735501890)))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_16 = (min(var_16, ((max(1, (min((((arr_9 [i_4]) & -8262219851005559893)), (arr_10 [i_2 + 1] [i_2 + 1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] [i_2] [i_4] = var_4;
                                var_17 = (min(((min(-2147483641, 76))), (min(-8453650311161442048, 273470362877687371))));
                            }
                        }
                    }
                    var_18 = (arr_7 [i_1] [i_1]);
                    var_19 += -5512416240263095668;
                    arr_25 [i_1] [1] = (min(2088098502, 8262219851005559893));
                }
                var_20 = (max(var_20, (arr_20 [i_1] [i_2])));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_21 = (max((arr_29 [i_1] [i_7] [i_2 - 1] [i_1]), ((((arr_18 [i_2 - 1] [i_7 - 1] [i_2 - 1]) || 13425050699873989452)))));
                            var_22 = 6898618042115560939;
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] = var_13;
                            arr_32 [i_1] [i_1] = (min((arr_21 [9] [i_7] [i_2 + 1] [i_1]), ((((!1735501887) > (arr_23 [i_1] [i_1] [i_2 - 1] [i_1] [i_1]))))));
                            arr_33 [i_1] [i_2] [i_2] [i_2] [i_2] = (max(((2493560198736739790 >> (((max(7609969341630244858, var_12)) - 7609969341630244847)))), -109));
                        }
                    }
                }
            }
        }
    }
    var_23 |= (((var_4 + 2147483647) >> (((min(-109, (var_2 && var_14))) + 116))));
    #pragma endscop
}
