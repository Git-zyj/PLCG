/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(-5, (1 || 14462))) ? (((!((max(14456, 31063)))))) : var_0));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(-10901, ((min(-5571, (max(-28, -10881)))))));
        arr_3 [i_0] [i_0] = (((min(-10886, (-32767 - 1)))));
    }
    var_15 |= (((((0 ? var_10 : (!-1628015422)))) ? (max(-31253, (max(21, -31271)))) : var_3));
    var_16 &= ((!((max(4294967295, 4294967274)))));
    #pragma endscop
}
