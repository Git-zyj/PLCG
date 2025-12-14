/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((((max(127, -30896))) ? ((7327287422293310099 ? -30896 : 13887)) : ((min(30895, 12760))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = var_7;
        var_17 = -var_5;
    }
    var_18 |= var_1;
    #pragma endscop
}
