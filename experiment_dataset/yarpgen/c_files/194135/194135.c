/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? (min(var_0, (max(var_1, -1371721686777192056)))) : (min(-755946703934493664, 225504961))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [4] [i_0] [i_1] [i_1] [i_2] [i_3] = (~2129575427);
                            arr_11 [i_1] [i_1] [5] [i_2] [7] = -944529067;
                            var_12 = (max((max((arr_5 [i_0] [i_1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_1] [i_0 - 2]))), ((((arr_7 [i_0 - 1] [i_1] [i_2]) + (arr_7 [i_0 - 2] [i_1] [i_2]))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] = ((((((((~(arr_8 [9] [i_0] [i_1] [9] [i_1])))) ? (arr_0 [1]) : (arr_3 [i_0] [i_1] [i_0])))) ? var_5 : ((((var_5 != (arr_3 [i_0] [i_1] [i_0])))))));
                arr_13 [i_1] = var_0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    var_13 = ((((min((((arr_18 [i_4] [i_4] [i_4]) + -4818)), ((max(47, (arr_4 [i_4] [i_4] [i_4]))))))) ? (((!(arr_16 [i_4])))) : (((arr_8 [i_4] [i_4] [i_4] [1] [i_6 - 1]) + (((!(arr_4 [i_4] [i_5] [i_6]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_14 = (max(var_14, (arr_7 [i_4] [i_7] [i_7])));
                                arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] = (max(((min(((1 ? 398351908 : 1062321306)), ((max(1, var_3)))))), ((~((var_4 ? (arr_28 [i_4] [i_4] [i_4]) : (arr_23 [i_5] [i_5] [i_7] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 += -var_9;
                            }
                        }
                    }
                    arr_46 [i_9] [i_9] [i_9] [4] = (((arr_43 [i_9] [i_9] [i_9] [i_10] [i_11] [i_11] [i_11]) ? ((~((-(arr_43 [i_9] [i_9] [i_9] [i_10] [i_11] [i_11] [i_11 - 1]))))) : ((((-(arr_36 [i_9] [i_10] [i_9] [i_11])))))));
                }
            }
        }
    }
    #pragma endscop
}
