/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((~(max(42750, 5587003332744293284)))), var_1));
    var_14 = (var_10 - -14);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 += ((arr_3 [i_0] [i_0 + 2]) ? ((((max((arr_6 [19] [i_1]), (arr_1 [i_0])))) ? (arr_4 [i_0 + 1] [i_0 - 1]) : (min(var_11, (arr_1 [i_1]))))) : (((~((((arr_6 [i_1] [i_0 + 2]) || -37287989)))))));
                arr_7 [i_0] = (min((arr_1 [14]), (min(-17667, -1045))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] = var_2;
                    var_16 |= (max(var_4, (1359667185 < 47229)));
                    var_17 = (max(var_17, ((min((((arr_3 [i_0 - 1] [i_2 + 2]) ^ (arr_3 [i_0 - 1] [i_2 + 2]))), (arr_10 [i_0 - 1]))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((((18446744073709551615 ? (arr_0 [i_0]) : var_12)) / var_9));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                        {
                            var_18 = -var_5;
                            var_19 |= ((!(14388 || 723201168798385495)));
                            arr_20 [i_0] [i_0] [i_2] [i_0] [22] [i_0] [i_2] = ((13613272187078989072 ? (((arr_8 [i_0] [i_2 - 1] [i_3] [i_4]) ? var_6 : (arr_10 [i_3]))) : (((3 && (arr_0 [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_20 = (~985);
                            var_21 -= (((~11) % var_0));
                            var_22 = (((arr_4 [i_0 - 1] [i_2 - 1]) || (arr_4 [i_0 + 2] [i_2 + 2])));
                            arr_25 [i_0] [i_3] = (arr_21 [i_5] [i_3] [i_1]);
                            arr_26 [i_0 - 1] [i_0] [i_2] [i_0 - 1] [i_5] [i_0] [i_2] = ((~(var_10 > var_5)));
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_23 = (((arr_28 [i_3 + 2] [i_3] [i_3] [i_2 - 1] [i_0 + 1] [i_0]) ? (arr_28 [i_3 - 1] [i_2] [i_2 + 2] [i_2 - 2] [i_0 + 2] [i_0 - 1]) : (arr_28 [i_3 + 3] [i_2] [i_2] [i_2 + 2] [i_0 + 2] [i_0])));
                            var_24 = (((arr_18 [21] [i_0] [i_0] [i_0 + 2] [i_2 - 1]) >> (((arr_15 [11] [i_0 + 1] [i_0] [i_0 - 1]) - 11668261823716682306))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_2] [i_3] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_7));
                            arr_33 [i_0] [i_2] [i_0] [i_7] = (~-150125641);
                            var_25 = (max(var_25, 255));
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    arr_36 [i_0] [i_0] [i_8] = (!var_0);
                    arr_37 [i_0] [i_8] [i_0] = 101;
                }
            }
        }
    }
    #pragma endscop
}
