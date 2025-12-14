/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (min(3397579398, (arr_0 [i_0])));
        arr_3 [i_0] = min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((((arr_0 [i_0]) >= 897387875))));
    }
    var_18 = (~var_16);
    #pragma endscop
}
