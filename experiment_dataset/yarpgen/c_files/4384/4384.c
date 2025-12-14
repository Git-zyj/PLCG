/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (arr_0 [i_1] [i_0]);
                arr_5 [i_0] = 18446744073709551615;
                arr_6 [15] &= (!-18446744073709551597);
            }
        }
    }
    var_11 ^= (!7);
    var_12 = -var_5;
    var_13 = ((!(!35)));

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_14 = (((~(~31))));
        arr_10 [i_2 - 1] = ((!(((-(arr_9 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((!(((-(min(10, 0)))))));
        var_15 = (arr_2 [i_3] [i_3]);
        var_16 = (min(var_16, (((~(~1))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_17 = (max(var_17, (arr_2 [i_4] [i_4])));
        var_18 = (min(var_18, (!-102)));
        arr_18 [i_4] [i_4] = (arr_16 [i_4]);
    }
    #pragma endscop
}
