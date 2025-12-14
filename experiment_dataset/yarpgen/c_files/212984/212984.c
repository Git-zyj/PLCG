/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 205;
    var_21 = 93;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -var_11;
        var_22 = (min((((-(arr_0 [i_0] [i_0])))), var_5));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_23 = (arr_4 [i_1]);
        arr_6 [i_1] = var_1;
        arr_7 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((!(((~(arr_5 [i_1]))))));
    }
    var_24 = var_9;
    #pragma endscop
}
