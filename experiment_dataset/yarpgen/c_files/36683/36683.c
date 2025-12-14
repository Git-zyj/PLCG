/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 -= (arr_3 [i_2]);
                    var_11 = var_3;
                    var_12 = (((arr_1 [i_0] [i_1]) || (((max((arr_0 [i_0]), (arr_1 [i_2] [i_0])))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_13 = -1319;
        arr_12 [4] = ((-1097695612 ? 127 : 1318));
    }
    #pragma endscop
}
