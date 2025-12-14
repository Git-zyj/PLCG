/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((~(((((var_5 ? var_4 : var_10))) ? var_5 : ((var_1 ? -72 : var_4))))));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [18] = ((((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 3]) ? (arr_3 [i_0 + 3] [i_0 - 1] [i_0 + 3]) : (arr_3 [i_0 + 3] [i_0 - 1] [i_0 + 2])))) ? -78 : (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 3])))));
                var_14 = arr_4 [i_0] [i_1] [i_0];

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_15 = (max(var_15, -20));
                    arr_8 [16] [i_2] [i_2] [i_2] = (((~-72) | (((((-(arr_1 [i_0])))) ? ((88 ? 1 : (arr_3 [i_0] [i_0 + 2] [i_0 + 2]))) : ((((arr_2 [i_0]) || var_2)))))));
                }
                var_16 |= -96;
            }
        }
    }
    #pragma endscop
}
