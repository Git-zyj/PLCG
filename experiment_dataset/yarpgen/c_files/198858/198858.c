/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? (((min(2300712731, var_8)) ^ -var_11)) : 1994254564));
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (1789826289 / var_7);
        arr_5 [5] [i_0] = var_7;
        var_18 = ((-(var_10 ^ -27482)));
    }
    var_19 *= 3595276077;
    #pragma endscop
}
