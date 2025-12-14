/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_2, (((!((min(var_3, var_11))))))));
    var_21 = (~90);

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((max(var_13, (((3 << (233 - 223))))))))));
        arr_2 [i_0] [i_0 - 2] = ((!((max((var_11 - var_19), ((((arr_0 [i_0]) - (arr_0 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 ^= var_8;
        var_24 = 14223029487720947063;
    }
    #pragma endscop
}
