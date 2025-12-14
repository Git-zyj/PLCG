/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-26869 >= 50465);
    var_13 = ((((max(var_2, var_9))) ? ((((!((min(43, var_1))))))) : (((var_4 / var_9) | var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((max(7, 15068))) ? -61 : (((arr_1 [i_0]) % (arr_1 [i_1]))))))));
                var_15 = ((((~(arr_1 [i_1]))) + (arr_2 [i_1])));
                var_16 = (15068 ? (min((max(var_8, var_10)), ((var_8 + (arr_1 [9]))))) : var_8);

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_17 = (((((387127504 ? var_9 : var_10))) ? (min(var_4, (arr_4 [i_2] [10] [i_2 - 2] [8]))) : ((((arr_5 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2]) ? 189 : (arr_7 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2]))))));
                        arr_8 [i_0] [9] [i_1] [i_0] [i_0] [i_3] = 237;
                        var_18 = (max((17741 && 175), ((!(((2699 ? var_1 : var_4)))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3 + 1] = (arr_5 [i_0] [i_1] [i_2] [i_3]);
                        arr_10 [i_0] [i_0] = var_1;
                    }
                    arr_11 [i_0] [i_1] [i_2] = (min((max(((5 ? (arr_3 [i_0] [i_1]) : var_8)), (((arr_2 [i_0]) / var_1)))), var_11));
                    arr_12 [i_0] [i_0] [i_1] [i_2] = (max((((((var_6 ? var_4 : var_6))) ? var_8 : (((arr_5 [9] [i_1] [i_2 - 1] [i_1]) + 48)))), (((((min(var_10, (arr_4 [i_2] [i_1] [i_0] [i_0])))) && ((max(var_8, (arr_6 [i_2] [5] [i_1] [i_1] [i_0])))))))));
                }
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [5] [i_0] [i_4] [i_1] [i_0] [i_0] = ((2002788407 ? 32803 : 3499916186));
                        var_19 &= (((((arr_7 [7] [2] [i_4 - 2] [i_4 - 1] [i_5] [i_5 + 1]) - -24625)) - 0));
                        arr_19 [i_5] [i_4 - 1] [i_1] [3] [i_0] [i_0] = 4294967295;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [i_7] = (max(((((min(var_1, var_0))) << (((50239 | 2946532676) - 2946549107)))), 177));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] = (((((0 - var_1) + 2147483647)) << (var_4 - 9330959880193643908)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        arr_30 [i_8] [5] [i_0] = (arr_17 [i_8] [i_8 + 1] [i_4] [i_0] [i_0]);
                        var_20 = (var_0 / var_2);
                    }
                }
            }
        }
    }
    var_21 = ((var_1 ? 1378303998 : var_1));
    #pragma endscop
}
