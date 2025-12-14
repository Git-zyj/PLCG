/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 = (((arr_10 [i_3] [i_2] [i_1] [12]) + 1));
                            var_13 = ((((((arr_5 [i_2] [i_3] [i_2]) ? 1 : (arr_9 [i_4] [i_2] [i_0])))) && (arr_8 [1] [i_1] [i_3] [i_0 + 1])));
                        }
                        var_14 *= ((-(arr_12 [i_0] [i_1] [i_1] [1] [i_2] [2] [i_2])));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((arr_17 [i_6 - 1] [i_0]) == ((((arr_3 [i_6]) && (arr_14 [i_0] [i_5] [i_6 - 1])))))))));
                        var_16 = (-1 ? (arr_7 [i_0] [9] [i_7] [i_0 + 1]) : ((var_7 ? (arr_0 [i_0 - 1] [i_0 + 1]) : var_7)));
                    }
                }
            }
            var_17 = 2055377450188659171;
            var_18 = 1;
            var_19 = (min(var_19, (((!(((~(arr_2 [i_0] [i_5] [i_5])))))))));
        }
        var_20 *= (((arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2]) & (((!(arr_17 [i_0] [i_0 + 2]))))));
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (arr_6 [10] [10] [10] [1])));
        var_22 = (min(var_22, ((((((((max(1, (arr_7 [i_8] [i_8] [i_8] [i_8 + 2])))) << (((arr_3 [i_8]) - 183))))) || 4294967276)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    {
                        var_23 = (max(var_23, (((((arr_22 [i_8 + 2] [i_8 + 1] [i_11 + 1]) <= (arr_22 [i_8 + 2] [i_8 + 1] [i_11 - 2]))) || 1))));
                        arr_30 [i_8] [i_9] = ((-(((((arr_5 [i_9] [i_10] [i_11]) ? 251 : (arr_6 [16] [i_9] [i_10] [i_11]))) >> (((max(var_5, (arr_22 [i_8] [i_10] [i_11]))) + 5902394803897885490))))));
                    }
                }
            }
        }
        var_24 = (((((((-(arr_12 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8])))) || ((((arr_8 [i_8] [i_8] [i_8] [i_8]) + -1))))) ? -4981282236808645561 : (((arr_13 [i_8 + 2] [i_8 + 1] [i_8 + 2]) * ((((arr_17 [i_8] [i_8]) ? (arr_25 [9] [i_8 + 1] [i_8 + 1] [i_8]) : (arr_20 [i_8 + 1]))))))));
    }
    var_25 = (min((var_7 > var_11), (max((min(var_3, var_5)), var_11))));
    #pragma endscop
}
