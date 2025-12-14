/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(var_0, ((7414283813520650090 ? 3330842441 : var_10)))), (((((60593 ? var_1 : 41379))) % (var_1 + var_2)))));
    var_20 = ((((((48733 ? var_16 : var_17))) ? var_14 : var_13)) / (((-((var_6 ? var_2 : 61348))))));
    var_21 = ((var_8 != ((~(!var_18)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((~(var_8 + 16501553595670689539)));
        var_22 &= ((((((((arr_1 [i_0]) ? 7414283813520650070 : var_9)) + var_12))) || ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
    }
    #pragma endscop
}
