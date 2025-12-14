/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 ^= (((arr_1 [i_0]) & (((arr_1 [i_0]) >> (((arr_1 [i_0]) - 648876924))))));
        arr_2 [7] [i_0] = (arr_0 [5]);
        arr_3 [i_0] = 11894;
    }
    var_14 = (min(var_8, var_7));
    #pragma endscop
}
