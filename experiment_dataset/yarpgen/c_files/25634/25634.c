/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(var_14, 0)))));
    var_21 = (min(var_6, (~-var_19)));
    var_22 = var_16;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_23 = (min(var_23, ((((-((-(arr_0 [i_0] [i_0])))))))));
        var_24 -= ((-((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_2] = (((arr_6 [3] [i_2]) <= (arr_6 [i_1] [i_2])));
            arr_9 [9] [i_1] = (((3564387516 <= var_5) ? ((1 >> (((arr_5 [i_1]) - 74)))) : (arr_5 [i_1])));
        }
        var_25 ^= ((((((arr_4 [i_1]) ? (arr_5 [0]) : 17012))) ? (arr_1 [i_1]) : (1537400254212632028 ^ 3584)));
        arr_10 [i_1] = ((!(arr_3 [i_1])));
    }
    #pragma endscop
}
