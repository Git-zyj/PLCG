/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_16 ? (((-((var_19 ? 6955873920486190306 : var_14))))) : (min(var_19, var_9))));
    var_21 |= (min(((((var_8 - var_12) >= (6955873920486190306 - var_2)))), (((((var_12 ? 0 : var_11))) ? 6955873920486190306 : var_10))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_22 ^= ((6955873920486190325 ? 0 : 6955873920486190300));
        arr_4 [i_0] [i_0] = ((1 && (arr_1 [i_0])));
        arr_5 [i_0] [8] = ((((arr_1 [i_0]) ? -17 : 21437)));
        arr_6 [i_0] = (arr_2 [i_0]);
    }
    var_23 = var_13;
    #pragma endscop
}
