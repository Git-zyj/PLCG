/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((((var_6 ? var_4 : var_5))) ? ((var_0 ? var_10 : var_4)) : var_0))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(((((var_4 < var_3) / var_11))), var_2));
        var_14 *= ((21233 << (27163 - 27156)));
        var_15 = (((((!(!var_7)))) | var_10));
    }
    var_16 = (max(var_1, var_2));
    #pragma endscop
}
