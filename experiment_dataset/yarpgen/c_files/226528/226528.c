/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_10 = ((((((arr_3 [i_0] [i_0]) ? var_5 : (arr_2 [i_0] [i_1])))) ? (max((min((arr_2 [i_0] [1]), (arr_1 [i_1]))), ((var_6 ? (arr_1 [i_0]) : (arr_0 [i_1]))))) : ((((((var_7 ? 1 : 87))) ? (arr_3 [i_1] [i_1]) : ((-(arr_0 [i_1]))))))));
            arr_4 [i_1] = (arr_0 [i_0]);
            arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
        }

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_11 = ((0 ? 8192 : (3747463743 ^ 1)));
            arr_9 [i_2] [i_0] = (((((((((arr_2 [i_0] [10]) ? (arr_6 [i_0]) : var_9))) ? var_6 : (arr_2 [i_0] [i_2])))) * ((-(var_1 - var_7)))));
        }
        var_12 = (arr_1 [i_0]);
        arr_10 [i_0] [i_0] = ((+(min(1, (((arr_2 [i_0] [i_0]) ? (arr_1 [9]) : 1))))));
    }
    var_13 = (~var_9);
    #pragma endscop
}
