/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((var_4 ? var_3 : var_2)) / var_9));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, ((+(((!var_3) / ((var_9 ? var_6 : var_4))))))));
        var_12 = (10118115551561611789 * ((var_3 ^ ((var_5 ? var_3 : -28234)))));
    }
    var_13 = (((~var_8) << (((max(8328628522147939818, var_9)) / -255))));
    var_14 = (max(var_14, var_5));
    #pragma endscop
}
