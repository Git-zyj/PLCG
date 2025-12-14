/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_17));
    var_21 = var_7;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_22 = (~var_8);
        var_23 = ((-(~-var_2)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_24 += var_12;
            var_25 += var_5;
        }
    }
    #pragma endscop
}
