/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((min(var_2, var_4)), (min(-3475461334297803448, 352248558)));
    var_11 = var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (min((arr_2 [i_0]), (max((arr_0 [i_0]), (min((arr_2 [i_0]), (arr_2 [i_0])))))));
        var_13 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = (min((max((arr_4 [i_1] [i_1]), (min((arr_6 [i_1] [i_1]), (arr_2 [i_1]))))), (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_15 = (min((arr_11 [i_1] [i_1] [i_2] [i_3]), (arr_6 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((max((arr_1 [i_1] [i_3 - 2]), (arr_3 [i_1] [i_1]))))));
                                arr_19 [i_2] [i_2] [i_4] [i_4] [i_5] [i_1] [i_1] = (arr_7 [i_2]);
                                var_17 = (max((max((arr_4 [i_1] [i_4]), ((min((arr_7 [i_1]), (arr_3 [i_1] [i_1])))))), (max((max((arr_15 [i_5] [i_2] [i_3 + 2] [i_4] [i_5]), (arr_2 [i_1]))), (arr_9 [i_2] [i_3] [i_4] [i_5])))));
                                arr_20 [i_5] [i_4] [i_3] [i_2] [i_1] |= (arr_6 [i_3] [i_2]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_1] [i_2] [i_3 - 2] [i_1] = (arr_9 [i_1 - 1] [i_1] [i_1] [i_1]);
                        arr_24 [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_2]);
                        arr_25 [i_3 - 2] = (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3 - 1]);
                    }
                    arr_26 [i_3] [i_3] [i_3] = (arr_11 [i_1] [i_1] [i_3] [i_3]);
                }
            }
        }
    }
    var_18 = (max(var_4, ((min(((min(var_9, var_9))), (min(var_5, var_1)))))));
    #pragma endscop
}
