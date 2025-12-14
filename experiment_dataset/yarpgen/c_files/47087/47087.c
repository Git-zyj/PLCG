/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -1188051294;
        var_15 = (max(var_15, 32767));
    }
    var_16 = ((!(32767 * 2625272928)));
    var_17 = var_4;
    #pragma endscop
}
