/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 += (((((36892 << (var_2 - 3540620981)))) ? ((((arr_0 [i_0 + 3] [i_0]) << (49994 / 9945)))) : (65535 && 863783952)));
        arr_2 [8] = (((arr_1 [1]) * ((min(((max(var_0, var_10))), (max(50, (arr_1 [i_0]))))))));
        var_16 = (max(var_16, ((max((max((65535 <= 0), ((0 ? 65534 : 64)))), (arr_1 [i_0 + 3]))))));
    }
    var_17 = (max(var_17, (11801305489563166039 % var_5)));
    #pragma endscop
}
