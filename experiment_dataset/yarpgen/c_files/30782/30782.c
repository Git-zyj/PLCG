/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((arr_1 [i_0 - 2]) / -65535);
        arr_4 [i_0] = (!2147483647);
        arr_5 [i_0] = min((arr_0 [i_0 - 3] [14]), ((~(((arr_2 [i_0]) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0]))))));
    }
    var_19 = (((~(var_1 || 9))));
    #pragma endscop
}
