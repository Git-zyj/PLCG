/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_6);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(var_11, (825179442661693039 <= 4186237251)));
        var_12 = (min((((-(3073876827 && -45)))), ((var_8 ? (45 == 45) : 45))));
    }
    var_13 = (min(var_13, (((max(1, -46))))));
    #pragma endscop
}
