/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, (((45466215 ? -32761 : 32767)))));
        arr_3 [i_0] = (17 == 1);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = (max(var_13, (((var_2 ? (((arr_6 [i_1] [i_1]) % (arr_6 [i_1] [i_1]))) : (((~15) ? (!32762) : 32751)))))));
        var_14 *= ((((((max(3233876055, 1))) ? ((max(-15354, -117))) : (~446370930))) > (((((63 ? -32766 : -32756))) ? (((!(arr_6 [i_1] [i_1])))) : (((arr_6 [i_1] [i_1]) ? (arr_4 [18] [18]) : (arr_6 [i_1] [i_1])))))));
        arr_7 [i_1] = var_11;
        var_15 = ((22457 ? 1 : -3942837575));
    }
    var_16 = ((~((var_10 ? var_8 : var_4))));
    #pragma endscop
}
