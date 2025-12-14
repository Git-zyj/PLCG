/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 12;
    var_12 = (min(var_12, ((((!5848) ? var_10 : (!-6))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = 2048;
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_14 = (min(var_14, (((~((((10 ? var_4 : -2)))))))));
    }
    var_15 = (min(var_15, (!var_5)));
    #pragma endscop
}
