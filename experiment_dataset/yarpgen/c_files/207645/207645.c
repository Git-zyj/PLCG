/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 -= (arr_1 [i_0]);
        arr_2 [i_0] = -30979;
        arr_3 [i_0] = (((arr_1 [i_0]) & (8134638072583882193 + 32767)));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1 - 3] [i_1] = 9;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = var_9;
            var_17 = ((~(((12135292047162801344 + 32) / (min((arr_8 [i_1 + 1] [14]), var_12))))));
            var_18 += ((~(min((17443126737187868731 & 65518), (arr_8 [i_1 - 2] [i_1 - 2])))));
        }
        arr_11 [i_1] = (arr_0 [i_1] [i_1]);
    }
    #pragma endscop
}
