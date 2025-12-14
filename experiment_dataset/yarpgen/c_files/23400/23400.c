/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = ((((~((-1 ? 16604 : var_14)))) | ((var_12 ? 54627 : ((min(var_0, var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((1648307547191068734 ? ((1308753800130526382 - ((var_8 ? 1648307547191068734 : 11922)))) : ((((arr_2 [i_0] [i_0]) - -17)))));
                var_19 = (((~-2048) << (((min(((((arr_2 [i_0] [i_0]) - 45677))), (max(248, 5723150795993925385)))) - 5723150795993925373))));

                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_0] [i_1 + 1]);
                                var_21 = (11103 ^ 52);
                                var_22 = (!var_1);
                                var_23 *= (((((2255 ? 21 : 6))) ? 13625 : ((min(18, 6622)))));
                                var_24 = ((((((((arr_0 [i_2] [i_2]) && 24408)) ? (var_14 && var_8) : ((255 ? -2134887804 : 4))))) || ((!(181 && 0)))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = (max(((~((var_11 ? var_4 : (arr_2 [2] [i_0]))))), (!var_13)));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_16 [6] = ((var_4 ? (arr_14 [i_5 - 1]) : (!25353521)));
        arr_17 [i_5] [i_5 - 1] |= (min(((var_15 ? (((-5399880722006919516 + 9223372036854775807) >> (30641 - 30641))) : 0)), (((((-127 - 1) && var_0))))));
    }
    #pragma endscop
}
