/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((8 >= 1) - (11 == var_11)))) ? ((((max(14157180367566686460, var_7))) ? (22 - var_5) : var_3)) : ((((!var_4) ? var_8 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((min(234, 1))) & (arr_2 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_14 &= 14157180367566686462;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 += ((48 ? 11995298667934127463 : 187));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_1] = ((((max(3845521653085540975, 14601222420624010641))) ? (((max(14680064, 80)) - (arr_4 [i_0] [i_3 - 2] [7]))) : var_5));
                                var_16 += (((arr_11 [i_0] [0]) ? ((((((-1616599992 ? (arr_9 [i_4] [i_2] [i_1] [i_0]) : var_0)) >= (var_4 | var_2))))) : (min((max(6451445405775424156, 11926323288476914686)), (arr_5 [i_3 - 3] [5] [5] [5])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_17 = ((((arr_9 [i_5] [i_5] [8] [i_0]) >= (arr_9 [i_0] [i_0] [1] [i_5]))) ? ((+(min((arr_6 [i_0] [i_1]), (arr_12 [1]))))) : ((var_7 | (max(var_8, 10403514393602486347)))));
                    var_18 *= (((((arr_14 [i_0] [i_1] [i_5]) || (arr_14 [i_0] [i_5] [i_0]))) ? (arr_14 [i_5] [i_1] [i_0]) : ((((!(arr_14 [i_5] [i_1] [i_0])))))));
                    var_19 = (((!var_10) ? (((~(arr_4 [i_5] [i_1] [2])))) : (((var_6 >= var_8) ? ((((arr_11 [1] [i_0]) ? (arr_3 [i_0] [i_0]) : var_7))) : (min((arr_1 [i_0] [i_0]), var_3))))));
                    var_20 = (max(var_20, 79));
                }
                var_21 = (max(var_21, ((min(((var_3 ? (arr_6 [i_1] [i_0]) : 6168601590918023358)), (((!(((arr_12 [i_1]) || var_1))))))))));
            }
        }
    }
    var_22 += -127;
    #pragma endscop
}
