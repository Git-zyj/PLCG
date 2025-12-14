/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min((min(var_7, ((var_8 ? var_7 : var_7)))), var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_3 [i_0] [i_1]);
                var_11 = ((((min((min((arr_2 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1]))), (arr_1 [i_0])))) ? (max((min((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_0 [i_0] [i_1]))), (arr_2 [i_1] [i_1] [i_0]))) : (arr_0 [i_0] [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 |= ((((((arr_1 [14]) ? (arr_0 [10] [10]) : (arr_6 [i_1] [12])))) ? (arr_5 [10] [10]) : ((((arr_7 [i_2]) ? (arr_1 [14]) : (arr_6 [i_0 - 1] [4]))))));

                    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_1]);
                        var_13 = (arr_9 [i_0] [i_1] [i_2] [i_3 + 2] [i_1] [i_2]);
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_0] = (arr_7 [i_0]);
                            arr_19 [i_0] [i_2] [i_0] [i_5] = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]);
                            arr_20 [i_5 + 2] [i_0] [14] [i_2] [i_0] [i_0] = (arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_4 - 3]);
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_14 = (arr_15 [i_2] [i_0] [i_6] [i_0] [i_6 - 1]);
                            var_15 = (max(var_15, (((((((arr_10 [i_0 - 2] [i_1] [i_2] [i_2] [i_4] [12]) ? (arr_0 [10] [10]) : (arr_6 [12] [12])))) ? (((arr_1 [14]) ? (arr_6 [i_1] [14]) : (arr_15 [i_0] [14] [i_0] [i_0] [i_0]))) : (arr_1 [14]))))));
                            var_16 = (arr_0 [i_0] [i_1]);
                        }
                        var_17 = (arr_8 [i_0] [i_1] [i_2] [i_4] [i_0] [i_1]);
                        arr_23 [i_0] [i_2] [i_1] [i_0] = (arr_14 [i_0] [i_4]);
                    }
                    for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_18 = (((((arr_11 [i_0] [i_0 - 2] [i_0] [i_7] [i_1] [i_7]) ? (arr_0 [i_0] [i_1]) : (arr_13 [i_0])))) ? (arr_0 [i_0] [i_1]) : (arr_6 [i_1] [i_0]));
                        arr_27 [i_0] [i_0] [i_0] [i_2] [i_7] = (arr_14 [i_0] [i_0]);
                        var_19 = (max(var_19, (arr_0 [0] [i_2])));
                        arr_28 [i_7] [i_2] [i_0] [i_1] [i_0] = (arr_15 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]);
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1] [i_1] [i_2] [i_0] = ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [i_2] [i_8] [i_0 - 2]) : (arr_26 [i_0] [i_1] [i_2] [i_8 - 1])))) ? (((arr_9 [i_0] [i_1] [i_1] [15] [i_2] [i_8]) ? (arr_9 [14] [i_0] [i_2] [i_1] [i_1] [i_0]) : (arr_2 [i_0] [i_1] [i_2]))) : (arr_25 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_20 += (arr_26 [2] [2] [14] [i_8]);
                    }
                }
            }
        }
    }
    var_21 = ((((((((var_1 ? var_7 : var_8))) ? (((var_6 ? var_6 : var_7))) : (max(var_3, var_2))))) ? var_2 : ((max(var_3, var_7)))));
    #pragma endscop
}
