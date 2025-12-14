/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((0 != var_3) ^ var_5)), var_2));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = ((var_10 ? ((((((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 1])))) + (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 + 1]))))) : (arr_1 [i_0])));
        var_19 *= (max((min((arr_1 [12]), var_13)), ((((max(7311154200094321890, 12))) * (arr_1 [12])))));
    }
    #pragma endscop
}
