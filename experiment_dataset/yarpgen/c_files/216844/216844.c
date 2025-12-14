/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min((0 / var_1), var_9)), ((min(var_10, var_10)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [13] |= (~9223372036854775807);
        var_17 |= var_11;
        var_18 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((-((((var_6 > (arr_1 [1] [4])))))));
    }
    var_19 = (min((-34 * -23246), (152 || 3729028957)));
    var_20 |= var_4;
    var_21 = (+((((~var_4) > var_6))));
    #pragma endscop
}
