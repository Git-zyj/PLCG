/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_14 = 12;
        arr_4 [i_0] = -var_4;
    }
    var_15 = (min(-3010412230705676568, (((var_5 > (max(10530310558794520615, -3929319715014352619)))))));
    var_16 = ((~(((min(255, 0)) >> (var_0 + 57)))));
    #pragma endscop
}
