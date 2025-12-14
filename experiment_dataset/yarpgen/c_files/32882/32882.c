/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? (min(var_1, 17462869976295700428)) : ((max(var_8, ((max(8192, 8380416))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((((!(~3962))) ? (((((248 + (arr_0 [i_0])))) ? (arr_1 [i_0]) : 17462869976295700423)) : ((48 ? 57344 : 17462869976295700428))));
        var_12 = var_6;
        arr_2 [i_0] = -var_2;
    }
    var_13 = (min(var_13, var_7));
    var_14 = var_4;
    #pragma endscop
}
