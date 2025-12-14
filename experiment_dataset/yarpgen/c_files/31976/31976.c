/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 = ((max(var_9, ((var_7 ? 1606334175 : var_2)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 += (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = -1942625109;
    }
    #pragma endscop
}
