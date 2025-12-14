/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-197726402 && -197726402);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 |= 197726402;
        var_13 = ((!((((arr_0 [i_0]) ? 3462623224 : (arr_0 [i_0]))))));
        var_14 |= -48;
        var_15 = var_6;
    }
    var_16 = (max(var_16, var_8));
    #pragma endscop
}
