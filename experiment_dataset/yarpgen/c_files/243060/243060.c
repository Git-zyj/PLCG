/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(var_14, (((!((max(816376336153453821, var_7))))))));
        var_15 = max((-120 & var_0), ((((var_9 + var_3) ? var_0 : -var_3))));
        var_16 = (min(1152921504606842880, var_0));
    }
    var_17 += ((var_14 ^ ((((var_0 / var_1) <= (min(18446744073709551615, 18)))))));
    var_18 = (min(var_18, var_8));
    #pragma endscop
}
