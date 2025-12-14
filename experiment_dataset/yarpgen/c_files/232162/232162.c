/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(1772463338 & var_8)));
    var_11 = var_9;
    var_12 = (min(var_9, var_9));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        var_13 = (-(max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0]))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((1772463338 || 214) ? -var_3 : (arr_0 [i_0])));
            arr_7 [i_1] [i_0] [i_0] = -15544;
            arr_8 [i_1] [i_1] [i_0] = var_0;
            var_14 = var_7;
        }
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = min((min((min((arr_4 [i_2]), 65535)), var_7)), (arr_4 [i_2 - 1]));
        arr_12 [i_2] [i_2 - 1] = ((((((max((arr_2 [i_2] [i_2]), (arr_4 [i_2])))) ? 1772463338 : (arr_10 [i_2]))) & ((((((max((arr_9 [i_2 - 1] [i_2 - 1]), var_8))) && -1772463334))))));
    }
    #pragma endscop
}
