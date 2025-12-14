/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 *= (!var_14);
        arr_4 [i_0] = 288230376151711742;
        arr_5 [i_0] = (-58041 / var_4);
    }

    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = -12;
        arr_9 [i_1] = 1742194220;
        arr_10 [i_1] = ((4827852628048946131 ? ((var_2 ? (((arr_2 [i_1]) - var_5)) : ((var_3 ? (arr_3 [i_1] [i_1]) : var_2)))) : var_16));
    }
    #pragma endscop
}
