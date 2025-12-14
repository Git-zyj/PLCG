/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 = ((((((((arr_1 [i_0 + 1]) != (arr_2 [i_0 + 1])))) >> ((((~(arr_1 [i_0]))) - 13230597628334097592))))) ? (arr_2 [i_0]) : (arr_1 [i_0 - 1]));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_20 = (max((arr_5 [i_1 - 1] [i_0 - 2]), (((!(arr_7 [i_1 + 2] [i_0 + 1]))))));
                            var_21 ^= max(((~(max((arr_5 [i_1 - 1] [i_0]), (arr_3 [i_0] [i_3]))))), (((((~(arr_9 [i_2 - 2] [5]))) <= ((max((arr_13 [i_1] [i_3]), (arr_12 [i_1 + 2] [1]))))))));
                        }
                    }
                }
            }
            arr_14 [i_1] [i_1] = (((((~(((!(arr_12 [i_0 + 1] [i_0 + 1]))))))) ? (arr_3 [i_0] [5]) : (arr_10 [i_1 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 3])));
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (max((((~(arr_7 [4] [i_5])))), (max((arr_9 [i_5 + 2] [i_5 + 2]), ((~(arr_19 [i_5 - 1] [i_6 - 2])))))))));
                var_23 = (max(((~((~(arr_13 [i_5 - 1] [i_6]))))), ((max(((!(arr_9 [i_6 + 1] [i_5]))), ((!(arr_10 [i_6] [i_6 - 1] [i_6] [5]))))))));
                arr_21 [i_6] [i_5 + 2] = (arr_7 [i_5] [i_6]);
                arr_22 [10] = ((~((~(((!(arr_6 [i_5]))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_29 [i_5] [i_8] [i_5] [i_5] = (arr_15 [i_5 - 1] [i_6]);
                            var_24 = (((arr_8 [i_5] [i_5]) || (((~(max((arr_18 [i_5] [i_6 + 1] [i_7]), (arr_12 [i_8 - 2] [18]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
