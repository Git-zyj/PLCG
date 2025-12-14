/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((~(min(var_13, (~var_4)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (min((min((arr_9 [i_0 - 1]), (arr_9 [i_0 + 1]))), (!1)))));
                        var_20 = (min(var_20, (((!(arr_4 [i_2] [i_3]))))));
                    }
                }
            }
        }
        var_21 = (max(183, 1));
        var_22 = (min(var_22, (arr_9 [i_0 - 1])));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        arr_13 [i_4] &= (min((arr_11 [i_4] [i_4]), 6));
        var_23 &= ((!((max((arr_10 [i_4 + 1] [i_4 + 1]), (arr_12 [i_4 - 1]))))));
    }
    #pragma endscop
}
