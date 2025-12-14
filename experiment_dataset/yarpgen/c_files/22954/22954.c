/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((((((!var_4) ? (arr_4 [i_0] [i_0] [i_0]) : var_7))) ? (((~(arr_0 [i_0 - 1])))) : var_10));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (((arr_7 [22] [20] [22]) ? (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : var_11)) : var_6));
                    var_13 = var_1;
                    var_14 = (((((min((arr_2 [2]), 16942016180120883537))) ? var_11 : (!var_11))));
                }
                var_15 = (((min((arr_7 [i_0] [19] [i_0 + 1]), (arr_7 [i_0] [18] [i_0 + 1])))) ? (((min((arr_7 [i_0] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0] [6] [i_0 - 1]))))) : (arr_7 [i_0] [1] [i_0 + 1]));
                arr_10 [i_0] [2] [i_0] = var_4;
                var_16 ^= 105;
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] = 11021714278644614267;
        var_17 = 12;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {
                var_18 = ((25089 >> (var_9 - 3024)));
                var_19 = (arr_4 [10] [3] [i_5]);
            }
        }
    }
    #pragma endscop
}
