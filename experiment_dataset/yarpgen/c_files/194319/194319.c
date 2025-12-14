/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-627457133 ^ (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
        var_10 = -17;
    }
    var_11 = ((17167 >= (((627457150 - 0) + var_7))));
    #pragma endscop
}
