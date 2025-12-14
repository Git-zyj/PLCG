/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (arr_0 [i_0 - 1]);
        var_13 = (max(21760, var_5));
    }
    var_14 += (((645 ? 24196 : 34401)));
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [12] [i_2] [i_2] |= (max((arr_4 [i_1 - 1]), (arr_6 [i_1 + 2])));
                    var_15 = (arr_4 [i_1 - 1]);
                    arr_13 [i_1] [i_1] = ((min(-28312, 21760)));
                    arr_14 [i_3] [8] [8] [i_1] &= (arr_8 [i_3] [i_2] [i_3] [i_1 + 1]);
                }
            }
        }
    }
    var_16 = 169;
    var_17 += var_4;
    #pragma endscop
}
