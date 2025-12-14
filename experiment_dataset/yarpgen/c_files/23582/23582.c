/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, var_7));
    var_11 = ((var_8 || ((max(((1 ? 7220136705049563455 : 35873)), var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    arr_9 [i_0] [2] [i_0] = ((-(!58741)));
                    var_12 = var_1;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] = var_4;
                                var_13 = (max(var_13, ((((arr_0 [i_0] [4]) ? (((((max(-64, var_7))) * 6794))) : (((arr_0 [i_4] [6]) * (((arr_12 [i_1] [i_1] [i_1] [i_5 - 1]) ? (arr_3 [i_0]) : (arr_8 [i_0] [0] [i_0] [i_0]))))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (((min((max(var_5, (arr_3 [i_4]))), (((arr_3 [i_3]) ? (arr_6 [i_0] [i_0]) : var_1)))) / ((max((arr_11 [i_0] [i_0] [i_0] [i_1 + 1]), (arr_11 [8] [i_0] [i_0] [i_1 + 1]))))));
                            }
                        }
                    }
                    var_14 = ((((min(((((arr_16 [i_1] [i_3]) - (arr_8 [i_3] [i_0] [i_0] [i_0])))), (((arr_7 [i_0] [i_1] [i_1]) ? var_4 : (arr_8 [i_3] [i_0] [i_0] [i_0])))))) ? ((((arr_16 [i_1 + 1] [i_1 - 1]) >= (arr_16 [i_1 - 1] [i_1 - 1])))) : (arr_11 [i_0] [i_0] [i_1] [i_0])));
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] = (((-8519300168780324527 >= 63) ? var_5 : (min(var_2, (arr_13 [i_0] [i_1 + 2])))));
                    arr_23 [i_0] [i_1] [i_0] = (((((arr_19 [1] [i_0] [i_1 + 2]) ? var_6 : var_5)) >> var_6));
                    var_15 = ((((min(((5137083760439259546 ? -707326927 : 0)), ((((arr_21 [i_0] [i_1] [i_6 + 1] [i_0]) > var_0)))))) | ((((((arr_7 [i_6] [i_1 + 1] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : var_3))) ? (((arr_21 [i_0] [1] [i_6 + 1] [i_0]) ? var_9 : (arr_6 [i_0] [i_0]))) : (((var_5 | (arr_0 [i_0] [i_0]))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_26 [i_0] = (arr_20 [i_1 + 2] [i_1 + 2] [i_1 + 2]);

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_16 = var_7;
                        var_17 = (((arr_4 [i_0] [i_1 + 1]) == (arr_4 [i_0] [i_1 - 1])));
                    }
                }
                var_18 = (arr_13 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
