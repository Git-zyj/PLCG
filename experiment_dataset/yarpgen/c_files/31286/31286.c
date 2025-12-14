/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [23] [i_1 + 2] [i_2] = (arr_3 [12] [i_1 - 1]);
                    arr_10 [i_0 + 1] [i_2] &= var_0;
                    arr_11 [19] [9] [9] [i_2] &= (~115);
                }
            }
        }
        arr_12 [i_0] &= (((arr_1 [i_0 - 2]) && 26));
        var_16 = (arr_2 [i_0 + 1] [i_0 + 1]);
        arr_13 [i_0] [i_0] = ((-3311 ? 9223372036854775807 : 0));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_17 = (((~(arr_5 [i_3] [i_3] [i_3]))));
        var_18 = ((((max((max(-23, 1282682051)), (var_5 | 11645)))) ? ((((var_7 + var_5) ? (1996083508492147796 == var_7) : (arr_3 [i_3 + 1] [23])))) : (((((22 ? 0 : 3012285245))) ? -7 : (min(var_5, (arr_3 [i_3] [i_3])))))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_19 = (max(var_19, (((~(((!(arr_5 [i_4] [i_4 - 1] [i_4])))))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_5 - 1] [i_6] = (min(-var_3, (~1282682051)));
                    arr_25 [i_4] [i_4] = (((max((((1 ? 0 : var_6))), (((arr_20 [i_4] [7]) ^ (arr_14 [i_4] [1]))))) & ((((0 <= (((arr_6 [4] [i_5] [i_5 + 1]) ? (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_5 [i_4 + 1] [i_4 + 1] [i_4])))))))));
                }
            }
        }
    }
    var_20 = var_0;
    var_21 = (((var_13 ^ var_10) ? (((!(!var_7)))) : var_3));
    var_22 = 32767;
    var_23 = (max(var_23, (((min(-var_10, var_3))))));
    #pragma endscop
}
