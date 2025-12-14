/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_7));
    var_14 = ((var_2 << (var_12 - 11115143194898971149)));
    var_15 = ((!((!(((var_3 ? var_9 : var_2)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= ((-((~(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (((+(((arr_2 [i_0] [i_0]) ? var_10 : var_3)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (max(var_17, ((min((~var_11), ((min((arr_5 [i_1]), (min(var_2, var_5))))))))));
        var_18 = (((((~((min(var_5, (arr_7 [i_1]))))))) ? ((-var_10 ? (min(-34909727, 17)) : (arr_1 [i_1] [i_1]))) : (((!(arr_1 [i_1] [i_1]))))));
    }
    #pragma endscop
}
