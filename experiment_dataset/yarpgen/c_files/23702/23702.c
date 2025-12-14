/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (18446744073709551609 & 1);
        var_20 = (((12428 & var_5) != ((var_18 - (arr_0 [i_0 + 3])))));
        var_21 = (var_12 << 0);
    }
    var_22 = (((30098 << (5757376281101210500 - 5757376281101210493))));
    var_23 = var_7;
    var_24 = ((var_18 ? var_17 : var_7));
    var_25 = ((((var_4 % var_8) ? var_15 : var_12)) | var_5);
    #pragma endscop
}
