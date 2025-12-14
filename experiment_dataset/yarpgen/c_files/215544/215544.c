/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = arr_3 [i_0];
                arr_5 [i_0] [i_1 - 1] [i_0] = var_5;
            }
        }
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_15 = ((((((arr_7 [i_2 - 2]) & var_6))) && ((((arr_7 [i_2 - 1]) ? (arr_6 [i_2 + 3] [i_2 + 1]) : (arr_7 [i_2 - 2]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    {
                        var_16 *= ((!((((arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1]) ? (arr_8 [i_5 - 3] [i_5 + 1] [i_5 - 3]) : (arr_8 [i_5 - 3] [i_5 - 1] [i_5 - 3]))))));
                        var_17 = ((((var_7 && (arr_14 [i_5] [i_5] [i_5 - 1] [i_5]))) ? (arr_14 [i_5 + 1] [i_5] [i_5 + 1] [i_5]) : ((max((arr_14 [i_5] [i_5] [i_5 - 3] [i_2]), (arr_14 [i_4] [i_5] [i_5 + 1] [i_4]))))));
                        var_18 = (min(var_7, (((var_11 && (arr_10 [i_2 + 1]))))));
                        var_19 = (((max(((var_11 ? var_11 : var_7)), (min(var_5, var_6))))) ? (((((arr_10 [i_2 + 1]) == (arr_8 [i_2] [i_2 + 1] [i_2]))))) : (min(((min(-85, var_10))), (arr_11 [i_5] [i_5 + 1] [5] [i_5 - 1]))));
                        arr_17 [i_2 - 2] [i_3] [i_2] [i_5 + 1] &= (((((((var_10 ? (arr_16 [i_2 + 1] [16] [1] [i_5]) : var_5))))) | (((arr_15 [i_2] [i_2 - 2] [i_2 + 1] [17] [i_2 - 2] [i_2]) ? -var_3 : (((var_5 / (arr_16 [i_2] [i_3] [1] [i_5]))))))));
                    }
                }
            }
        }
        var_20 = ((((max((arr_11 [i_2] [16] [i_2 - 1] [i_2 + 2]), (arr_11 [i_2] [i_2 + 3] [i_2 - 2] [0])))) ? ((max((((arr_8 [i_2 - 2] [i_2] [i_2]) ? var_10 : var_3)), (var_0 && var_0)))) : (((arr_14 [i_2 - 2] [i_2 - 1] [i_2] [i_2 + 1]) & (var_3 % 6482760939966951519)))));
        var_21 = (((((((var_10 + (arr_15 [i_2 - 1] [12] [i_2 - 1] [i_2 - 2] [i_2] [i_2])))) ? (var_6 + -88) : (arr_15 [4] [i_2] [i_2 + 2] [i_2] [i_2 - 2] [3])))) ? (((arr_16 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 3]) + (arr_16 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 3]))) : var_12);
    }
    #pragma endscop
}
