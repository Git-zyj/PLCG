/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (~var_12);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = max(((~((11902 ? var_12 : var_10)))), (min((max(var_4, 2233785415175766016)), (((-10736 && (arr_0 [i_0] [i_0])))))));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_9 [0] [i_2] [i_2] = (max(((48 ? 16212958658533785600 : 4344)), ((((arr_7 [i_1] [i_1]) ? -var_2 : (2253233187 % 1))))));
            var_17 -= var_0;
        }
        arr_10 [i_1] [i_1 - 1] = (arr_4 [i_1 - 1]);
        var_18 = (~5479665381030196955);
    }
    var_19 = var_13;
    #pragma endscop
}
