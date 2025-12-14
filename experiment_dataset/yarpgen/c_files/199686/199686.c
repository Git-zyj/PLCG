/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((3366709855 && -24), (var_7 <= var_4)))) > var_10));
    var_12 = (max(var_12, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 &= -24;
                    var_14 &= var_3;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_1] [i_2] [i_2 - 1] [i_3] [i_2] = (min((((arr_4 [i_0] [i_0]) ? 3366709855 : 218)), var_3));
                        var_15 |= min(((0 ? 3366709855 : var_4)), 928257446);
                        var_16 = (min(-24, (min(6, -238499543))));
                    }
                    var_17 = (min(32775, 928257446));
                }
            }
        }
    }
    var_18 = ((!((!(249 < 83060746)))));
    var_19 = var_9;
    #pragma endscop
}
