/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_11 = (((((~(arr_4 [i_0] [i_2 - 2])))) || (6807066801275291763 ^ var_1)));
                        var_12 *= ((((!1078681731) ? (((~(arr_6 [i_0] [i_1] [i_1 - 1])))) : ((3989419708 ? 3216285583 : -1276245736901753126)))));
                        arr_12 [i_0] [11] [i_0] [19] = (max((((!(~3216285595)))), ((((((((arr_9 [14] [14] [i_2] [i_1] [i_0] [i_1]) + 9223372036854775807)) >> (3216285565 - 3216285558)))) % ((var_9 | (arr_10 [i_0] [i_2] [i_3])))))));
                    }
                }
            }
        }
        var_13 = ((3216285595 ? -3946789892950873803 : 153));
    }
    var_14 = (min(var_14, ((max(((max(var_4, ((var_3 ? var_4 : var_2))))), (~3216285595))))));
    #pragma endscop
}
