/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((var_14 ? 506834145 : var_13))) ? ((var_4 ? var_5 : var_13)) : (((var_1 ? var_4 : var_12))))), var_6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = min(-var_12, (min((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_3 [i_0] = var_10;
    }
    var_16 = (max(var_13, 7664708247755136985));
    #pragma endscop
}
