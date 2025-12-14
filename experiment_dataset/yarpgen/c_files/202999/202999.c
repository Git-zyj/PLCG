/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (4294967295 || 13213583567629551958);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= (((35560 ? 3405532528181719496 : 1)));
        arr_2 [i_0] &= (((3271383106 / -6828) <= (min(3425626056, 35560))));
    }
    var_17 = (min(var_17, ((((~13213583567629551983) << (var_1 + 14068))))));
    #pragma endscop
}
