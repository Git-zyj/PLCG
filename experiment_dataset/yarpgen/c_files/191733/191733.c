/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = ((((min(((var_5 ? (arr_0 [i_0] [i_0]) : var_7)), (((arr_0 [5] [i_0]) ? var_7 : 212))))) - 1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = (max(var_3, var_2));
                        var_14 |= ((15923833358510618994 ? 7 : 5));
                        var_15 = (min(var_15, (((((min(var_7, (arr_2 [i_3 - 2] [i_3 - 2] [i_0 + 1])))) ? (max((arr_1 [i_0 + 1]), 41)) : var_8)))));
                    }
                }
            }
        }
        var_16 |= var_9;
    }
    var_17 = var_5;
    var_18 &= var_3;
    var_19 = ((~231) == var_2);
    var_20 = var_0;
    #pragma endscop
}
