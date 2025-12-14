/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((54 ? (max((arr_0 [1]), var_3)) : ((((!(arr_3 [i_0] [i_0])))))))) ? (((-(arr_3 [i_0] [i_0])))) : (((-54 > 6143338677150719989) ? 281474976710655 : -51)))))));
        arr_4 [1] = ((((((arr_1 [i_0]) / (arr_3 [i_0] [i_0])))) ? (((!(arr_3 [i_0] [i_0])))) : var_14));
        var_19 = ((var_15 <= ((-(50 - 2359)))));
    }
    var_20 = ((!(((((max(31, 54))) ? (((var_4 ? 3659487923 : 12972))) : (max(var_16, var_10)))))));
    var_21 = -55;
    #pragma endscop
}
