/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = var_7;
        var_15 = var_13;
        arr_2 [i_0] = (max((min(-var_0, var_7)), (((!((((-127 - 1) - 812085030))))))));
        var_16 += ((+(((!812085030) ? (var_9 || 0) : ((max(var_13, (-32767 - 1))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = var_5;
        var_18 |= (min((arr_4 [i_1]), (max(var_6, (min(26985, (arr_3 [i_1])))))));
    }
    var_19 = var_11;
    #pragma endscop
}
