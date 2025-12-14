/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (max((((arr_1 [i_0]) ? (((arr_2 [i_2] [i_1] [i_0]) << (((arr_3 [i_0] [i_0]) + 28)))) : ((min(1, 1))))), (arr_4 [i_0])));
                            arr_8 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = -1;
                        }
                    }
                }
                var_15 = (arr_0 [i_1]);
                var_16 = (arr_6 [i_0] [i_1 + 1] [i_0] [i_1] [i_1] [i_1]);

                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    var_17 = (((((((((arr_7 [i_0] [i_0] [i_4] [i_1] [i_0] [9]) ? (arr_1 [i_0]) : (arr_3 [i_1] [i_4 + 3])))) ? (arr_2 [i_1 + 1] [i_1] [i_1 + 1]) : (((arr_6 [i_0] [i_0] [i_0] [i_1 + 1] [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [3] [i_0] [i_0])))))) ? (!0) : (((((0 ? (arr_4 [i_0]) : (arr_0 [i_4])))) ? (((arr_7 [i_0] [i_0] [i_1] [1] [i_4 + 2] [1]) ? (arr_4 [i_0]) : (arr_4 [i_0]))) : (arr_3 [7] [7])))));
                    var_18 = (((arr_2 [i_0] [i_4 + 3] [i_1 + 1]) >> (arr_6 [7] [i_1] [i_0] [i_1] [i_1] [9])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] = (+(min((((arr_2 [i_6] [2] [i_4 - 1]) * (arr_15 [i_0] [i_1 - 1] [i_4] [i_5] [i_4]))), (((arr_13 [i_0] [i_0] [0] [i_0] [i_6]) ? (arr_0 [i_5]) : (arr_14 [i_5] [i_1] [2] [i_1] [i_6] [6]))))));
                                var_19 -= ((((((arr_14 [i_4] [6] [i_4] [i_5] [i_5 + 2] [i_4]) ? (arr_14 [6] [i_0] [i_4] [i_5 + 2] [i_5 + 2] [1]) : (arr_14 [i_0] [i_0] [i_0] [i_5] [i_5 + 2] [i_6])))) ? (arr_15 [i_0] [1] [i_0] [i_5] [i_0]) : (arr_11 [4] [4] [i_4] [i_4 + 3])));
                                var_20 = (max(var_20, (((((((arr_14 [6] [i_1] [i_1 - 1] [i_4 + 2] [i_5 + 2] [i_6 - 1]) ? (arr_14 [i_0] [i_1 - 1] [i_1 + 1] [3] [4] [i_6]) : (arr_13 [i_0] [i_1 - 1] [i_4] [0] [i_6])))) ? ((min((arr_13 [i_0] [i_1] [i_4 + 3] [6] [i_0]), (arr_14 [i_0] [i_1] [i_4] [i_5] [i_0] [i_4])))) : (((arr_6 [i_0] [i_1] [0] [i_5 + 1] [i_6 + 1] [i_1]) ? (arr_6 [i_6 - 3] [i_5 - 1] [6] [6] [i_0] [2]) : (arr_6 [i_6] [4] [8] [i_6 + 1] [i_6 - 3] [i_6]))))))));
                                var_21 = ((((((arr_6 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0]) ? (((!(arr_5 [i_0] [i_0] [8] [i_0])))) : (arr_13 [i_6] [i_6] [i_6 + 1] [i_0] [i_6])))) ? ((max(((min((arr_15 [i_0] [i_1] [i_1] [i_5] [i_6 + 1]), 1))), (arr_4 [i_6])))) : ((((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((((var_6 ? var_9 : var_9))) ? var_2 : -962906634)) > var_3);
    #pragma endscop
}
