/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 ^= (max((-20410 < 15592), (((~1) ? var_9 : (((arr_1 [i_0] [20]) % 39))))));
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0]))));
        var_12 = (max(var_12, ((max(((7 ? var_7 : (max(var_2, 4294967282)))), ((max((arr_1 [15] [i_0]), (((!(arr_0 [20]))))))))))));
    }
    var_13 = ((!((max((3368914612125939297 % var_0), var_5)))));
    #pragma endscop
}
