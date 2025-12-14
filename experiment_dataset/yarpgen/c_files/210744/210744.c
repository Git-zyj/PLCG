/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [3]);
        arr_4 [i_0] = ((var_8 == (arr_2 [i_0] [i_0 - 3])));
        arr_5 [i_0] |= ((~(arr_0 [i_0 + 1])));
        arr_6 [i_0] [i_0] = ((~(arr_1 [i_0])));
    }
    var_19 = ((((((max(var_9, var_13))) << (var_5 - 385841399)))) / var_3);
    var_20 = (var_3 <= var_10);
    #pragma endscop
}
