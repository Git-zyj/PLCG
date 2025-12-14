/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((((((arr_1 [0] [i_1]) ? var_7 : (arr_0 [i_1]))) <= (arr_6 [i_0] [i_1 + 1]))) ? var_3 : ((((((arr_0 [18]) ? var_8 : var_2))) + ((var_0 ? (arr_5 [i_0] [i_0]) : (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_1] [i_2] [1] = ((-((((~1812504078) > (((arr_10 [14]) ? var_14 : 7221901511443344100)))))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_14 [15] [i_1] [13] [i_1] [i_2] = (arr_3 [i_1 + 1]);
                                arr_15 [15] [12] [i_2] [i_2] [i_2] = (var_15 | var_11);
                                var_18 = ((+(((((arr_6 [8] [1]) ? 1016516911 : 7710520915015002266)) + 514607992))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_19 |= max((max((arr_8 [i_1 + 1] [i_0 + 2]), (arr_8 [i_1 - 1] [i_0 - 1]))), (max((arr_8 [i_1 + 1] [i_0 + 3]), (arr_8 [i_1 - 1] [i_0 - 2]))));
                                var_20 -= var_3;
                                arr_18 [i_0] [i_0 + 4] [i_0] [i_0] [i_2] = ((((!(arr_9 [i_1 + 1] [i_1] [i_1] [i_0 - 2]))) ? (((var_4 ? (((arr_9 [i_5] [i_3] [14] [i_1 - 1]) | (arr_9 [9] [i_1] [i_2] [i_1]))) : var_2))) : (min(var_4, ((((arr_8 [20] [10]) == 1)))))));
                                arr_19 [8] [i_2] [i_2] [i_2] [i_2] = (max((~-1977847791), (((arr_9 [8] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_9 [i_3] [i_2] [i_1 + 1] [i_1 + 1]) : 11631513528893485064))));
                            }
                            var_21 -= (1 * 62500);
                            var_22 |= (min(((((var_16 || (arr_6 [i_0] [i_0]))) || (!var_4))), ((!((10584892114152140446 || (arr_1 [i_0] [i_0])))))));
                            arr_20 [i_3] [i_2] [12] [12] [i_2] [i_0] = ((-(arr_6 [i_2] [1])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_8] [15] [i_8 + 3] = ((-((~(~1)))));
                    var_23 = ((~((-((1340352740 ? (arr_27 [i_8] [6] [6] [i_8]) : (arr_24 [i_8] [i_6] [i_6])))))));
                }
            }
        }
    }
    #pragma endscop
}
