/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (var_2 - (((max(-3374773246296685743, 40)) - 40)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (max((arr_4 [i_0] [i_0] [i_0]), (((arr_10 [i_3] [i_3] [i_0] [i_0] [i_0] [i_3]) ? ((var_2 >> (-317654137 + 317654167))) : ((max((arr_11 [i_0] [i_0] [i_2]), (arr_2 [i_0] [i_0]))))))));
                                arr_15 [i_1] = min((arr_7 [i_1] [i_1] [i_3] [i_4]), (((arr_4 [i_3 + 1] [i_4 - 2] [i_4 - 2]) ? var_6 : var_1)));
                            }
                        }
                    }
                }
                var_16 = (!(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]));
                arr_16 [i_1] [i_1] [i_1] = (((((~(((arr_8 [i_0] [i_0]) % (arr_8 [i_0] [i_0]))))) + 2147483647)) >> (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 86)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_17 = var_11;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_18 = 1;
                            arr_28 [i_7] [i_7] [i_6] [i_7] = var_13;
                            arr_29 [i_5] [i_5] [i_7] [i_5] [i_5] = (arr_25 [i_7] [i_7] [i_7] [i_7]);
                            arr_30 [i_5] [i_7] [i_7] [i_7] = (var_9 == ((max(3678954877, 9223372036854775783))));
                        }
                    }
                }
                arr_31 [i_5] = ((arr_8 [i_5] [i_5]) ? ((((max((arr_11 [i_5] [i_5] [i_6]), (arr_4 [i_5] [i_5] [i_5])))) ? (min(var_4, (arr_23 [i_6] [10]))) : var_13)) : (((arr_7 [i_5] [i_6] [i_5] [i_5]) ? (arr_13 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] [i_6]) : (arr_11 [i_6] [i_6] [i_5]))));
                arr_32 [i_6] = (min(((((((arr_20 [i_5]) ? var_9 : (arr_18 [i_5]))) >= var_2))), (min(((var_9 ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_2)), (189 <= var_2)))));
                var_19 &= -var_7;
            }
        }
    }
    #pragma endscop
}
