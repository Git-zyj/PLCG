/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((((var_3 ^ ((var_5 ? 0 : var_10)))) == 255));
    var_15 = var_11;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(((var_5 ? (var_4 + 32753) : (min(-32753, var_4)))), (min(var_8, (arr_0 [i_0 + 2])))));
        var_17 = ((~(min(((-9 ? var_4 : var_10)), var_0))));
        var_18 = (min((min(var_5, (min(-1, (-2147483647 - 1))))), ((min(var_0, (arr_1 [i_0]))))));
    }
    #pragma endscop
}
