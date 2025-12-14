/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1338403882 << (((((21617 ? -7325759336223116871 : 0)) != ((var_10 >> (115 - 68))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_21 = (max(var_21, ((max((arr_1 [i_0]), 1)))));
        arr_4 [8] &= (((!0) < (((var_4 - var_2) ? ((48 + (arr_1 [i_0]))) : var_18))));
    }
    var_22 = (max((var_0 & var_5), ((((var_15 <= 1149577677246793213) / (min(var_18, 10)))))));
    #pragma endscop
}
