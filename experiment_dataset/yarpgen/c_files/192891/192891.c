/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 |= 6;
        var_18 = (min(var_18, (17002 == 9)));
        arr_2 [i_0] = ((29504 && (((2390045091934516080 ? (29508 && 260096) : ((min(65528, 29507))))))));
    }
    var_19 = ((((max(var_12, var_1))) ? (((((var_11 ? var_5 : -29493))) ? (min(var_10, 8)) : -1)) : ((1 ? (33317 * var_10) : (((-260096 ? 3439197889 : var_16)))))));
    #pragma endscop
}
