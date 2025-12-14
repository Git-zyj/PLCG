/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= -var_1;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_17 += ((402653184 ? (((((-5930975868691582272 ? 188 : (arr_1 [i_0])))) ? ((max(200, (arr_0 [i_0])))) : (5930975868691582272 + 255))) : ((min(139, var_15)))));
        var_18 = (arr_0 [i_0 - 1]);
    }
    var_19 *= (((((var_14 >= 151461773) && (((var_4 ? var_6 : -1343483856892121480))))) ? var_12 : -1343483856892121479));
    var_20 = var_9;
    #pragma endscop
}
