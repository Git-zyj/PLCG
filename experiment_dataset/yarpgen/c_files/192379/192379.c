/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 -= ((var_9 ? (((arr_5 [i_0] [i_0 - 2] [i_0]) - var_7)) : 0));
            arr_6 [i_0] [i_0] = var_0;
            var_16 = ((var_12 && (arr_0 [i_0 - 1])));
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_17 = (4294967285 > 0);
            arr_9 [i_2] [i_2 - 2] [i_2] = ((arr_8 [i_0]) >= (4294967283 && -36566663));
            arr_10 [i_0] = (((((arr_0 [i_0 - 1]) + 9223372036854775807)) << (((((arr_0 [i_0 - 1]) + 4653863070687986638)) - 26))));

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                var_18 = (min(var_18, (((~(var_10 / var_6))))));
                var_19 |= var_12;
            }
        }
        arr_14 [i_0] = ((~((var_13 ? (arr_5 [i_0] [i_0] [i_0]) : var_4))));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        arr_18 [i_4] [i_4 - 1] = var_6;
        var_20 = (min(var_20, var_0));
    }
    var_21 = var_14;
    #pragma endscop
}
