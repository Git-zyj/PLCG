/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = var_6;
    var_22 &= 63625;
    var_23 = (min(var_23, var_7));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_24 = (~-11673);
        var_25 = (max(var_25, ((((((~11688) ? var_12 : var_19)) == -53863)))));
        var_26 &= ((((((~(((arr_2 [i_0]) ? 53839 : 53844)))) + 2147483647)) >> (((max((42824 > 11673), (((arr_1 [14]) - 665648758)))) - 3629330708))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = 46822;
        var_27 = (min(var_27, (((!(((282308123 ? 2995770436 : 3911533778230919438))))))));
        arr_8 [i_1] &= ((56430 % (arr_3 [i_1 - 3])));
    }
    #pragma endscop
}
