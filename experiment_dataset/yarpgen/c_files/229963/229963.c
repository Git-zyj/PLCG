/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((min(6377, (((arr_0 [i_0]) ? 6381 : -5161147934891575667))))) ? (arr_1 [i_0]) : (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = (arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (((((((max((arr_1 [i_0]), (arr_2 [i_2])))) ? ((59158 ? var_4 : 6370)) : 59158))) && ((((((var_11 ? (arr_5 [i_1] [i_2]) : 135))) ? (((arr_4 [i_0 - 1] [i_1] [i_2]) ? 59166 : (arr_4 [14] [i_1] [i_0]))) : (arr_7 [i_0] [i_0]))))));
                    var_18 = (min((min((arr_8 [i_0] [i_0 - 1] [i_0] [i_0 - 1]), (arr_4 [i_2] [i_1] [i_0]))), (min(-990073393, (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_1])))));
                }
            }
        }
        var_19 = -5161147934891575667;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_20 = (arr_9 [i_3 + 1]);

            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_21 = 6377;
                arr_17 [i_3] [i_4] = 1864682665;
            }
            for (int i_6 = 4; i_6 < 20;i_6 += 1)
            {
                var_22 = (((var_1 ? (arr_12 [11] [i_4] [i_6]) : (arr_7 [i_6] [i_4]))));
                var_23 = ((((((-(arr_5 [17] [i_3]))))) + ((((min(-1, (arr_12 [i_3 - 1] [i_3 - 1] [i_6])))) ? (arr_11 [2] [2]) : 1))));
                arr_20 [i_6] [i_3] = 1;
                arr_21 [i_3] [i_4] [i_6 + 1] [i_6] = (min((arr_16 [i_6 - 4] [i_4] [i_3] [i_3]), (arr_15 [i_6 - 3] [i_3 - 1])));
            }
            arr_22 [i_4] = ((!(((var_1 ? (arr_18 [i_3 - 1] [i_3 + 1]) : ((var_13 ? 59174 : var_7)))))));
            var_24 = var_5;
        }
        var_25 = ((~((+((var_6 ? (arr_6 [i_3 + 1]) : 1))))));
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_26 = (((((arr_16 [i_7] [i_7] [i_7] [i_7]) || (arr_11 [i_7 + 1] [i_7])))) % (min((arr_18 [i_7 - 1] [i_7 - 1]), ((1073741823 ? var_6 : (arr_7 [i_7] [i_7 - 1]))))));
        arr_25 [i_7] [i_7] = (arr_2 [i_7 - 1]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_27 = ((~(((arr_37 [i_8]) ? (arr_12 [i_8] [i_9] [i_11]) : var_4))));
                                var_28 = (arr_12 [i_8] [i_9] [i_8]);
                                arr_43 [i_12] [i_8] [i_10] [i_8] [i_8] = (arr_42 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1]);
                                var_29 = (arr_36 [i_9 + 2] [i_9] [i_8] [i_11] [i_9 + 2] [i_12]);
                                var_30 = (((arr_23 [i_8 + 1]) ? (arr_40 [i_8 + 1] [i_9 + 2] [i_11] [i_11] [i_11]) : 59189));
                            }
                        }
                    }
                    var_31 = 1099511627775;
                }
            }
        }
        arr_44 [i_8] = (arr_42 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
    }
    #pragma endscop
}
