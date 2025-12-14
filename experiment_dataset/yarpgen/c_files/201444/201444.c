/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_15 < var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((-(31 / 49606))));
        var_18 = (max((((~(~var_6)))), var_10));
    }
    var_19 = ((((max(2184267460554010107, 16262476613155541508))) ? var_11 : (((((var_0 ? var_16 : -1))) | ((var_8 ? var_1 : 4027845849982336288))))));
    #pragma endscop
}
