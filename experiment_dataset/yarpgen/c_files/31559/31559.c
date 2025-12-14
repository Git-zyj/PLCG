/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((~((15 ? (!-1) : var_17))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 8279152461360585916));
                                var_21 = (arr_7 [i_3] [i_0] [i_0] [i_4]);
                                var_22 = (max(var_22, -24));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_16 [i_0] = (arr_5 [i_0] [14]);
                        arr_17 [i_0] = 9121561841690096180;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_23 = 5372502514773449176;
                        arr_21 [i_6] [i_6] &= (((arr_11 [i_0] [i_0] [i_1 - 1] [i_2]) ? ((36 ? (arr_11 [i_1 + 1] [i_0] [i_1 + 1] [i_0]) : (arr_11 [i_0] [i_0] [i_1 - 1] [i_6]))) : (((arr_11 [i_0] [i_0] [i_1 + 1] [i_0]) ? (arr_11 [7] [7] [i_1 + 1] [i_6]) : 1384031362))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_24 = (((!(arr_4 [i_1 + 2]))));
                        var_25 = (max(var_25, (((-((((arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) != (max(5372502514773449179, (arr_3 [22])))))))))));
                        var_26 = (max(var_26, ((((arr_14 [i_1] [i_1] [i_2] [i_1 - 1] [i_7]) != -1)))));
                        var_27 = (arr_11 [i_7] [i_1 + 2] [i_1] [i_7]);
                    }
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        arr_30 [i_8] = ((((((arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [12]) - (((arr_9 [19] [5] [i_8]) - (arr_6 [i_8 + 2] [i_8] [i_8])))))) > ((-((-8279152461360585942 ? (arr_13 [i_8] [i_8] [i_8] [i_8 - 1] [i_8]) : 3602574943))))));
        var_28 = -1;
    }
    var_29 = var_13;
    var_30 = ((!-32) | (var_15 > 4044674215999093727));
    #pragma endscop
}
