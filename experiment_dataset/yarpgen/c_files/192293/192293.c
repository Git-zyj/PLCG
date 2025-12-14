/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_1] = (arr_0 [i_1] [i_0]);
            arr_8 [i_0] = 15128;
        }
        arr_9 [i_0] [i_0] = ((((arr_6 [i_0] [i_0] [i_0]) ? 1472938425 : 49104)));
    }
    var_20 = ((var_18 != ((((var_8 / var_11) != (var_7 - var_8))))));
    var_21 = var_17;
    #pragma endscop
}
