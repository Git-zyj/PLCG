/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((max(((max(var_12, var_1))), var_13)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = var_18;
        arr_2 [i_0] = ((-(((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1])))));
        var_22 = (min(var_22, (((var_16 >> (((((1 >> 1) ? 2205130762 : (54 << 22))) - 226492399)))))));
    }
    #pragma endscop
}
