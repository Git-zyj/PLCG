/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-84424810);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = var_4;
        var_14 = (min(var_14, ((((((((var_9 ? var_7 : (arr_1 [i_0]))) & (((-84424788 & (arr_0 [i_0] [i_0]))))))) ? (((((var_4 ? var_10 : var_7))) ? (var_0 && var_0) : ((var_4 ? var_0 : var_11)))) : (((((84424810 ? var_0 : 84424814))) ? (((arr_1 [i_0]) ? var_0 : var_1)) : (arr_1 [i_0]))))))));
        var_15 = min((((((26555 ? var_2 : -26556))) ? ((~(arr_1 [i_0]))) : (((var_5 ? var_2 : (arr_0 [i_0] [i_0])))))), ((~((var_2 ? -6955134853635213514 : var_4)))));
    }
    var_16 = (max(var_16, ((((~((var_0 ? var_4 : 7650473992454524117))))))));
    #pragma endscop
}
