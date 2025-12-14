/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((var_9 ? (8854326842751300417 > 241) : ((((arr_2 [i_0]) < -154438240)))))) ? (min(89, (((arr_0 [i_0] [i_0]) ? 1077 : var_1)))) : var_4));
        arr_5 [i_0] = 1009061201;
    }
    var_11 = ((~(((min(var_1, var_6)) << ((((var_2 ? -3227308021420675659 : var_10)) + 3227308021420675664))))));
    var_12 = (~var_2);
    #pragma endscop
}
