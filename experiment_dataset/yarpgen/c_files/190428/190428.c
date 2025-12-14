/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((((var_12 && (arr_0 [i_0] [i_0]))) ? (arr_1 [16] [16]) : (arr_1 [i_0] [i_0]))))));
        var_17 = (-((max((arr_1 [18] [i_0]), -1289554064))));
    }
    var_18 = (min((max(((max(-390575638, var_15))), (max(var_11, var_9)))), (((1 != (((((-127 - 1) + 2147483647)) >> (29466 - 29436))))))));
    var_19 = (var_10 ? 1289554090 : (((var_5 < ((833269797 ? var_7 : var_10))))));
    #pragma endscop
}
