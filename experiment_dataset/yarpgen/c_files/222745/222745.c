/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(2015039807802067268, (var_7 + 2015039807802067268))))));
    var_12 = ((var_6 / ((((((-127 - 1) ? 97 : 5931277438056189467))) ? ((var_4 ? var_0 : var_5)) : (min(var_0, var_9))))));
    var_13 &= ((((((min(var_9, var_0))) ? (((var_4 ? var_8 : var_1))) : ((var_1 ? var_8 : var_2)))) == (((var_9 ? ((min(var_8, var_3))) : ((-1804765048 ? var_4 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((var_2 ? var_10 : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((((((arr_9 [1] [i_0] [4] [0] [22]) ? (arr_0 [15]) : var_3)) > (arr_6 [i_0] [1] [i_2 - 1] [1]))) ? (arr_4 [i_0]) : (((((arr_10 [i_0] [1] [3] [i_0]) >= (arr_7 [19] [5]))) ? (((max((arr_3 [20]), (arr_3 [i_0]))))) : var_0)))))));
                            var_16 = (((min(var_2, (arr_8 [i_2 - 1] [i_2 - 1])))) ? (arr_10 [5] [22] [i_2 - 1] [i_2 - 1]) : (((((arr_2 [i_0]) > (arr_0 [1]))) ? ((var_9 ? (arr_8 [10] [10]) : (arr_2 [i_0]))) : ((((arr_3 [22]) ? (arr_5 [1] [i_1]) : var_4))))));
                            var_17 = ((~(arr_8 [i_2 - 1] [i_2 - 1])));
                            var_18 = (arr_0 [i_2 - 1]);
                            var_19 &= (((((-(arr_8 [i_0] [1])))) ? (((arr_3 [i_2 - 1]) & (arr_8 [i_1] [i_3]))) : (min((arr_8 [i_3] [i_0]), (arr_3 [i_1])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_20 -= (arr_10 [0] [0] [6] [6]);
                    var_21 = (max(var_21, ((max((min(1, -2114995891733212112)), 1)))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_15 [i_0] [i_5] [i_0] [i_0] = arr_2 [1];
                    var_22 = (min(var_22, (((((((arr_4 [i_0]) ? ((min(var_7, var_9))) : ((((arr_1 [22]) >= (arr_1 [i_0]))))))) ? var_9 : ((((var_7 != (arr_14 [i_0] [i_0] [i_0]))) ? (arr_14 [i_5] [i_1] [i_0]) : (((arr_6 [i_0] [i_0] [20] [i_0]) - (arr_6 [i_0] [12] [6] [i_5]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
