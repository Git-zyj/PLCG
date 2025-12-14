/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = var_11;
        var_19 = (min(var_19, var_1));
        arr_4 [i_0] = ((!(((~(arr_2 [i_0]))))));
        var_20 = (max(var_20, (((((7891 ^ -22683) ? (arr_3 [i_0] [i_0]) : ((0 ? 72057591890444288 : (arr_0 [i_0] [i_0])))))))));
    }
    var_21 ^= -5457381103216528869;
    var_22 *= (max(var_15, (((((((-9223372036854775807 - 1) ? var_4 : var_6))) && (((var_11 ? var_9 : 5457381103216528868))))))));
    var_23 = var_12;
    #pragma endscop
}
