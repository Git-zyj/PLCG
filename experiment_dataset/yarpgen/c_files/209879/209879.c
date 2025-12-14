/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((!((min(var_10, (arr_0 [7]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_12 [5] [6] = ((((~(arr_8 [i_1 + 1] [i_1 - 2]))) / (arr_8 [i_1 + 1] [i_1 - 2])));
                    arr_13 [i_0] = var_7;
                }
            }
        }
    }
    var_12 = var_4;
    var_13 = var_11;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_14 = var_3;
        var_15 = (arr_14 [i_3]);
    }
    #pragma endscop
}
