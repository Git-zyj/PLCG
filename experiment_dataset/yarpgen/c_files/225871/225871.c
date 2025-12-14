/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((4294967295 ? 256 : -1566643071)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 += ((max(0, 20)));
        var_14 = (min(((var_1 ? (arr_2 [1]) : (arr_0 [i_0]))), var_11));
        var_15 = (max(var_15, ((((~(((arr_1 [4]) ? (arr_2 [i_0]) : var_1)))) >> (252 - 224)))));
        var_16 = max(((125 ? (~239) : var_3)), var_0);
    }
    #pragma endscop
}
