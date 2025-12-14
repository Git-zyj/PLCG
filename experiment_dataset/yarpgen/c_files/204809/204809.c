/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = ((var_5 / (max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_11 [i_1 - 3] [i_2] [2] [i_2] = ((-((-(arr_1 [i_1 - 1])))));
                    arr_12 [1] [i_2] [1] = ((((max((arr_5 [i_1 - 3] [i_3] [i_1 - 3]), (arr_5 [i_1 - 3] [i_1 - 4] [i_1 - 4])))) ? (((759604509477108761 ? 19526 : -3))) : (arr_4 [i_1 - 3])));
                    var_12 = (arr_8 [i_2] [5]);
                }
            }
        }
    }
    #pragma endscop
}
