/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((((var_2 ? (~1) : -116))) ? var_5 : ((((arr_2 [i_1 - 3]) / (arr_2 [i_1 + 1]))))));
                var_12 ^= -1897;
                var_13 = ((((-(arr_0 [i_1 - 1])))) ? ((((arr_0 [i_1 + 1]) != (arr_0 [i_1 - 1])))) : ((((arr_0 [i_1 + 1]) && 15803485124520599411))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                arr_13 [2] [i_3] [i_3] = ((((1896 << (3010276232812045916 - 3010276232812045903))) & (arr_0 [i_2])));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_20 [i_5] [6] [9] [i_2] = var_6;
                        arr_21 [i_3] [i_4] [i_5] = ((~(((arr_12 [i_2] [i_3] [i_3]) ? var_3 : var_5))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        var_14 = 937143783;
                        arr_24 [i_6] [3] [i_6] = var_3;
                    }
                    arr_25 [i_2] [i_3] [1] = (~15803485124520599411);
                    var_15 ^= 92;
                    var_16 = (((-1870270860 - 109) <= -var_9));
                    arr_26 [i_2] [i_3] = ((((~(arr_11 [i_2 - 2] [i_2 - 2]))) + ((-(arr_4 [i_3 + 1])))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_17 = ((((((arr_23 [i_3 - 1]) << (((arr_23 [i_3 - 1]) - 94))))) && (((-(arr_23 [i_3 - 1]))))));
                    arr_30 [6] [i_3] = (arr_19 [i_2] [9] [i_3 + 4] [i_3 + 4]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_36 [i_2] [i_2] [i_7] [i_2] [i_2] = (((arr_5 [12] [8] [5]) - ((~(~937143783)))));
                                var_18 = ((((!(arr_7 [10] [10] [i_3 + 2]))) ? (arr_17 [i_2 - 2] [i_3 + 2] [i_3 + 2]) : ((((arr_7 [6] [i_3] [i_3 + 4]) && (arr_18 [i_3 - 2]))))));
                                arr_37 [i_2] [i_3] [i_7] [i_3] [i_9] = (max(((59036 - (186408969 / -1351315116))), (min(-1, (!var_6)))));
                            }
                        }
                    }
                    arr_38 [i_7] [i_3] [i_2] = (((((2643258949188952204 ? -2975 : ((var_0 ? (arr_27 [i_3] [i_3]) : (arr_34 [10] [10] [6] [5] [i_3] [i_3] [3])))))) ? (!5025972741653909358) : (((arr_22 [6] [i_2] [i_3 - 2] [4] [i_7]) ? (arr_7 [i_2 - 1] [i_3 + 4] [i_7]) : 78))));
                    var_19 ^= -435607242;
                }
                arr_39 [i_2] [i_3] [i_2] = (var_5 ^ (((arr_27 [i_3 - 1] [i_3 - 1]) ? (arr_27 [i_3 + 3] [i_3 + 3]) : (arr_27 [i_3 + 2] [i_3]))));
            }
        }
    }
    #pragma endscop
}
