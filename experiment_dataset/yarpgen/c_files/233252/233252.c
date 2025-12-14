/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_10 = (min(var_10, (arr_0 [i_0] [i_0 - 4])));
        var_11 = ((((-1001273856 ? -3839891975093185887 : 7600675713597850542)) + 255));
        var_12 = (((min((((arr_1 [i_0]) ? 1023 : 10846068360111701058)), ((((arr_0 [i_0] [i_0]) / (arr_1 [i_0 - 1])))))) | ((-(((arr_1 [i_0]) ? var_8 : 10846068360111701073))))));
    }
    var_13 = (max(var_8, ((((var_2 ? var_1 : var_8)) * var_6))));
    #pragma endscop
}
