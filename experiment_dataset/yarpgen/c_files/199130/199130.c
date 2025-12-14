/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 ^= (27762 + 10476641827439532378);
        arr_3 [i_0] [i_0] = (((((((max(var_4, (arr_0 [i_0])))) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))) : ((min(var_10, var_3)))))) && ((((max((arr_1 [i_0]), 15836501431993217657))) && (!1)))));
        arr_4 [i_0] [i_0] = ((((((arr_0 [i_0]) ? ((77056969 ? 1 : 1)) : (~var_2)))) % (7840 % 2305843009213693952)));
    }
    var_13 ^= var_10;
    var_14 = var_4;
    #pragma endscop
}
