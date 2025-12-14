/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_1 ? var_12 : 15));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [5] = (var_13 + var_15);
    }
    var_19 = var_9;
    var_20 &= (var_6 ? (((((~16952410506190764719) > var_7)))) : -11038548703750392938);
    #pragma endscop
}
