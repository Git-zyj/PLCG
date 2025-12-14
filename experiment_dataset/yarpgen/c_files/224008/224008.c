/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] &= 18446744073709551615;
        var_12 = var_1;
        arr_5 [i_0] [i_0] &= arr_1 [i_0];
        var_13 ^= var_11;
    }
    var_14 = var_11;
    var_15 = (min(var_15, ((11787468045307805906 ? var_5 : 18446744073709551602))));
    var_16 = var_1;
    var_17 = (13066607065380707723 ? (((4898958978022307136 - 8814057608447242274) ? var_11 : -var_7)) : ((~(2134790348063239267 * 648023993565067269))));
    #pragma endscop
}
