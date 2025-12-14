/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((var_10 + ((min(5883, 6434))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = 37972;
        var_13 = (min(var_13, var_7));
        var_14 = (arr_2 [i_0]);
    }
    var_15 = ((-(var_8 | var_4)));
    #pragma endscop
}
