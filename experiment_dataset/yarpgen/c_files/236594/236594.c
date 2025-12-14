/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 -= ((!(((-(!250))))));
        var_14 -= 1;
        arr_2 [i_0] = ((1 ? 3 : (max(-2155541091611228106, 127))));
        var_15 = var_10;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 += var_1;
        var_17 = ((-((0 ? (~-21400) : ((var_1 ? (arr_3 [i_1]) : 890098157))))));
    }
    var_18 = (+-2147483647);
    #pragma endscop
}
