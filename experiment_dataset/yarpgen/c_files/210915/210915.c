/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min((-2147483647 - 1), 3342604804895190348)) - var_11))) ? -1633465949 : (var_0 / 1633465949)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 3342604804895190371;
        arr_5 [i_0] = var_16;
    }
    var_20 = var_2;
    #pragma endscop
}
