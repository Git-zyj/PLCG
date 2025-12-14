/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((((max(3829498774, -19860))) ? (arr_2 [i_1]) : ((143 ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : (arr_7 [i_0 + 1] [i_0] [i_0] [9])))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 ^= (19859 + 112);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((max(74625043, (~74625052)))), (max(-6177406779652645902, 1562150907698462133))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_18 = (max((arr_3 [i_0 + 1] [i_1 + 3] [3]), (arr_2 [i_1 - 2])));
                        arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [5] [i_0 - 1] = var_13;
                        arr_15 [i_0] [i_4] &= (arr_7 [i_0] [i_0] [i_2 - 3] [i_4]);
                        var_19 += (min(-2147483634, ((~(3829498763 + var_0)))));
                        arr_16 [i_4] [i_4] [i_2 + 1] [8] &= (arr_11 [i_0] [i_4] [i_1 + 3] [i_1 + 2]);
                    }
                }
            }
        }
    }
    var_20 = 3354652909645850161;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_21 = ((-12136 ? (3829498751 ^ 92) : 50));
                    arr_25 [i_5] [i_6] = (min(((var_7 ^ ((((arr_22 [i_5] [i_7]) ? 3829498761 : 1))))), (13 % -2517835352515109962)));
                    var_22 = (min(0, (min(4220342268, 42))));
                    arr_26 [i_5] [18] [i_6] [i_6] = ((946442999 % 465468521) ? (min(var_0, (min((arr_20 [i_5] [i_6] [i_7]), 1)))) : (((((87 ? 112 : 3724080546))))));
                }
            }
        }
    }
    var_23 = (max(((~(max(var_13, -1562150907698462119)))), (((!(((2294145449034158814 ? var_5 : -1562150907698462134))))))));
    #pragma endscop
}
