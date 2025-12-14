/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_12 ? (~var_12) : (((var_1 ? var_2 : var_11)))));
        arr_5 [i_0] |= -125;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_14 [i_1] = var_3;
            var_18 ^= (min((min(((max((arr_11 [9] [i_1]), 40))), (max(var_13, var_11)))), (arr_2 [i_1])));
        }
        var_19 ^= (min((1944677070 + 32805), (max(7211531877378835158, (arr_13 [i_1])))));
    }
    var_20 = (var_5 / var_11);
    #pragma endscop
}
