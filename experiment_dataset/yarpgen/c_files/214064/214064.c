/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 ^= (-((max(65536, var_8))));
        var_21 = (min(var_21, 2147483645));
        var_22 = -var_5;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (var_1 & -2940921075909099656);
        arr_7 [4] = (arr_4 [i_1]);
        var_23 ^= 10254766128242170545;
        var_24 ^= var_3;
    }
    var_25 = (min(var_25, (((var_17 && ((var_19 < (!var_11))))))));
    var_26 = (min(var_8, 3092912442082497376));
    var_27 = min(((((var_15 ? var_10 : var_1)) >> (var_14 - 7650624211231990057))), -1190999878);
    #pragma endscop
}
