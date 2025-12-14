/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (max((min(var_7, 1)), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (min((min(14, (max((arr_3 [i_2] [i_2] [i_2]), (arr_2 [i_2]))))), (arr_2 [i_0 + 1])));
                    arr_8 [i_2] [i_1] = -121;
                }
            }
        }
        arr_9 [i_0] = (((min((arr_2 [i_0 + 2]), 1941919879)) == ((~(arr_2 [i_0 + 1])))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_14 [i_3] = ((-(arr_11 [i_3] [i_3])));
        arr_15 [i_3 - 1] = -32524;
        arr_16 [i_3] [i_3] = ((+(((arr_11 [i_3] [i_3 + 1]) ? (arr_11 [i_3 + 1] [i_3 - 1]) : var_8))));
    }
    var_14 = var_11;
    #pragma endscop
}
