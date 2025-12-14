/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 *= ((((var_13 ? (arr_1 [i_0]) : var_10)) / ((var_13 ? (arr_1 [i_1]) : var_8))));
            var_18 = (arr_2 [i_0] [i_0] [i_1]);
            var_19 = ((+(((arr_2 [11] [11] [i_1]) ? (arr_0 [i_0] [i_1]) : var_3))));
            arr_5 [i_0] = (((((var_5 ? (arr_1 [i_0]) : var_12))) ? (arr_0 [i_0] [i_0]) : var_9));
        }
        var_20 = ((-(arr_3 [i_0])));
        var_21 = (((arr_4 [i_0] [23]) ? (arr_2 [i_0] [i_0] [i_0]) : ((var_16 ? (arr_2 [i_0] [i_0] [i_0]) : var_3))));
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (arr_3 [i_2]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_22 += ((!((max((arr_6 [i_2] [i_3]), (arr_0 [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_23 = (min((~var_5), (arr_12 [i_6])));
                            var_24 = (arr_11 [i_6] [i_3] [i_2] [i_4]);
                            var_25 = (arr_3 [i_5]);
                            arr_19 [i_2] [i_2] [i_4 + 2] [i_4 + 2] [i_4] = (((max(1879775060, 2039134407))) ? (((((arr_15 [i_4]) || var_10)) ? ((var_12 ? var_3 : var_7)) : (max(2039134407, 2039134411)))) : var_11);
                        }
                    }
                }
            }
            arr_20 [i_2] [i_2] = ((-(((((arr_6 [i_2] [i_3]) > (arr_7 [i_3]))) ? var_16 : (arr_3 [i_2])))));
            arr_21 [10] [i_2] = (((((arr_17 [i_2] [i_2] [16] [i_3] [i_3]) ? ((var_5 ? var_2 : (arr_7 [i_3]))) : (((var_7 ? (arr_13 [i_2]) : var_7))))) <= var_5));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_28 [i_9 - 1] [i_8] [3] [i_7 + 1] [i_3] [i_8] [i_2] = (((arr_23 [i_7 - 1] [i_7] [i_7] [i_7]) ? (max((arr_14 [i_2] [i_2] [i_3] [i_7] [i_8] [i_9 + 1]), ((((arr_7 [i_3]) != (arr_2 [i_2] [i_2] [3])))))) : (arr_10 [i_8])));
                            arr_29 [i_8] [i_3] [13] [i_8] [i_3] [i_3] = ((+(min((arr_18 [i_7 + 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]), (arr_16 [i_7 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_26 = ((~(((arr_9 [i_2]) ? (arr_14 [1] [i_10] [i_10] [i_2] [i_10] [i_2]) : (((arr_11 [11] [i_2] [11] [i_10]) ? (arr_2 [i_2] [i_2] [i_2]) : var_4))))));
            arr_32 [i_2] [i_2] [i_10] = (max(54724, 11615));
            arr_33 [i_10] = (max((1531105698 >= 9937683171564104157), (max((arr_23 [i_2] [i_10] [i_2] [i_2]), (arr_23 [i_2] [i_10] [i_10] [i_10])))));
        }
    }
    var_27 = ((!((min(var_12, var_14)))));
    #pragma endscop
}
