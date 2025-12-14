/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, (((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 = (var_2 && 0);
            arr_5 [i_0] [10] = 1;
            arr_6 [i_0] = ((~(arr_4 [i_0] [i_0] [i_1])));
            var_15 = (((arr_0 [i_0] [i_1]) << (((arr_0 [i_0] [i_0]) - 52))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 += (arr_1 [i_0] [i_0]);
            var_17 = (min(var_17, (((~((var_4 ? 1 : 1)))))));
            var_18 = (max(var_18, var_12));
        }
        arr_11 [i_0] = (((arr_2 [i_0]) + (arr_1 [i_0] [i_0])));
    }
    var_19 = (min(var_0, var_3));
    #pragma endscop
}
