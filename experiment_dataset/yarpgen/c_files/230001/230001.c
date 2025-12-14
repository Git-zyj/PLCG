/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_0] [i_0] [i_3] [i_3] [i_0 - 1] = var_4;
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((~(arr_4 [i_0] [i_0] [7] [i_0])));
                        var_10 += 18446744073709551600;

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [2] = 18342;
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((!(arr_7 [i_0] [12] [i_0])));
                            var_11 = (max(var_11, ((min((((~((min(var_9, 0)))))), ((7 - (arr_0 [i_0 + 1]))))))));
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_3] [i_0] [i_0] = (~-1);
                            var_12 = ((var_3 - (max((arr_7 [i_0 + 1] [i_1] [i_3 - 1]), 18342))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((0 ? (((((248 ^ (arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))) ? (min(-2967, (-2147483647 - 1))) : ((4294967288 ? 3 : (-2147483647 - 1))))) : (((arr_6 [i_0]) ? -106 : (arr_12 [i_3] [i_3] [i_3 + 2])))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_13 = -15;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_1] [i_0] = ((((18329 / (arr_7 [2] [i_1] [i_1]))) < (((9 ? -15 : var_8)))));
                            var_14 = (arr_5 [i_0]);
                            arr_25 [i_2] |= (((((-(arr_2 [i_2] [i_1] [i_1])))) ? (arr_23 [i_7] [i_1] [i_6 + 2] [i_6 + 2] [i_1]) : (~var_8)));
                            arr_26 [i_7] [i_0] [i_6] [i_2] [i_1] [i_0] [i_0] = ((arr_21 [i_0 - 1] [i_0] [i_0 - 1]) & (!73));
                        }
                    }
                    var_15 -= (((((~(arr_1 [i_2] [i_1])))) && ((((arr_15 [i_0 + 1] [i_0] [i_2] [12] [0] [i_0 - 1]) ? (min((arr_4 [i_0] [i_1] [i_2] [i_0]), 3108482724)) : -18337)))));
                }
            }
        }
    }
    var_16 += ((var_9 ? (min(-47, (max(var_9, var_8)))) : ((((-var_7 != ((var_9 ? -15 : 16))))))));
    var_17 = ((23683 ? 4294967288 : ((var_8 ? (max(-1, 10)) : -14391))));
    #pragma endscop
}
