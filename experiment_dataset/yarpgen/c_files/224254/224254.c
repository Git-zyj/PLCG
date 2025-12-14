/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (min((0 == 6844174413517001025), (max(var_1, (max(4294967271, 1))))))));
    var_13 *= 4294967295;
    var_14 = (var_2 ? var_9 : 2977267470);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((var_3 != (((!(arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = (max(2147483647, -2616243));
    }
    var_16 = 1;
    #pragma endscop
}
