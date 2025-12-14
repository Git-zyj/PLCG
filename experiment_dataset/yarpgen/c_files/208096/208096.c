/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1] [i_2] [i_3] [16] [i_3] = (((~-7646) << (var_4 + 2051559659)));
                        var_14 -= (min((max(((1 << (var_8 - 6217519564190933936))), 248)), (((!(arr_9 [i_3 - 1] [i_1] [i_2] [11]))))));
                    }
                }
            }
        }
        var_15 -= (min((min((arr_0 [8]), (arr_5 [10]))), (arr_0 [9])));
        var_16 = 15754;
        arr_13 [i_0] = 9563208160283159951;
    }
    var_17 &= var_8;
    #pragma endscop
}
