/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((+(((-34 >= 253) >> (var_4 - 1260561378)))));
    var_20 = 29;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (+-132);
        var_21 += (+-1);
    }
    #pragma endscop
}
