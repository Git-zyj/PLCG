/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((-7205 ? (arr_0 [i_0] [2]) : -21035))) * (((4294967295 ? 44501 : var_14))))))));
        var_17 = ((-(((((var_12 ? 14305717256272741316 : var_4))) ? (arr_0 [i_0] [i_0]) : 1101085996))));
        var_18 &= ((!((((!(arr_0 [i_0] [i_0])))))));
    }
    var_19 &= ((+(((!21035) ? (34801 - 1817798370) : var_11))));
    #pragma endscop
}
