/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) | (max(939911242, 62))));
        var_18 ^= (arr_3 [i_0]);
    }
    var_19 = ((((max((min(4328833236826232414, 939911242)), (939911272 + -939911243)))) ? (min(var_12, 16383)) : (min(-8, var_2))));
    var_20 = var_9;
    #pragma endscop
}
