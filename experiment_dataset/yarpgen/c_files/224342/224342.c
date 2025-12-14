/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 54650;
    var_18 = ((-((((var_6 ? var_7 : var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = (min(var_19, ((((arr_4 [21]) >= (((arr_4 [i_1]) ? (arr_6 [i_0] [i_1] [i_2]) : -38)))))));
                    var_20 = (((arr_3 [9] [i_1] [1]) ? (min(var_8, (arr_5 [i_0] [i_0]))) : ((((arr_4 [i_0]) << (((arr_0 [i_0] [i_0]) - 14728)))))));
                }
                var_21 += (max((((arr_2 [i_1] [i_1]) ? -36 : (arr_6 [i_0] [i_1] [i_0]))), (max((!17986), ((14015199396652002633 ? (arr_4 [4]) : var_4))))));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_22 *= ((14015199396652002643 != (14015199396652002633 / var_11)));
                                arr_14 [i_0] [i_1] [i_1] = ((((max((arr_13 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_3 + 1] [i_3 + 1]), (arr_10 [i_4] [i_4 + 1] [i_3 - 1] [i_1])))) ? ((max((arr_9 [i_3] [i_3 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3] [i_4]), (!var_4)))) : (~18307532659423180609)));
                                var_23 = (min(var_23, ((((((-(max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), var_4))))) ? (((((max((arr_4 [i_3]), (arr_13 [i_0] [i_0] [i_3] [i_0] [i_5])))) ? var_2 : 4174813119))) : (((max(14015199396652002633, (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4]))) ^ (((789102626218127978 ? var_14 : 17723))))))))));
                                var_24 = (max(var_24, (((((((arr_12 [13] [13] [i_1] [i_1] [i_5]) ? (((arr_1 [i_0]) ? var_8 : 2027248355)) : (((arr_12 [i_5] [i_0] [i_3 - 1] [i_1] [i_0]) ? (arr_4 [i_0]) : 35454))))) ? ((((var_15 < (max((arr_13 [i_0] [i_0] [i_0] [i_0] [19]), 2624004369142749956)))))) : ((30857 ? ((max(2027248348, (arr_8 [10] [i_1] [i_3])))) : var_2)))))));
                            }
                        }
                    }
                }
                var_25 = (max((arr_12 [17] [i_1] [i_0] [i_0] [i_0]), ((((var_11 + 2147483647) >> ((((-(arr_4 [i_0]))) + 16287)))))));
            }
        }
    }
    #pragma endscop
}
