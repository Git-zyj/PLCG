/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((0 >= -var_3) | (var_1 & var_2)));
    var_13 = (min(var_3, (!-var_10)));
    var_14 = (var_3 % var_1);
    var_15 = ((var_1 + (+-1714333548)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 = ((((var_10 / (min((arr_1 [6]), (arr_0 [6] [6]))))) * ((((arr_1 [i_0 - 2]) + 1714333548)))));
        var_17 ^= ((((((-9223372036854775807 - 1) & (arr_1 [i_0])))) * ((min(var_10, (arr_0 [12] [i_0]))))));
        var_18 = (min((min(var_9, ((min(var_0, -1714333549))))), (arr_1 [i_0])));
        var_19 = ((((((2147483647 / -32) & -1714333539))) ? (((arr_1 [i_0 - 1]) ? (arr_1 [2]) : (arr_0 [i_0 - 1] [i_0 - 1]))) : 65527));
    }
    #pragma endscop
}
