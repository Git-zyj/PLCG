/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_10, ((48859 << (-var_7 + 160)))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_14 = var_7;
        arr_3 [i_0] [i_0] = (((((-(arr_2 [i_0 + 1])))) ? (((!(arr_2 [14])))) : ((208 ? (arr_1 [i_0]) : var_12))));
        var_15 -= ((((max((arr_2 [1]), (((arr_1 [10]) & 0))))) ? ((((~var_9) > (225 ^ -2267213696719763846)))) : ((var_2 - (((var_6 && (arr_0 [6]))))))));
    }
    #pragma endscop
}
