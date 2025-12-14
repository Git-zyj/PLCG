/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 |= ((((~((min(228, 30485))))) * 0));
        var_14 = (!6);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = (min((-115 ^ 7444081507002343725), (!-5710620989143471745)));
        var_16 |= ((((-115 / (3944178065 ^ -1))) / ((max(-1, 30485)))));
        arr_5 [i_1] = ((min((-127 - 1), 4247685686)) >> (-52 + 72));
    }
    var_17 = ((var_1 - ((~(max(-12470, 8388607))))));
    var_18 = var_11;
    var_19 = (var_3 && var_4);
    #pragma endscop
}
