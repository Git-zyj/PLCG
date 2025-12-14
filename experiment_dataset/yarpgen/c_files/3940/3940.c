/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] |= (((((2854405210 ? (((!(arr_1 [i_0] [i_0])))) : (min(606, 138098280))))) ? -338353830 : 22));
        var_12 -= 338353811;
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_6 [i_1 - 2] [i_1] = var_4;
        arr_7 [i_1] = (max((max(-var_11, (max(0, 43752)))), ((~((var_2 ? var_2 : 1))))));
    }
    var_13 ^= var_5;
    var_14 = (max(((((~var_1) ^ (~var_10)))), var_11));
    #pragma endscop
}
