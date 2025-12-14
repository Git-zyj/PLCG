/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((-(arr_1 [i_0])))) ? (arr_0 [i_0]) : (~0)));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] = ((!(~var_0)));
            arr_9 [i_0] [i_0] = ((-1 ? ((((((arr_6 [2] [i_1] [i_0]) ^ (arr_0 [i_1])))) ? (arr_1 [i_1]) : ((min(-38, -1))))) : ((min(-1, (arr_7 [i_0] [i_0]))))));
            var_15 |= ((var_3 ? (arr_1 [i_0]) : (((~(arr_2 [i_0] [i_1 + 2]))))));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_16 = -7;
            arr_12 [i_0] [i_0] = -6;
            var_17 += (arr_1 [i_0]);
        }
        arr_13 [i_0] = (((arr_10 [i_0] [i_0]) << (((max(var_0, (~1))) - 1790377800361689631))));
        arr_14 [i_0] [i_0] = ((((((0 ? var_4 : 56)) - (arr_5 [i_0] [11]))) ^ ((min((arr_6 [i_0] [i_0] [i_0]), -1)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] = (24743 != 1);
        var_18 -= ((1 & (arr_15 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_19 = (((((~(arr_19 [i_4] [i_4])))) ? ((~(arr_16 [i_4]))) : (arr_19 [i_4] [i_4])));
        arr_20 [i_4] = (~14838504407764041994);
    }
    var_20 &= var_9;
    #pragma endscop
}
