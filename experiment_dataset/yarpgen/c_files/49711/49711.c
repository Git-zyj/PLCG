/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [22] = (min(((65376 ? -121 : 8388096)), 160));
        arr_4 [20] [21] = (((((min(var_8, (arr_1 [i_0])))) ? (((arr_0 [i_0 + 2]) ? var_5 : 160)) : (arr_2 [i_0 + 1]))));
    }
    var_10 = (var_2 != var_6);
    var_11 = ((var_7 ? ((126 ? -8388111 : -103)) : ((~((max(8898, -55)))))));
    #pragma endscop
}
