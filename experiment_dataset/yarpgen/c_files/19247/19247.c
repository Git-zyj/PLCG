/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 -= (((max(var_18, (min(var_4, (arr_3 [i_2] [i_3] [i_2]))))) ? 116 : (arr_5 [i_0] [i_1] [i_1])));
                                arr_11 [i_3] [i_3] [1] [i_1] [i_3] = (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3] [1]);
                                arr_12 [i_4] [i_3] [6] = 233;
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] [11] &= ((((((~(arr_7 [i_1] [i_2])))) ? (arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 2]) : (arr_9 [i_2] [13] [i_1] [i_0] [i_0 + 3]))) >= ((~(arr_0 [i_0 + 3]))));
                    var_21 = (max(var_21, ((((arr_0 [i_1]) ? (arr_0 [i_2]) : var_19)))));
                }
                var_22 *= ((var_1 ? 1 : ((((~(arr_0 [i_0])))))));
                var_23 = (((((var_14 ? 240 : 1))) - ((((!var_6) || (!var_2))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_24 = ((-(arr_15 [i_5])));
                                var_25 = 26;
                                arr_31 [i_5] [1] [i_5] [i_5] [i_5] [i_9] = ((~((max(((!(arr_22 [i_9] [i_9] [i_9] [i_9]))), (arr_6 [i_5]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_36 [i_5] [i_11] [i_7] [i_6] [i_7] [i_5] [i_7] = ((((0 ? var_15 : var_15)) * var_10));
                                arr_37 [i_5] [i_10] [i_5] = ((+(((((arr_1 [i_5]) ? (arr_4 [i_6] [i_7] [i_11]) : 241))))));
                                var_26 *= ((~((var_1 ? (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_15 [i_7])))));
                                var_27 = (arr_30 [i_5] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
