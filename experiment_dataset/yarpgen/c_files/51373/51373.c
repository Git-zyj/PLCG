/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_14 = (max(var_3, (((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_15 = (((arr_0 [i_0 - 1] [i_0 - 1]) ? 1368669547 : 24));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0 + 1] [i_1] = (((arr_0 [i_0 + 1] [i_0 + 1]) / ((max(var_6, 232)))));
            var_16 = var_0;
        }
    }
    var_17 = var_5;
    #pragma endscop
}
