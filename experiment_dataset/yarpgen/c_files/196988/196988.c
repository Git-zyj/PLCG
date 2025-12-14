/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((9223372036854775803 ? var_7 : (!var_12))), -1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((!(((31 ? ((((arr_3 [i_1]) > (arr_5 [i_1 + 1] [i_1 + 3] [i_0])))) : ((16383 ? 34 : var_1)))))));
                var_17 = var_7;
            }
        }
    }
    var_18 = ((var_14 ? (((!65507) - var_11)) : var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                var_19 = (min(((18446744073709551615 > (((-(arr_8 [i_2] [i_2])))))), (((((~(arr_1 [i_3])))) && (15728640 || 281474909601792)))));
                var_20 = var_4;
                arr_11 [i_2] [i_3] = (arr_9 [i_2] [i_3]);
                arr_12 [i_3] [i_3] [i_3] = (max((31 - var_4), (((!(((var_9 / (arr_4 [i_2] [i_3])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_6] = (arr_3 [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_21 = (((arr_2 [i_8]) ? 4294967295 : ((-0 ? var_6 : (((max(13, (arr_8 [i_6] [i_5])))))))));
                                var_22 = (((((((var_7 - (arr_25 [i_4] [i_4] [i_5] [i_6] [i_6] [i_7] [i_8])))))) & (((arr_19 [i_5]) ? (arr_2 [i_4]) : ((0 ? var_14 : var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
