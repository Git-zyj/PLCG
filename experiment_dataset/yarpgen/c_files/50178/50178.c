/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_1 ? ((((min(var_15, 252230271))) ? (~var_16) : var_3)) : (-32767 - 1));
    var_18 = ((((((252230296 ? 252230285 : 238))) ? ((0 ? var_5 : var_8)) : var_4)));
    var_19 = ((-((~((var_16 ? var_13 : var_4))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (max(252230296, (-32767 - 1)));
        arr_4 [i_0] = (min(((32760 ? -23302 : 17225701381775131505)), (arr_2 [i_0])));
    }
    #pragma endscop
}
