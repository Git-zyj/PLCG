/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((((arr_0 [i_0] [i_0]) ? (arr_2 [4] [4]) : (arr_2 [i_0] [i_0]))) + 9223372036854775807)) << (((((arr_0 [i_0] [i_0]) ? 107 : var_0)) - 107))))) || ((max(107, 107)))));
        arr_4 [10] = (((max((arr_2 [i_0 - 1] [i_0 + 2]), (arr_2 [i_0 + 3] [i_0 + 3]))) % (arr_2 [i_0] [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = (arr_6 [i_1]);
        arr_8 [i_1] = var_2;
    }
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_13 [3] [i_2] [3] = ((1529099689 % ((414837333 ? -107 : (arr_10 [i_2])))));
                var_17 = 1;
                var_18 = ((~(arr_11 [i_2])));
                arr_14 [i_3] [i_3] [i_3] &= var_0;
            }
        }
    }
    #pragma endscop
}
