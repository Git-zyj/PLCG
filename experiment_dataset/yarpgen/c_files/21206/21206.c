/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (((1 - (var_8 + 14909))));
        var_16 = (((((((min(99, 1046654039))) ? (16383 != -1270478589) : ((65535 >> (((arr_1 [i_0]) - 1514151479))))))) ? var_0 : ((~(arr_0 [i_0])))));
        var_17 = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : 33202)))));
        var_18 = (max(18384, (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    var_19 |= var_7;
    var_20 |= (-36 ? var_7 : (52823 / 32768));
    #pragma endscop
}
