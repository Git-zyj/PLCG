/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(-4778319835629724694, -8702));
        var_15 = (((((((0 ^ (arr_2 [i_0]))) & ((((arr_1 [i_0] [i_0 + 1]) ^ (arr_0 [i_0] [i_0 + 1]))))))) & (max(131071, ((((arr_2 [i_0 + 2]) & (arr_3 [i_0 + 2] [i_0]))))))));
    }
    var_16 = 17;
    #pragma endscop
}
