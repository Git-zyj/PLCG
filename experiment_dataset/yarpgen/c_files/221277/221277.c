/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = var_2;
                    var_14 = (min(var_14, (!0)));
                }
            }
        }
        arr_10 [13] = ((98 ? (1 & 1) : (~3594)));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_15 = (arr_0 [i_3] [i_3]);
        arr_14 [i_3] [i_3] = (arr_7 [i_3] [8] [i_3]);
    }
    var_16 = 11525862529291191892;
    #pragma endscop
}
