/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = var_2;
        var_16 = (max(var_16, var_10));
        var_17 = (-32767 - 1);
        var_18 = (max(((((min(56, 200))) ? (var_1 * 4471377895363593288) : var_1)), ((max(39, -1)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = -var_4;
        var_20 *= (min(1, (max(130023424, 1))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_9 [i_2 - 1] [i_2 + 2] = -var_12;
        arr_10 [i_2 - 1] = (min(((-(~43))), var_8));
        var_21 = (((((arr_8 [i_2 + 1]) - 4471377895363593288)) - (arr_2 [i_2 + 1] [1])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_22 = (min(var_22, (arr_13 [i_3])));
        var_23 = ((-(arr_13 [i_3])));
        arr_14 [0] = ((((arr_12 [i_3]) % (arr_11 [21]))));
    }
    var_24 = var_11;
    var_25 = ((-((~(~-130023425)))));
    #pragma endscop
}
