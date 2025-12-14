/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_2;
    var_19 -= ((((max(255, 3))) ? ((((max(var_5, 10599921882211962897))) ? ((13055981072095160267 ? var_0 : 255)) : var_9)) : 65280));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 |= max(18446744073709551615, -2023637728);
        var_21 |= ((~28672) ? (arr_1 [i_0]) : (max(13106355089042819412, 9225467704873902290)));
        var_22 = (min(var_22, var_14));
        var_23 = (arr_0 [4]);
    }
    var_24 &= (((var_2 ? ((max(1, var_15)) : (var_17 - var_7)))));
    var_25 |= var_0;
    #pragma endscop
}
