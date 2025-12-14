/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, (arr_1 [i_2])));
                            var_18 += 262143;
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = (max((arr_5 [i_0] [i_0]), 203855040));
                var_19 = ((-832817440 < -107) | (max(((max(var_10, 1508445888))), (arr_8 [i_0] [i_0] [i_1] [i_1]))));
                var_20 += ((21130 ? (arr_4 [i_0] [i_0] [i_0]) : (((arr_8 [i_1] [i_1] [4] [i_1]) ? ((min(15, (arr_6 [i_0] [i_1] [i_1 - 1])))) : (!var_7)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {
                arr_18 [i_4 + 1] [i_4 + 1] = (((arr_16 [i_4 + 1] [i_4] [6]) & ((~((~(arr_17 [i_4 - 1])))))));
                var_21 = ((!((!(arr_14 [i_4] [i_4 - 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 17;i_7 += 1)
        {
            {
                arr_24 [i_7] &= (((((max(var_6, 422187578534982128)) + -203855026)) >= (arr_23 [i_6 - 1] [i_6 + 1])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_32 [i_8] [i_6] [i_8] [i_8] [i_6] [i_6] = ((-((((var_6 - var_3) != (arr_31 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]))))));
                            var_22 = (min((((+(((arr_23 [16] [i_9]) ? 747813523 : 3547153761))))), 1928578239114169685));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_39 [i_6] [6] [i_6] [i_11] = ((((((arr_33 [i_6] [i_6]) ? (((min(34525, (arr_23 [i_6 - 1] [i_7]))))) : (arr_25 [i_6])))) ? (((arr_37 [i_6] [i_6] [i_6] [i_11]) * (arr_26 [3] [i_11]))) : ((((arr_38 [i_7 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]) < (arr_38 [i_7 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                            arr_40 [i_6] = ((-((var_14 * (arr_37 [i_10] [i_6] [i_10] [i_7 - 4])))));
                        }
                    }
                }
                var_23 = (min(var_23, ((((~((~(arr_33 [i_6 - 1] [i_7])))))))));
            }
        }
    }
    #pragma endscop
}
