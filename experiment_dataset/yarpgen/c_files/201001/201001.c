/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((~(max((arr_3 [6] [6]), (arr_2 [i_0 + 2] [i_0 + 2]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, -576460752303423488));

                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                var_12 = (min((max((min((arr_1 [i_0]), var_6)), (arr_6 [i_0] [i_1] [i_2 - 1] [i_3]))), ((var_3 ? (max(var_1, var_5)) : (min(2588905645, var_9))))));
                                var_13 = 7154014863140511716;
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_14 = (min(var_14, ((-((1706061650 ? var_9 : var_2))))));
                                var_15 |= 9833675657507827899;
                                var_16 = (max(var_16, ((((var_7 || var_7) ? ((((min(var_6, var_7))))) : (((arr_7 [i_5] [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) ? (arr_10 [2] [i_3] [2] [i_1] [i_0]) : var_9)))))));
                                arr_14 [i_0] = (~(((arr_0 [i_0] [i_1 + 3]) * 2103846297477850821)));
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                var_17 &= ((((var_1 ? 33822867456 : var_2))) < ((((((7664447895063964602 ? 10352 : (arr_11 [i_0] [i_1] [i_0] [i_2] [14] [10]))) > (((var_2 ? 2588905646 : -85))))))));
                                var_18 += ((((((84 ? 32 : 2103846297477850821)) ? -var_9 : (1706061650 >= var_2)))));
                                var_19 = ((!(((63 ? 2588905645 : -19333)))));
                                arr_17 [i_0] [i_0] = (arr_4 [i_2] [i_6]);
                            }
                            arr_18 [i_0] [i_0] [i_0] [i_2 + 1] [i_3 + 1] = (((((arr_0 [i_0] [i_0]) * ((1706061650 ? var_3 : -83))))) ? (-85 & var_9) : ((((!(~var_6))))));
                            arr_19 [i_0 - 2] [i_1] [i_2 + 4] [i_0] = 16342897776231700794;
                        }
                    }
                }
                var_20 = (min(var_20, 510));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                var_21 = (max(var_21, -3094825654199119581));
                var_22 -= 2588905645;
            }
        }
    }
    #pragma endscop
}
