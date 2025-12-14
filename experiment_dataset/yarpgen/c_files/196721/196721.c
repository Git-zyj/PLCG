/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = ((!((max(((max(14727, -3808199306152820974))), (max(18446744073709551615, 14727)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 -= (~593021210);
        var_18 = (max(var_18, (((!(!22442))))));
    }
    #pragma endscop
}
