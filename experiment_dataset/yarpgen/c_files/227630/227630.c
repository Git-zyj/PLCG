/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2767441047;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((((arr_2 [i_0]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1])))) ? ((var_0 % (arr_2 [i_1 - 1]))) : (arr_2 [i_0]));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            var_19 = ((~((var_10 ? (arr_1 [i_2]) : (((arr_4 [i_3]) ? 1 : (arr_3 [i_4 - 2])))))));
                            arr_11 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_3] = ((!(((((arr_5 [i_3] [i_1 - 1] [i_0]) | 1))))));
                            var_20 = (min(var_20, ((((arr_9 [11] [i_1] [i_2] [i_1] [0] [i_0] [i_2]) ? 1527526248 : (((1527526248 > -1121192612) ? (arr_0 [i_1 - 1]) : ((1121192612 ? 1527526249 : var_0)))))))));
                            var_21 |= ((((((max(-120, 1))))) ? -1817164078 : 1121192612));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_5] = ((!(arr_2 [3])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((~(arr_1 [i_0])))) ? (arr_13 [i_0] [i_1 - 1] [1] [i_3] [i_5]) : ((14680064 ? (arr_1 [i_0]) : (arr_4 [i_2])))));
                            arr_16 [i_5] [24] = (((arr_4 [i_5 - 1]) == ((((arr_1 [i_0]) ? (arr_0 [i_0]) : -995668013)))));
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_5] = (min(((max((arr_6 [i_0]), 995667985))), (~760626328704421322)));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_22 = var_6;
                            var_23 = 2034746473;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [16] [i_0] = ((((9223372036854775787 ? 2657017933 : var_6)) == 31860));
                            var_24 = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_25 [10] [i_1 - 1] [i_2] [3] [i_7] = ((-((((arr_1 [i_0]) > (arr_22 [23] [i_0] [i_1] [i_2] [i_3] [i_7]))))));
                        }
                        var_25 = (((((650989231 ? 11325030350131945055 : 2767441047))) ? 995667985 : (((!(!2345171128))))));
                        arr_26 [i_0] = ((max(3643978055, (arr_22 [i_0] [i_1] [i_0] [i_2] [i_3] [9]))));
                        var_26 = (min(((-1121192621 ? 1610612736 : 1048575)), ((~((1817164077 ? 64 : -9788))))));
                    }
                    arr_27 [1] [1] = (arr_12 [i_0] [i_1] [i_2]);
                    var_27 *= (arr_19 [i_1 - 1] [i_1] [1] [1] [1]);
                    var_28 = ((!(arr_5 [i_2] [i_1] [i_0])));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_30 [14] [i_1 - 1] [10] = (arr_8 [i_0] [1] [i_1] [10]);
                    arr_31 [i_0] = ((!(arr_12 [i_1] [i_1 - 1] [i_1 - 1])));
                    var_29 = ((((((max((arr_23 [i_0] [i_0] [i_1 - 1] [i_1 - 1]), var_11))) ? var_6 : (arr_0 [i_1]))) >= (arr_5 [i_8] [i_8] [8])));
                    var_30 = (arr_6 [i_8]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            {
                arr_37 [6] = ((((min(2924256639, (arr_12 [i_9] [i_9] [i_10]))))));
                arr_38 [i_9] [i_10] |= 1834062370;
                arr_39 [i_9] [i_9] = (((((arr_23 [i_9] [i_9] [i_10] [i_10]) < (arr_33 [i_9]))) ? (((arr_18 [i_9] [i_9] [i_9] [i_10] [i_10] [i_9] [i_10]) & ((2767441037 ? var_3 : (arr_8 [i_9] [i_9] [i_9] [i_9]))))) : (max((arr_18 [i_9] [i_9] [i_9] [i_10] [i_10] [i_9] [i_10]), (arr_18 [i_9] [2] [14] [i_9] [22] [0] [i_10])))));
            }
        }
    }
    #pragma endscop
}
