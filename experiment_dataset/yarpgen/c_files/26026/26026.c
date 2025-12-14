/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!(((var_1 ? var_4 : -5336692948714329134))))) || (((var_0 / (max(var_8, var_15))))));
    var_19 &= (min(var_11, (((4194288 ? -var_14 : (var_1 % 32704))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -32704;
        arr_3 [i_0] &= (arr_0 [i_0]);
        var_20 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((1179554018 != (arr_5 [i_1])));
        var_21 ^= ((((32704 ? 32707 : 6769)) + (6752 ^ -6770)));
        var_22 = (min(var_22, ((((arr_6 [i_1]) & (arr_4 [i_1] [i_1]))))));
    }
    #pragma endscop
}
