/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 *= 196;
        arr_4 [i_0] [i_0] = -10518;
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_14 -= max((((((35 == (arr_5 [i_1] [i_1 + 1])))) * 28)), (((arr_5 [i_1 - 4] [i_1 - 4]) ? (((arr_5 [i_1 - 3] [i_1 - 3]) ^ (arr_6 [i_1]))) : (arr_5 [i_1 - 1] [i_1 - 4]))));
        arr_7 [i_1] &= (min(((((arr_5 [i_1] [i_1]) != -1537074421947716410))), 50));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_15 = (!2700751813);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_16 = ((-41 ? (arr_11 [i_2 - 1] [i_2 + 1]) : (arr_11 [i_2 + 1] [i_2 - 1])));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_2] [3] [i_4] [i_5] = var_0;
                        arr_19 [6] [6] [i_4] [6] [i_4] = ((((1594215492 || (arr_12 [i_4] [i_5]))) ? (arr_8 [i_3]) : (arr_15 [i_2] [i_2 + 1] [i_4] [i_3])));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_23 [i_3] [i_3] [i_3] [i_3] = (9223372036854775805 ? (arr_20 [i_2 + 1]) : (arr_20 [i_2 + 1]));
                        var_17 = ((-103 ? (arr_14 [i_2 + 1] [i_2 - 1]) : (arr_14 [i_2 + 1] [i_2 + 1])));
                    }
                }
            }
        }
        var_18 = (arr_20 [i_2 + 1]);
    }
    var_19 = -1537074421947716413;
    #pragma endscop
}
