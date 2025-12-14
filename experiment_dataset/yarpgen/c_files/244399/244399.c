/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_3;
    var_13 ^= var_11;
    var_14 = ((~(((var_11 != (var_8 != var_8))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (!(arr_0 [i_0 + 1] [i_0 - 1]));
        arr_4 [i_0 - 1] = (((((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [1])))) ? (((!(arr_2 [4])))) : var_2)));
    }
    #pragma endscop
}
