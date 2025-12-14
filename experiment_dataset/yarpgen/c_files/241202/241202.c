/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_0);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [13] = var_11;
        var_16 = ((1 ? (((~(arr_1 [i_0] [i_0])))) : (((arr_0 [i_0 + 2] [i_0 + 2]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 2] [i_0 - 1])))));
        arr_3 [i_0 - 1] = (-2147483647 - 1);
        arr_4 [i_0] [i_0 - 1] = (arr_0 [i_0] [i_0 + 2]);
        arr_5 [i_0] = (arr_1 [i_0 - 1] [i_0]);
    }
    var_17 ^= ((!((((-2147483647 - 1) ? 219 : var_1)))));
    var_18 = var_3;
    var_19 = (max(((((((60 << (var_4 - 12535)))) || (0 % var_6)))), var_10));
    #pragma endscop
}
