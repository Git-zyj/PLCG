/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1965419296259813257 && 1);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!1);
        arr_4 [i_0] [i_0] = (((max(1, 1))));
    }
    var_13 -= ((1 ? ((((1 || (((7290829954220716087 ? 179 : 48439))))))) : (max(4710, (~var_5)))));
    #pragma endscop
}
