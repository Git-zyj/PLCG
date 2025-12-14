/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~var_8), (max((max(var_7, 1)), ((max(254, var_12)))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((~(arr_3 [i_0])));
                    var_15 ^= ((~(!var_13)));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = (arr_0 [i_1]);
                }
            }
        }
        arr_11 [i_0] [i_0] = ((-(arr_3 [i_0 - 4])));
        arr_12 [i_0] [i_0] = (((10 > 52652) ? (((var_1 ? var_5 : 58381))) : (arr_0 [i_0 + 2])));
    }
    #pragma endscop
}
