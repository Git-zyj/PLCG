/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_1] = (arr_3 [i_2 + 1] [i_1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (((~1) == (arr_10 [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [1] = (max(var_12, (((~(arr_7 [i_2 + 1] [17] [i_3] [i_3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_16 [i_5] [i_1] [i_1] [i_1] [i_5] [i_5] = ((((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_1 + 1] [i_1] [i_6 + 1]) : (arr_3 [i_5 - 3] [i_1] [i_2 - 1]))));
                                var_16 = (((arr_3 [i_0] [i_1] [i_1]) ? ((~(~-23519))) : ((565636514 ? 1 : 1))));
                                var_17 = ((((((var_13 >= (arr_12 [i_0] [i_0] [2] [5] [2] [i_0]))) ? (arr_9 [i_1] [8] [i_2] [i_1] [8] [i_5]) : var_14))) ? ((var_2 + ((min((arr_5 [i_0] [i_1] [0]), 530014412))))) : var_11);
                                var_18 = (max(var_1, (((arr_10 [i_1 + 1] [i_2 - 2] [i_5 - 2] [i_5] [i_6 - 1]) + (arr_14 [i_1] [i_1] [i_1] [i_1] [i_5 - 1] [i_1])))));
                                arr_17 [i_1] [i_1] [i_2] [i_5] [i_6] [i_6] = (((arr_14 [i_5] [i_5] [i_2] [i_1] [i_6 - 1] [i_2]) >= (max((!2471604622), (arr_9 [i_1] [i_1 - 1] [14] [i_2] [i_5] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((16196 ? 68719476672 : (~var_4)));
    }
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        var_20 *= ((((((((!(arr_19 [i_7]))) && ((((arr_4 [i_7] [i_7] [i_7]) - (arr_12 [i_7] [i_7 + 3] [i_7] [i_7] [i_7] [i_7])))))))) < var_8));
        var_21 = ((var_10 ? (arr_18 [i_7 - 3]) : ((~(arr_15 [i_7 - 3])))));
        var_22 = 2471604597;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_23 = (max(var_23, ((((arr_0 [i_8] [i_8]) == (+-325))))));
        var_24 = ((~(~5286)));
        var_25 = ((+((((arr_22 [i_8]) && ((65516 >= (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    var_26 = ((var_8 ? var_2 : ((var_5 ? var_10 : var_6))));
    var_27 = (max(var_27, var_9));
    var_28 = var_2;
    #pragma endscop
}
