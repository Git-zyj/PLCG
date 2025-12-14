/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((var_8 >= (var_9 & var_6)));
        var_11 = (min(var_11, (((var_5 ? (~var_9) : (min(var_6, var_9)))))));
    }
    var_12 *= (((min(var_6, (((var_9 ? var_7 : 26045))))) < (((max(-1240386769, var_0))))));
    #pragma endscop
}
