/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (var_5 != 52988);
        var_17 ^= -8156981482691550970;
        var_18 = (min((arr_0 [i_0]), ((((((arr_3 [i_0] [i_0]) ? -1062714510512024910 : 3758096384))) ? ((-1279734552 ? var_3 : var_8)) : (arr_0 [i_0])))));
    }
    var_19 = var_6;
    var_20 = ((((((!(((var_4 ? 15 : 1929592459))))))) != var_0));
    #pragma endscop
}
