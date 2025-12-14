/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((max(((min(var_14, var_4))), -15638482015436518503)));
    var_22 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_17, (~-511001077)));
                                arr_13 [i_0 + 1] [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = (((-891384746 - 31280) ? (((min(var_14, 2808262058273033113)) - (((2808262058273033131 ? -17265 : (arr_6 [i_0 - 3] [i_0] [i_0] [i_0])))))) : ((max(0, var_10)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = var_16;
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] [i_5 + 2] = (max(1422128346, 18185));
                    var_24 |= ((!(((var_12 >> (((min((arr_10 [i_1] [i_1] [i_1]), 0)) + 1457139909)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_25 [i_1] [i_0] = (((-31 + 2147483647) >> ((((var_10 ? (((1422128346 + (arr_5 [13] [i_6])))) : ((1422128346 ? 1422128346 : 16198549008957983311)))) - 1422128350))));
                                var_25 += (min(((-((min(var_2, var_13))))), (max((min(var_13, var_7)), (arr_4 [i_0 - 1] [i_5 - 1] [i_5])))));
                                var_26 = (min(var_26, -7734858565692810818));
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_27 = (i_0 % 2 == zero) ? ((((-459825589 + 2147483647) >> (((arr_2 [i_0]) - 55972))))) : ((((-459825589 + 2147483647) >> (((((arr_2 [i_0]) - 55972)) + 22339)))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_28 = (arr_27 [i_0]);
                                var_29 = (arr_2 [i_0]);
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_30 = (min(((((max((-32767 - 1), (arr_17 [i_11] [i_12] [i_13])))) ? (((max(var_6, var_4)))) : var_12)), 1));
                                arr_39 [i_0] [i_0] [i_0] [i_11] [2] [i_13] [i_13] = ((min(var_13, (arr_35 [i_12 + 1] [i_12] [i_12] [1] [i_12] [i_12]))));
                                var_31 = (var_10 + 1073741824);
                            }
                        }
                    }
                    arr_40 [i_0] [i_0] [i_1] [i_11] = -1144293874;
                    var_32 ^= (min(((min(2074985333, 1422128346))), (((!(!var_7))))));
                    arr_41 [i_0] [i_0] = var_12;
                }
                arr_42 [i_0] = ((((arr_9 [i_0 + 1] [i_0] [i_0]) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_9 [i_0 - 2] [i_0] [i_1]))));
                var_33 ^= ((-(((!(arr_34 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
