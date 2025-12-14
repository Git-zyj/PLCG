/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((4435742961562182253 & var_6) ? 4435742961562182229 : var_2)) & var_10)))));
    var_12 = ((var_9 ? ((~(var_10 + var_5))) : -17));
    var_13 = var_7;
    var_14 = ((max(((min(var_5, 22725)), (~var_9)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (42813 ^ 234439542);
        arr_2 [i_0] [i_0] = arr_0 [0] [i_0];
    }
    #pragma endscop
}
