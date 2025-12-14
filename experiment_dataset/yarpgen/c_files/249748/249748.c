/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = ((~((-(min(6, -32031111))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0 + 1]) ? var_13 : (arr_1 [i_0 - 3]))), ((((arr_0 [i_0 + 2]) >> (((arr_1 [i_0 - 3]) - 14949303255238951775)))))));
        var_21 = (max((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 2]))), ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
    }
    #pragma endscop
}
