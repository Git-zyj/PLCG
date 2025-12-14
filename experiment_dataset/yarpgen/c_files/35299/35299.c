/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 9223372036854775807;
        arr_4 [i_0] = 7635;
        arr_5 [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 = var_9;
        arr_10 [i_1] = var_4;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_13 [i_2] = 75;
            arr_14 [i_1] [i_1] [i_2] = 7635;
            arr_15 [i_2] [i_2] [i_2] = var_4;
        }
        var_20 = 32754;
    }
    var_21 = -1007820865662758016;
    var_22 = var_10;
    var_23 = (max(var_23, -7636));
    var_24 *= 7646;
    #pragma endscop
}
