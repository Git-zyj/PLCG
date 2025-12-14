/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (4 + var_8);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, 26703));
                    var_15 = var_5;

                    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (((((arr_2 [10] [10]) - (arr_2 [i_0] [18])))))));
                        var_17 = (max(var_17, (arr_2 [i_2] [0])));
                        var_18 = (min(-26687, (arr_1 [i_1] [i_0])));
                        var_19 ^= (((((252 ? (max(var_6, var_9)) : 65524))) ? (var_2 & 0) : (((((100 ? 4138548288 : (arr_4 [15]))) != (arr_1 [i_3 - 1] [1]))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((((max((var_5 % var_4), var_6))) && (((var_8 ? (min((arr_9 [i_0] [19] [i_1] [i_2] [i_3]), var_4)) : (max(-44, var_4)))))));
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_13 [23] [i_0] [i_1] [23] [i_4] [i_4] = 26687;
                        arr_14 [i_0] = ((((((1 && ((min(7443331011935077374, 40))))))) % (((var_7 ? var_0 : (arr_3 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_5 + 2] = (arr_11 [i_5] [i_5] [i_2] [11] [i_0]);
                        arr_18 [i_0] [i_1] [i_0] [i_5] = var_8;
                        var_20 *= ((var_8 ? (((arr_6 [2] [1] [i_0]) ? var_9 : (arr_6 [i_0] [14] [i_2]))) : 0));
                    }
                    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_21 = (arr_9 [i_0] [i_2] [i_2] [i_6 + 1] [i_6 + 1]);
                        var_22 = ((var_0 && var_5) && (((-26421 ? (!var_0) : (!67)))));
                        var_23 = ((((((arr_7 [i_6] [i_6] [i_6] [i_0]) * var_6))) ? ((((arr_7 [i_6] [i_6] [i_6] [i_0]) ? (arr_7 [i_1] [i_1] [i_2] [i_0]) : var_5))) : (var_0 / 13253787413836708183)));
                    }
                }
            }
        }
    }
    var_24 = (max((min(((var_6 ? var_7 : 30623)), (-5237 * var_2))), 2147483647));
    #pragma endscop
}
