/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_11 = ((((arr_0 [i_0]) ? 766298516 : (arr_2 [i_0] [i_0]))) <= (arr_3 [i_0] [i_0]));
            var_12 = (arr_2 [i_0] [2]);
            var_13 += (((arr_2 [16] [i_1]) ? (arr_2 [8] [i_1]) : (arr_2 [22] [i_1 - 1])));
        }
        var_14 = (((arr_4 [i_0] [i_0]) ? (((0 ? (arr_3 [16] [i_0]) : (arr_0 [i_0])))) : (arr_3 [i_0] [2])));
    }
    var_15 += (var_6 - var_7);
    #pragma endscop
}
