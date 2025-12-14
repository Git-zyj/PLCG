/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(((0 >> (var_7 + 28155))), ((min(var_15, 187))))), ((var_6 ? 0 : var_9))));
    var_18 = (((((min(var_6, var_2)) == (var_5 | var_6))) ? (((~9223372036854775807) ? 43565 : (var_1 != var_0))) : var_15));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_19 = ((((~(min(37, var_2)))) << (((arr_1 [i_0] [i_0]) ? 38 : (arr_1 [i_0] [i_0])))));
        var_20 &= var_2;
    }
    #pragma endscop
}
