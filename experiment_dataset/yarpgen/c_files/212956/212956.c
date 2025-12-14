/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((-(~var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (((((arr_0 [i_1 - 2] [i_4]) ? (arr_3 [22] [10] [1]) : (arr_0 [i_4] [i_1 - 4])))) ? ((var_14 ? ((var_15 - (arr_0 [i_0] [i_1]))) : var_2)) : (((-1 ? 489826103 : 1))));
                                var_22 = ((+((((arr_10 [i_0] [i_0] [i_2] [1] [i_4] [i_2 + 2] [i_2 + 2]) && (arr_4 [i_3 + 1] [i_2 - 1] [i_1 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= ((var_13 ? ((~(min(var_1, var_3)))) : ((((((var_8 ? var_11 : var_15)) == (((var_19 ? var_5 : var_18)))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_20 [4] [i_6] [4] = (((arr_2 [i_5] [i_6] [i_6]) ? (arr_18 [i_6] [i_6] [i_5]) : (((((max(var_6, (arr_14 [i_5])))) ? (!var_13) : (((arr_4 [3] [i_5] [i_5]) ? (arr_14 [i_6]) : (arr_0 [i_5] [i_6]))))))));
                var_24 *= arr_14 [i_5];

                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_25 = ((((!(((var_7 ? var_12 : var_11))))) ? (((((var_7 ? (arr_9 [i_9] [i_8] [i_6] [i_5]) : (arr_2 [i_5] [i_5] [i_7 + 1])))))) : ((((max(var_12, var_14))) ? (arr_24 [i_6]) : (((arr_10 [i_5] [i_6] [i_6] [i_7] [i_7] [i_7] [i_9]) << (var_14 + 42)))))));
                                var_26 = (((var_9 + 2147483647) << (((((arr_16 [i_6] [i_7 - 1] [i_7 - 2]) + 29432)) - 7))));
                                arr_31 [i_5] [i_5] [i_5] [i_5] &= var_2;
                            }
                        }
                    }
                    arr_32 [i_7] [i_6] [i_5] = var_13;
                    var_27 = var_14;
                }
                var_28 += var_8;
                var_29 = ((((-(arr_14 [i_6])))) * var_12);
            }
        }
    }
    #pragma endscop
}
