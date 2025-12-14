/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= min((max(8244327807941136567, 8244327807941136566)), (var_5 > var_8));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (max(((-(arr_0 [i_0] [i_0]))), (max(((min(54, 3065133154))), (~var_8)))));
        var_15 = (10202416265768415048 >= var_12);
    }
    #pragma endscop
}
