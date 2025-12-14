/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -17;
    var_13 = ((1216403041 ? (((var_11 * var_9) ? (min(-9191969004812625802, 18)) : ((((-45935635 + 2147483647) >> (var_6 - 447693222)))))) : ((((var_9 ? 63213 : var_9))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((-(arr_2 [i_0])))) ^ (((arr_2 [4]) ? 16246577473932888192 : 1023)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_9 [i_1] = var_9;
            arr_10 [i_1] = 21;
            var_14 = 1;
        }
        arr_11 [i_0] [i_0] = (max((max(2200166599776663427, var_6)), ((95 ? ((min(1039, -1028))) : ((-1004 ? 2200166599776663446 : 1965529519))))));
        var_15 = ((-((93 | (!210)))));
    }
    #pragma endscop
}
