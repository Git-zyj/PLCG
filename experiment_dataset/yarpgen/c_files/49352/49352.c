/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 &= ((((((min(6, 50))))) ? 37 : 2603677200467639883));
        arr_2 [i_0] [i_0 - 1] = 1;
        var_18 = (((max(var_0, (((~(arr_0 [i_0])))))) * ((120 ? var_14 : 18446744073709551611))));
    }
    var_19 = var_11;
    #pragma endscop
}
