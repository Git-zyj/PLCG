/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((1217026261 ? var_1 : 181357822), var_7))));
    var_18 = var_6;
    var_19 = ((2955008264988282614 ? 255 : var_8));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 |= (-4196920080654389425 == 10823882657087110118);
        arr_4 [i_0 - 2] = (max(((+(((arr_2 [i_0] [i_0]) ? 7622861416622441497 : (arr_0 [i_0 + 1] [3]))))), 32767));
    }
    #pragma endscop
}
