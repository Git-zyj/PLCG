/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = arr_1 [i_0];
                var_16 *= (((!(arr_4 [i_0] [i_1] [10]))));
                var_17 = ((~(arr_2 [i_0] [i_1 + 2])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 = 125;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_13 [i_2] = (((arr_12 [i_2] [i_3] [i_3] [i_4]) ? var_2 : (arr_12 [i_4] [i_3] [i_3] [i_2])));
                    var_19 = ((var_3 ? (((23 < (arr_12 [i_2] [2] [i_3] [i_4])))) : (arr_10 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
