/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(var_3, (max(var_15, var_1))))), (((((var_10 ? var_3 : -11))) | (var_8 | var_13)))));
    var_17 = max(442127900, (((var_14 ? var_3 : 639128585))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 ^= ((var_10 ? (((!((max(var_3, (arr_0 [i_1]))))))) : (arr_6 [9] [9] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_4] [i_2] [i_2] = -var_12;
                                arr_14 [8] [i_1] [8] [8] [i_4] [i_4] [8] |= (((((~(arr_2 [7] [i_1])))) ? ((max(442127902, (arr_0 [i_3])))) : ((((arr_12 [i_0] [i_1] [i_2] [i_0] [22]) ? var_13 : ((~(arr_3 [i_1] [1] [i_1]))))))));
                                var_19 = 1;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_20 &= (((~var_9) ? (~28209) : (arr_19 [i_7] [i_1])));
                                var_21 = (min(var_1, (max((max((arr_12 [i_0] [i_1] [i_5] [i_6 + 1] [i_5]), (arr_2 [i_5] [i_5]))), ((var_9 ? 28209 : var_11))))));
                                var_22 = (min(var_7, (((arr_3 [i_5 - 2] [i_7] [i_7]) ? (arr_3 [i_0] [i_0] [i_5 + 2]) : (arr_3 [i_0] [i_1] [4])))));
                                arr_22 [i_0] [i_1] [i_5 - 2] [i_6] [i_7] [i_5] [i_1] = (arr_11 [i_0] [i_1] [i_1] [i_1] [i_5 - 2] [i_6 + 2] [i_5 + 2]);
                            }
                        }
                    }
                }
                var_23 = ((!(((arr_20 [14] [14] [i_0]) == (1 == 28209)))));
            }
        }
    }
    var_24 = 8692167577212731923;
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        var_25 = (3852839395 / 120);
                        var_26 |= 15;
                    }

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_27 = (~(arr_3 [i_8 - 1] [19] [20]));
                        var_28 = (max(37304, 9121));
                    }
                }
            }
        }
    }
    #pragma endscop
}
