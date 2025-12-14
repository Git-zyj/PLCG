/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 &= (min(((max((arr_0 [i_0 + 3]), (arr_0 [i_0 - 1])))), (var_1 % 112)));
        var_20 &= ((((!(arr_1 [i_0 + 3] [i_0 + 1])))) | ((1909140600 ? (arr_1 [i_0 + 1] [i_0 + 3]) : (arr_1 [i_0 + 1] [i_0 + 3]))));
        var_21 = ((var_3 && ((min(var_9, (min((arr_0 [i_0]), var_8)))))));
        arr_2 [i_0] = max(8128, var_2);
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_22 = 11;
        arr_7 [8] &= ((0 ? (min(((~(arr_0 [i_1]))), (((arr_3 [i_1]) + 59)))) : (((((((arr_3 [10]) >> (var_13 + 41)))) || (arr_6 [2] [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            {
                arr_13 [i_2] &= (max((arr_8 [20]), (((arr_12 [i_3 - 2] [i_3 + 1]) ? -0 : var_17))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_3] [i_5] &= (((((11 ? 96 : (arr_16 [i_2] [i_2] [i_2])))) == ((-8578 % (arr_16 [i_4] [i_3 - 1] [i_2])))));
                            var_23 = (max(var_23, (((!((((arr_19 [i_2]) ? ((((arr_11 [i_2] [i_2] [i_5]) == var_11))) : (arr_9 [i_5])))))))));
                            arr_21 [i_2] [i_4] [i_5] = (min(-2147483638, (((!(arr_10 [i_2] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
