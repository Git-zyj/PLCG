/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((!(((arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 4]) && var_6))));
                    var_14 = ((!(((~(arr_1 [i_0]))))));
                }
            }
        }
    }
    var_15 = (((((min(0, var_9)))) & ((~(-1 || -17)))));
    var_16 = var_6;
    var_17 = (min(var_17, var_4));
    var_18 -= var_8;
    #pragma endscop
}
