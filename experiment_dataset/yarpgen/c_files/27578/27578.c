/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((32628 ? var_4 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 1] = ((((min(var_6, (((var_0 ? (arr_2 [2]) : (arr_3 [i_0]))))))) ? var_8 : (((arr_5 [i_0] [i_0 + 1] [i_1 - 1]) ? ((max(var_1, 3335449606))) : (((arr_3 [i_0]) ? var_7 : (arr_1 [i_0] [i_0])))))));
                arr_8 [i_0 + 1] [i_1 + 2] = (!3335449606);

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_13 [1] [i_0] [i_0] [i_0] = (!((((arr_10 [i_1 - 1] [i_1] [i_1] [10]) ? (((!(arr_12 [i_1])))) : (arr_2 [i_0])))));
                    arr_14 [i_2 + 1] [15] = ((((((arr_10 [i_0] [i_0 + 1] [i_1 - 2] [i_2]) ? (((arr_4 [3] [3] [3]) ? 0 : var_2)) : var_8))) ? (min(((((arr_3 [i_0]) >= (arr_12 [i_0])))), (max((arr_9 [i_2] [15] [i_1] [15]), var_7)))) : (!var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = ((min((arr_1 [i_1] [i_2 + 1]), (arr_1 [i_1 + 1] [i_0 + 1]))));
                                arr_21 [i_3] = (arr_17 [i_3]);
                            }
                        }
                    }
                    arr_22 [i_0] [i_2] = var_9;
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_31 [i_7 - 1] [12] [i_7] [i_1] [i_0 + 1] = (arr_18 [i_0] [i_5] [i_7 + 1]);
                                arr_32 [i_0] [i_1] [i_7] [i_6] [i_7] = 7853360970982878801;
                            }
                        }
                    }
                    var_13 = (min(var_13, var_3));
                    var_14 = (min(var_14, (((((-var_7 >= (arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? var_9 : (((((max((arr_23 [i_0] [i_0]), var_9))) ? 56626 : (((-2147483647 - 1) ? (arr_11 [i_5] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_5])))))))))));
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_39 [i_9] = ((~(((arr_23 [i_0 + 1] [i_1 - 1]) ? 7758727426812730516 : (arr_3 [i_1 + 2])))));
                            var_15 = (((var_5 == (arr_19 [i_9] [i_0 + 1] [i_0 + 1] [i_1 + 1]))));
                            var_16 = (arr_0 [i_8]);
                            arr_40 [i_0 + 1] [3] [i_8] [3] = (~(max((min(var_1, (arr_3 [i_8]))), ((max(32628, var_10))))));
                        }
                    }
                }
                var_17 = (max(var_17, -10184));
            }
        }
    }
    var_18 = ((var_4 == ((((~var_10) ? var_2 : var_2)))));
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 16;i_12 += 1)
            {
                {
                    var_19 = 7758727426812730538;
                    var_20 = (min(var_20, (arr_24 [i_10])));
                }
            }
        }
    }
    #pragma endscop
}
