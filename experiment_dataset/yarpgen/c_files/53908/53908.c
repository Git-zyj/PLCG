/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 15069160203713791300;
        var_10 |= (arr_0 [i_0]);
        var_11 = var_5;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 = (max(var_12, ((min(((((min(7428839383429047533, 3377583869995760316))) ? (arr_4 [i_1] [i_1]) : 15069160203713791297)), ((((arr_3 [i_1]) ? (arr_3 [i_1]) : var_3))))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] = (arr_5 [i_2 + 2]);
            arr_9 [i_2] [i_2] = -42;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_13 = ((var_0 ? 3377583869995760316 : (((((-(arr_3 [i_3]))) & (((11524 ? (arr_11 [i_1]) : (arr_4 [i_1] [i_1])))))))));
            var_14 ^= (arr_6 [0]);
        }
        var_15 = (max(var_15, 0));
    }
    var_16 = ((((((((min(var_7, 2988054664975674452))) || ((min(228, 248966596))))))) < ((var_8 ? (min(var_6, 4229734774590207184)) : (!var_8)))));
    var_17 = var_3;
    #pragma endscop
}
