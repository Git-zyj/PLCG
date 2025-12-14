/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_14 = ((+((((((var_11 ? (arr_9 [i_0] [15] [11] [i_3]) : var_8))) != (arr_4 [i_4]))))));
                                var_15 = (max(var_15, (((((((arr_9 [i_4] [i_3] [i_2 - 1] [i_1]) * (arr_9 [1] [i_1] [i_2 - 1] [i_2 - 1])))) ? (((arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_3]) * (arr_6 [i_0] [i_2 - 2] [i_0] [i_4]))) : (arr_6 [i_2] [i_2] [i_2 + 1] [i_2 - 1]))))));
                                arr_13 [i_0] [i_1] [i_2 - 2] [i_0] [i_3] [i_1] = ((((((arr_0 [i_0]) ? var_12 : var_2))) / (((arr_2 [i_0]) ? ((var_5 ? (arr_4 [i_4]) : (arr_8 [i_0] [i_2] [i_0]))) : ((((arr_5 [i_0] [i_1]) ? (arr_3 [11] [i_1] [11]) : (arr_9 [i_0] [1] [0] [0]))))))));
                                var_16 = (((((arr_10 [i_2 + 1] [i_0] [i_2 + 1] [i_0]) ? (arr_10 [i_2 + 1] [i_0] [i_0] [i_3]) : var_5)) / (arr_10 [i_2 - 2] [i_0] [16] [i_3])));
                            }
                            var_17 = (-((-(arr_7 [i_0] [i_0] [i_0 - 1]))));

                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_3] [i_2 + 1] [i_1] [i_0] = ((-(((!((!(arr_11 [i_0]))))))));
                                var_18 = (max(var_18, ((min(((var_7 ? (((arr_15 [i_0] [i_0] [i_0] [i_0] [17]) + (arr_14 [i_1] [i_3] [i_3] [i_3] [i_3]))) : (((!(arr_16 [i_2] [i_3] [i_2] [i_2] [i_2] [i_0] [i_0 + 1])))))), (((!(arr_4 [i_0 - 2])))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_5] = ((((((max((arr_10 [i_3] [i_0] [i_0] [i_0]), (arr_15 [i_0] [3] [3] [i_0] [i_0])))) <= (((arr_7 [i_5] [i_0] [i_0]) ? (arr_3 [17] [i_1] [i_0]) : (arr_2 [i_0]))))) || (((arr_3 [1] [i_1] [4]) < (!var_12)))));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_19 &= (((((~(arr_21 [i_2 - 2] [i_0 + 1] [i_0] [7] [i_0 - 2] [i_0] [i_0])))) ? (((!(arr_21 [i_2 - 2] [i_0 - 2] [i_0] [i_0] [9] [i_0] [i_0])))) : (((arr_21 [i_2 - 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2]) ? (arr_21 [i_2 - 1] [i_0 - 2] [i_0] [i_0] [i_0] [9] [i_0]) : (arr_21 [i_2 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0] [5] [i_0])))));
                                var_20 = (max(((-(((arr_16 [i_6] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]) ? (arr_9 [i_0] [i_0] [i_2] [i_3]) : (arr_16 [i_1] [i_1] [i_0] [i_0] [i_6] [i_0] [i_2]))))), (arr_16 [i_3] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                arr_24 [16] [16] [i_0] [i_1] [i_0] = (arr_14 [i_0] [i_0] [i_2] [i_3] [i_7]);
                                var_21 = ((((((((arr_6 [i_1] [i_1] [i_3] [i_7]) ? (arr_21 [i_0 - 1] [i_1] [i_2] [i_3] [i_7] [i_2] [i_7]) : (arr_3 [i_1] [i_1] [i_0])))) ? (((var_4 ? (arr_15 [i_0] [i_0] [i_2] [i_3] [i_7]) : var_9))) : (arr_11 [3])))) ? (((-(arr_14 [i_0] [i_3] [i_2 - 2] [i_1] [i_0])))) : (((arr_16 [i_2 - 1] [7] [i_0] [i_0] [i_2] [i_2] [i_2 - 2]) ? var_7 : ((((arr_20 [i_0] [i_0]) | (arr_8 [i_0] [i_1] [i_2 + 1])))))));
                            }
                            arr_25 [i_0] [i_3] [9] [i_1] [i_0] = ((!(((~(arr_14 [i_0] [i_2 - 2] [i_2] [i_2] [i_2]))))));
                        }
                    }
                }
                var_22 = (arr_23 [i_0]);
            }
        }
    }
    var_23 = ((((((-var_2 + 2147483647) >> ((var_1 ? var_5 : var_12))))) ? var_6 : var_6));
    #pragma endscop
}
