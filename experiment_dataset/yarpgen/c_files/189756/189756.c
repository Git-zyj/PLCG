/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (16193448199169580545 ? (((((min(var_11, var_6)) < var_10)))) : ((~(min(var_2, var_7)))));
        var_12 = var_2;
        var_13 = (min(8305735978820185126, 18446744073709551612));
    }
    var_14 = var_3;
    #pragma endscop
}
