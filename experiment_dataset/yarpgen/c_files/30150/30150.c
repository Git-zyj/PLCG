/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-4 + var_5) ? 8913631909316142628 : (~var_7))) * (((((!-7973) < 9533112164393408991))))));
    var_11 = ((var_0 ? (-7248873044239198842 / 102690653) : 2));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((0 < (arr_1 [i_0] [i_0])));
        var_12 = ((23 ? (((arr_1 [i_0] [i_0]) ? 62 : (arr_1 [7] [i_0]))) : ((((arr_0 [i_0] [i_0]) == -22161)))));
        var_13 = var_3;
        var_14 = ((~((10585 ? -10056 : 31645))));
        var_15 = (9533112164393408988 != (arr_0 [i_0] [i_0]));
    }
    #pragma endscop
}
