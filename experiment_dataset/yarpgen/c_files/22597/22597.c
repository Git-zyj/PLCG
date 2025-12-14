/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));
    var_11 = (var_3 || var_5);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [3] [i_0] = ((!(((1875010594 >> (269239408 - 269239385))))));
        var_12 += ((~((((max(var_7, (arr_1 [i_0])))) << (var_8 - 59864)))));
    }
    #pragma endscop
}
