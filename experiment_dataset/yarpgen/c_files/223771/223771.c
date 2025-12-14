/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_1;
    var_19 = ((var_16 ? (((((max(var_14, var_9))) & 76))) : ((var_8 & (((4294967294 << (27386 - 27385))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_20 = (((arr_0 [i_0]) - (arr_0 [i_0])));
        arr_3 [6] &= ((+(((arr_0 [i_0]) | var_10))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 |= (((arr_5 [i_1]) % -var_3));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_3] [9] [10] [i_3] = 56297;
                    arr_13 [i_3] = (((arr_1 [i_3]) ? (arr_10 [i_1] [5] [i_1]) : 3349958026634969290));
                    var_22 = (max(var_22, ((max(125, (arr_9 [i_2 + 2] [i_3 + 1]))))));
                }
            }
        }
        var_23 = (max(var_23, ((((min(((((arr_4 [i_1]) + 124))), (arr_5 [i_1]))) / ((((((max(38867, (arr_11 [i_1] [i_1] [i_1] [i_1]))))) * (max((arr_6 [i_1] [i_1] [5]), 1387898304))))))))));
    }
    #pragma endscop
}
