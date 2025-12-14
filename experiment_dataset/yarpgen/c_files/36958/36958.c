/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [18] [i_0] [18] [9] [9] [14] [7] = (~9223372036854775804);
                                var_16 = ((~((~((~(arr_4 [i_0])))))));
                                arr_12 [i_0 + 1] [17] [i_0] [i_3] = (~((~(arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0] [i_4]))));
                                var_17 -= ((((~((~(arr_4 [3])))))) ? (((((~(arr_7 [i_0])))) ? ((~(arr_2 [i_0]))) : ((~(arr_1 [i_0]))))) : ((~(((arr_1 [11]) ? (arr_3 [7] [7] [i_2]) : (arr_8 [i_0] [i_0] [i_2] [i_3] [i_3]))))));
                                var_18 = (~-32198);
                            }
                        }
                    }
                    var_19 ^= ((~((~(((arr_9 [i_0] [16] [i_1] [i_2] [i_2]) ? (arr_2 [12]) : (arr_0 [i_0])))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 = (max(var_20, (((~((~(((arr_14 [i_5]) ? (arr_13 [i_5]) : (arr_13 [i_5]))))))))));
        arr_16 [i_5] = (((arr_15 [i_5]) ? (((~((~(arr_14 [9])))))) : ((~((~(arr_13 [i_5])))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_6 + 2] [i_7] [22] = ((~(((((~(arr_14 [i_7])))) ? (((arr_20 [i_5] [2] [i_7] [i_8]) ? (arr_21 [i_5] [i_5] [15] [i_8] [i_8 - 2] [i_5]) : (arr_15 [i_5]))) : (((~(arr_24 [i_5]))))))));
                        var_21 = ((~((~(arr_24 [i_6 + 1])))));
                        var_22 += ((~((404553914 ? ((-9223372036854775803 ? 1 : 2504)) : (~-2029017017)))));

                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            arr_29 [i_5] [i_6] [i_6] [i_8] [i_6] [i_5] [i_7] = ((~((~(arr_26 [i_5] [i_6] [12] [i_8] [i_6])))));
                            var_23 |= (arr_20 [i_5] [i_5] [i_7] [i_5]);
                        }
                    }
                }
            }
        }
        var_24 = (min(var_24, (((~((~(arr_22 [i_5]))))))));
    }
    var_25 = (min(var_25, (~-18)));
    #pragma endscop
}
