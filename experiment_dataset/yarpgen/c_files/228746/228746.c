/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((1 > ((((arr_0 [i_0]) && (arr_0 [i_0]))))));
        var_16 |= (max((((arr_1 [i_0] [i_0]) * var_13)), ((max((arr_1 [8] [i_0]), (arr_0 [1]))))));
        var_17 = (min(var_17, (((arr_0 [i_0]) != 0))));
    }
    var_18 = -7798041669876306221;
    var_19 = (-91607891384992142 ? 5352 : 863709770);
    #pragma endscop
}
