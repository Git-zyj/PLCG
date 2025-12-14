/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (((((arr_3 [14] [i_1]) ? 21468 : (arr_3 [i_1] [i_0]))) * (((var_5 != (52168 <= 0))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] = ((~(arr_5 [i_2] [i_2] [i_2] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (arr_8 [i_2] [i_2] [i_2]);
                                arr_16 [i_0] [i_1] [i_4] [13] [i_2] [i_1] = (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [i_2] [i_5] = -18;
                                arr_25 [i_2] = (((arr_11 [i_1] [i_2 + 1] [i_2] [i_6 - 1]) != 1768578311));
                                arr_26 [i_6 + 2] [i_2] [i_2 + 1] [i_2] [17] = (arr_8 [i_0] [i_2] [i_6 + 1]);
                                arr_27 [i_2] = ((((var_3 ? 1768578301 : (arr_8 [i_0] [i_2] [0]))) << (((arr_14 [i_6] [i_0] [i_2] [i_0] [i_0]) - 131))));
                                var_12 = (min(var_12, (((-(arr_15 [i_0] [20] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (--11718);

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_30 [i_7] = ((-(((var_1 >= 118) ? 17 : 4005849965372748624))));
        var_14 = min(118, (((arr_3 [i_7] [i_7]) ? (arr_18 [i_7] [2] [i_7] [i_7] [i_7] [i_7]) : ((((arr_18 [i_7] [i_7] [i_7] [i_7] [10] [i_7]) ? (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
    }
    for (int i_8 = 3; i_8 < 23;i_8 += 1)
    {
        arr_33 [9] = (max(((((max(var_7, (arr_31 [13] [i_8])))) ? (arr_31 [i_8] [i_8]) : -var_4)), (((arr_31 [i_8 - 1] [i_8 - 3]) - (arr_31 [i_8 - 1] [i_8 - 3])))));
        arr_34 [i_8] = ((min((~67108608), (arr_31 [i_8] [i_8]))));
        arr_35 [i_8 - 2] [i_8 - 2] = -52;
    }
    #pragma endscop
}
