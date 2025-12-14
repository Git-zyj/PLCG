/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -5487226944156389845;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 = var_10;
        arr_3 [i_0] = 3644112459631713584;
    }
    #pragma endscop
}
