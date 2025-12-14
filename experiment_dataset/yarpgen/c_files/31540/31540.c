/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((~((75 - ((-74 ? var_7 : var_9))))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(var_19, (((var_10 ? (!33830) : ((~(arr_0 [i_0 - 1] [i_0]))))))));
        var_20 = (((~var_8) ? (arr_0 [i_0 - 2] [i_0 - 2]) : ((73 ? var_13 : var_10))));
        var_21 = (min(var_21, (arr_0 [i_0] [i_0])));
        arr_2 [2] = (arr_0 [i_0] [i_0 - 1]);
    }
    var_22 = (!var_16);
    var_23 = var_0;
    #pragma endscop
}
