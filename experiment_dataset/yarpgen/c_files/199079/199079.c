/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 3558903116));
    var_17 = -1120556940312242405;
    var_18 = (max(var_18, 28));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = (3048805838 + 45131);
        var_20 = 3558903116;
        var_21 = (max(-var_11, (((var_2 ? var_12 : ((var_6 ? 1000618710 : var_12)))))));
    }
    var_22 = -65507;
    #pragma endscop
}
