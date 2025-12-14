/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_10 & -13375);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = 6;
                arr_6 [4] [i_1] |= ((-(((arr_3 [i_0 - 1] [i_0 - 2]) ? (arr_3 [i_0 - 2] [i_0 - 2]) : 1920))));
                arr_7 [i_1] [i_1] = 79;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((!(arr_2 [i_0])));
                    arr_12 [i_1] [i_1] = (43 || 29);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] = var_2;
                                arr_19 [i_0] [i_1] [i_1] [12] [i_1] [12] = (arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_28 [i_5] = ((68 ^ (36335 / 190)));
                                arr_29 [i_1] [i_1] [i_6] = ((var_4 << (68 - 39)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_40 [i_8] = ((~(min((min(var_0, (arr_35 [4]))), (arr_36 [i_8] [i_8 + 1] [i_8 + 2] [i_8 + 3])))));
                    arr_41 [i_7] = ((((var_4 ? (((223 ? (arr_31 [i_7] [16]) : (arr_31 [i_7] [i_7])))) : (min(123, (arr_34 [0] [i_8] [7]))))) + ((((!(arr_32 [i_8 + 2] [i_7])))))));
                    arr_42 [1] [i_8] [i_8] [i_8 - 2] |= (arr_34 [i_7] [i_7] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
