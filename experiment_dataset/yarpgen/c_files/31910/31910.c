/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((70368744177663 ? 4609434218613702656 : -7)), ((min(-164, (((5232168838334882703 < (-32767 - 1)))))))));
    var_14 = (((-32767 - 1) ? 0 : 112));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_15 = ((-(-32767 - 1)));
        arr_2 [2] [i_0 + 1] = (min((min((var_2 || var_2), ((1 ? var_2 : var_10)))), -var_12));
        var_16 *= (min(32765, 932408674));
        var_17 = 17;
    }
    #pragma endscop
}
