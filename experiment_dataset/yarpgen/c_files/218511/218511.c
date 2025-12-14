/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 += ((((((arr_0 [i_0 - 2] [2]) - (arr_0 [i_0 - 1] [i_0])))) ? (max(((max((arr_2 [i_0 + 2] [i_0 + 1]), (arr_1 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [11] [i_0]))))) : (((arr_1 [i_0] [4]) ? (arr_0 [18] [i_0]) : ((((arr_1 [i_0] [i_0]) == (arr_2 [i_0 + 3] [i_0]))))))));
        var_12 = ((~(((((arr_1 [i_0] [i_0]) == (arr_2 [i_0] [i_0]))) ? ((~(arr_2 [i_0] [i_0]))) : (arr_0 [i_0] [i_0 + 2])))));
        arr_3 [i_0 + 3] = (min((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 3] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 3]))), (arr_0 [i_0 - 2] [i_0 + 1])));
    }
    var_13 *= var_4;
    #pragma endscop
}
