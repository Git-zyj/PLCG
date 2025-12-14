/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_7 [1] [i_1] [i_1 - 2] = ((9528879345993166794 ? (-127 - 1) : 0));
            var_17 = (arr_3 [i_1 - 1] [0]);
        }
        var_18 = ((6 ? (((!(arr_4 [i_0] [i_0] [i_0])))) : (arr_4 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = ((~(arr_10 [i_2])));
        arr_12 [i_2] = (((arr_6 [i_2] [i_2] [i_2]) ? (arr_6 [i_2] [i_2] [i_2]) : (arr_5 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_20 = 1;
                        var_21 = (min(var_21, 2391258312955574555));
                    }
                }
            }
        }
    }
    var_22 ^= ((2022339314 ? 31 : -2022339315));
    #pragma endscop
}
