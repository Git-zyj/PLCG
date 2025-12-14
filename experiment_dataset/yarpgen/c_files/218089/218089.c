/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_2] = (arr_5 [i_0] [i_1] [i_2]);
                    var_14 = (i_0 % 2 == 0) ? (((((((arr_3 [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : 1))) >> (((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 17)) - 29295))))) : (((((((arr_3 [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : 1))) >> (((((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 17)) - 29295)) + 42546)))));
                    arr_7 [i_0] [i_1] [i_0] = var_9;
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_15 *= -112;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_4] [i_5] |= (((!-62) ? var_6 : 44442));
                                arr_16 [i_4] [i_0] [i_1] [i_3] [i_4] [i_5] |= (((108 ^ (!0))));
                                var_16 = 15;
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5] [i_5 - 2] = var_4;
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1] = (arr_8 [i_0] [i_0] [i_6]);
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((~(var_3 || var_10)));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] = (((arr_1 [i_0] [i_1]) ? -19 : var_2));
                        arr_28 [i_0] [i_1] [i_1] [i_0] [i_6] [i_8] = (var_6 ? -61 : ((max((!var_1), 32767))));
                        var_17 = (max(var_17, 1538691591));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_34 [i_0] [i_0] [i_6] [i_9] [i_6] = 134217727;
                                var_18 = ((min((arr_25 [i_10] [i_9]), 67076096)));
                            }
                        }
                    }
                    arr_35 [i_0] [i_0] [i_0] [i_0] = var_2;
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_38 [i_11] [i_11] [i_0] &= (arr_10 [i_0] [i_1] [i_11]);
                    arr_39 [i_1] [i_0] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_19 = (min(var_19, (arr_30 [i_11] [i_11] [i_1] [i_1] [i_0] [i_0])));
                }
                var_20 *= (arr_25 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
