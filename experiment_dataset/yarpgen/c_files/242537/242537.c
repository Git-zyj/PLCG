/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_4 > var_4) ? 12796 : 132));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 30453;
        var_14 = ((((min((((0 || (arr_2 [7])))), 4294967289))) ^ ((var_4 ? 18446744073709551607 : (arr_2 [i_0])))));
        arr_4 [i_0] = (((((~((-(arr_1 [i_0])))))) ? var_9 : (arr_0 [i_0] [i_0])));
    }
    var_15 = var_8;
    var_16 = (max(var_16, ((min(var_12, var_10)))));
    #pragma endscop
}
