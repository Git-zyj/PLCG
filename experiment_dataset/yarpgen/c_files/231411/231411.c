/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_4 ? (((1117 << ((((4002718423 >> (1730822919 - 1730822906))) - 488607))))) : (~3762397003))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (~250);
        var_20 = ((var_17 ? (((max(182, 4790)))) : (-32767 - 1)));
    }
    #pragma endscop
}
