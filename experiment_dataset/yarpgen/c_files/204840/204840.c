/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((~var_17), var_17))) / ((((var_1 ? var_11 : var_15)) + ((var_11 ? var_2 : var_15))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = (max(var_5, (arr_7 [3])));
                            arr_12 [i_0] [i_0] [i_2] = ((~((var_17 ? (min(var_13, var_18)) : ((min((arr_8 [i_0] [i_1] [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_0]))))))));
                        }
                        for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0] [i_2] = (max(var_17, (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1])));
                            arr_16 [i_0] = (var_15 & var_1);
                            var_20 = (min(var_20, var_12));
                            var_21 = 2;
                        }
                        for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] = (max((((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_0] [i_0]) / var_4)), ((max((arr_6 [i_0] [i_6] [i_6] [i_6] [i_6 - 1] [i_6]), (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_0] [i_6]))))));
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_1] = var_1;
                        }
                        var_22 ^= (max((((((((arr_17 [i_2] [4] [i_2] [i_1] [7]) & 137170518016))) ? (((arr_14 [i_3] [i_1] [i_2] [i_3] [i_0]) ? (arr_9 [1] [1] [i_1] [i_2] [i_2] [i_3] [i_2]) : var_12)) : (((var_10 ? var_8 : 25845)))))), ((((max(var_6, (arr_13 [i_2] [i_2] [i_2] [i_2] [4])))) ? (var_15 ^ var_9) : (arr_10 [i_0] [7] [i_0] [7] [i_0])))));
                        var_23 = (min((((max(var_1, var_14)) + (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-(((arr_6 [i_0] [i_1] [1] [i_3] [i_0] [1]) ? (arr_13 [i_0] [i_1] [i_1] [i_1] [5]) : var_4))))));
                        arr_21 [i_0] = ((((-25815 ? (arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) : var_0)) % (min(var_18, ((~(arr_5 [i_2] [i_2] [i_2])))))));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_0] [3] [3] [3] [i_7] = (~var_11);
                        arr_26 [i_0] [i_0] [i_0] [i_7] = (((arr_18 [i_0 + 1] [i_1] [i_1] [i_1] [i_1]) || (arr_0 [i_0])));
                    }
                    var_24 -= (min((arr_22 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0]), (arr_14 [i_2] [i_1] [i_1] [i_2] [2])));
                }
            }
        }
    }
    var_25 = (min((min((!var_13), (var_0 % var_1))), (((!(((var_10 ? var_11 : 0))))))));
    var_26 = var_2;
    #pragma endscop
}
