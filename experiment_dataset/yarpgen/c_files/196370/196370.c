/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (131 == 8851363477396976136)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [5] = ((18446744073709551603 ? 2041650437 : ((0 ? 255 : 10286939524512342655))));
        var_19 = (arr_3 [1]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = ((4294967287 ? ((min(var_12, ((2253316858 ? -7546915320683383896 : var_1))))) : 12235740422189488880));

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            arr_9 [5] [i_1] = 14645230829143241934;
            arr_10 [i_2] [i_1] [i_1] = ((((0 ? -1 : ((1 ? 17 : 1742979418)))) == ((((arr_5 [i_2 + 1] [i_2 - 1]) ? (arr_5 [i_2 - 3] [i_2 - 1]) : 1)))));
            var_21 = ((-(((var_11 * var_0) & ((((var_13 == (arr_1 [i_1] [i_1])))))))));
        }
        var_22 = ((((!(arr_5 [i_1] [1]))) ? ((((((var_7 ? var_13 : var_10))) ? (arr_3 [i_1]) : (~4609434218613702656)))) : ((var_6 ? var_0 : var_3))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [i_3] [12] = ((((min(22, var_6))) ? ((-208902730867227474 ^ (arr_11 [i_3]))) : var_3));
        var_23 = ((~((var_15 ? ((((arr_12 [i_3]) | 0))) : (~var_16)))));
    }
    #pragma endscop
}
