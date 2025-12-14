/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((~-80) ? (-1128815342 ^ var_3) : var_6))) ? var_8 : ((max((255 < var_13), 8301236263647639282)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = 2369595450;
        var_18 = var_1;
        var_19 = var_5;
    }
    var_20 = (((var_5 != var_10) ? (((-((-4957768419031356250 ? 56057 : 28774))))) : ((79 ? (min(var_13, var_5)) : (((var_10 ? var_12 : -4072009407480116256)))))));
    var_21 = (((((var_12 ? var_12 : 18446744073709551597)) < var_4)));
    var_22 = (((min(127, (max(10789974321468334888, 35706))))) ? var_11 : ((-((max(var_3, var_7))))));
    #pragma endscop
}
