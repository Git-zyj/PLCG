/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!-716270358);
        var_15 = ((!(((24 ? 226 : -2121461094)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = 1570605181;
            arr_11 [i_2] [i_2] = arr_7 [i_1];
        }
        arr_12 [i_1] = ((((1 & ((~(arr_6 [i_1] [i_1]))))) >> (((((arr_5 [i_1] [i_1]) ? 16368 : ((min(0, (arr_8 [i_1] [i_1])))))) - 16340))));
        var_16 *= (min((((arr_8 [i_1] [i_1]) <= 234)), 1));
    }
    var_17 = (min(var_17, ((((((var_9 % 1) * var_7)) < var_12)))));
    var_18 = -1896963864;
    var_19 = (max(var_19, var_1));
    #pragma endscop
}
