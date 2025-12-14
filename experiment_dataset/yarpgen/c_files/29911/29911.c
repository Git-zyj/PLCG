/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min((max(244, 5680185693277116978)), var_7));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_0 [i_0])));
        arr_2 [i_0] &= var_5;
        var_14 = ((!(((1920674781927626696 ? 1408323547730353672 : 2147483648)))));
    }
    #pragma endscop
}
