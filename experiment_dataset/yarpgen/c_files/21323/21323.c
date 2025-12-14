/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((var_8 ? ((var_11 ? var_13 : var_9)) : ((max(var_6, var_9)))));
    var_15 = ((((min(1, 1)))) > var_6);
    var_16 = (((var_5 >> (var_2 - 3852415115))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((arr_1 [i_0]) / var_0))) && (((max(var_0, 1)))))))));
        var_18 = (max(var_18, ((min(-1, ((836275572 ? var_0 : (arr_0 [i_0]))))))));
        arr_2 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_19 -= (min((((-(arr_5 [i_1 - 1])))), (arr_4 [i_1 + 2])));
        arr_6 [i_1 + 1] [i_1 + 1] = 1;
        var_20 = (max(var_20, ((min(var_3, (min((arr_3 [i_1] [i_1 + 1]), var_2)))))));
    }
    var_21 = 1;
    #pragma endscop
}
