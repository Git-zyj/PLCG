/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((var_14 ? (-2147483647 - 1) : 2147483647));
        arr_5 [i_0] [i_0] &= (254471480 == 723156233);
    }
    var_15 = (((var_13 + 2147483647) << (((((((var_2 ? 2147483647 : var_14))) ? var_9 : ((var_6 ? 3686819704 : var_2)))) - 2575976777))));
    var_16 = 2147483647;
    var_17 = (max(var_17, (max(((3281693860 ? 1552891181 : -var_13)), (min(821016571, var_3))))));
    #pragma endscop
}
