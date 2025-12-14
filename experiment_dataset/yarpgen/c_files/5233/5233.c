/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 ^= ((-1857303672 ? ((var_10 ? (((-7862049533276577002 | (arr_0 [i_0] [i_0])))) : 7744033679249296972)) : ((((arr_0 [i_0] [i_0]) ^ (~var_2))))));
        var_17 = (min(var_17, (max((max(((((arr_2 [i_0]) && (arr_1 [i_0])))), (max((arr_1 [i_0]), 672)))), (((!(arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (((1 | (arr_3 [i_1]))));
        var_19 = (max(var_19, (((max((((arr_0 [i_1] [i_1]) ? -31131 : -674)), ((min((arr_3 [i_1]), var_9)))))))));
        arr_5 [3] [i_1] = var_4;
    }
    var_20 = -var_10;
    #pragma endscop
}
