/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-2063411890 >= var_10) && var_13);
    var_15 = var_9;
    var_16 = (~1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = 1817243930947321753;
        var_18 = 105;
    }
    #pragma endscop
}
