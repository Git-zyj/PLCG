/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((3275378226 ? var_10 : 0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (max(((max((arr_11 [i_0]), (!37)))), (((var_6 ? (arr_9 [i_0 + 3]) : var_1)))));
                                var_20 ^= ((!((min((arr_10 [i_0] [i_0 + 1] [i_0 + 1] [10] [i_0]), var_0)))));
                                arr_15 [4] [i_0] [i_0] [i_1] = ((((~(arr_1 [i_0]))) * (((!(arr_1 [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 += (~((var_11 ? (((((arr_21 [11] [11] [i_6] [i_7]) <= (arr_5 [i_1] [14]))))) : (min(3275378226, 1019589069)))));
                                arr_25 [i_0] = -var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_22 = (~45);
                    var_23 ^= (max(72, 196));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_37 [i_8] [i_9] [i_9] = (min(177869495, (arr_26 [i_8])));
                                var_24 = (((arr_29 [3] [i_9] [i_8]) ? (var_16 * var_13) : ((-((max(var_16, var_9)))))));
                                var_25 = ((!((min((arr_32 [i_12]), (arr_32 [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
