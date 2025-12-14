/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ^ ((~(32753 && 2663456350)))));
        arr_3 [i_0] [i_0] = (~var_5);
        var_10 = (((((arr_0 [i_0]) ? var_4 : var_4)) >= (((var_1 && var_1) + var_8))));
    }
    var_11 = (863522584 * -32);
    var_12 = (!var_8);

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_0;
        arr_7 [i_1] = ((((((min((arr_4 [i_1]), var_1)) ^ (((4294967295 >> (41689 - 41687))))))) ? (!-4294967295) : var_5));
        arr_8 [i_1] = (max((!1), ((var_8 && (((arr_4 [i_1]) <= (arr_5 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 = -var_8;
        arr_13 [i_2] = ((-32 * (arr_11 [i_2] [i_2])));
        var_14 = ((arr_11 [i_2] [i_2]) << (var_6 - 14641));
    }
    #pragma endscop
}
