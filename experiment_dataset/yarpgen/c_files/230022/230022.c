/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [8] [i_0] = var_6;
        arr_3 [i_0] = ((~((((var_4 ? var_2 : var_4)) | var_7))));
    }
    var_11 = (((2013265920 + var_8) ? 4504323358752652905 : var_3));
    var_12 = var_2;
    var_13 = (~var_2);

    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_14 = (((~-var_6) < var_4));
        arr_6 [18] = ((((((var_10 & var_0) ^ (var_0 < var_4)))) ? (~var_10) : (var_7 ^ var_8)));
        arr_7 [i_1] = (-(var_4 + var_0));
    }
    #pragma endscop
}
