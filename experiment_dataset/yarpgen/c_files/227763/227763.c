/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(var_10, ((min(255, 247)))));
        arr_4 [i_0] = ((~(arr_2 [i_0])));
    }
    var_20 = ((-((~(0 != var_17)))));
    #pragma endscop
}
