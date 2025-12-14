/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((-(56 || -6148014546149180167))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = ((~((-(arr_1 [i_0] [5])))));
        var_21 = ((((62558 >> (1748530906 - 1748530904))) | 45769));
    }
    var_22 = var_10;
    #pragma endscop
}
