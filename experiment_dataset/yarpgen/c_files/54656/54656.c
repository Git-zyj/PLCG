/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = 127;
    var_19 = (var_1 % var_9);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((((var_15 % 23358) > (var_16 + 46)))) < ((((125 - var_6) <= 115)))));
        arr_3 [20] = -111;
        arr_4 [i_0] = 124;
    }
    #pragma endscop
}
