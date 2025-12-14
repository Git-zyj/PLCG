/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 |= (~var_1);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 *= (3519667432 % -3519667443);
        arr_2 [i_0] [i_0] = var_8;
    }
    var_13 = ((((min(var_2, var_3)) ^ -var_2)));
    var_14 -= (((((min(var_0, var_5)) == var_8)) ? var_0 : (((((~var_3) && (!var_7)))))));
    #pragma endscop
}
