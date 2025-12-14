/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (((((((var_10 ? var_11 : var_5)) >> ((((var_6 ? 1472 : var_18)) - 1458))))) ? (((var_11 - 18751) ? (var_7 + var_6) : -var_11)) : (((((((0 >> (3239649138 - 3239649132)))) && (((var_11 ? 2 : var_4)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            var_21 = (((arr_8 [8] [8] [i_1 - 2] [i_4 - 3] [i_4] [4]) ? (((arr_2 [12]) / 4194303)) : ((var_14 ? (arr_0 [i_0]) : (arr_10 [i_0] [i_0] [i_1] [3] [i_3] [i_3])))));
                            arr_13 [i_2] [i_1] [i_2] [i_1 + 1] [i_2] [i_3] = ((arr_3 [i_0] [i_0]) / (arr_12 [i_3] [i_3 + 1]));
                        }
                        var_22 *= (((arr_4 [i_1 - 3]) ? (arr_4 [i_0]) : (arr_0 [i_3 - 2])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    arr_19 [i_0] [i_0] [i_6 + 3] [i_0] = 1;
                    arr_20 [i_0] = (((var_12 && 46785) + var_5));
                    arr_21 [0] [i_0] [i_0] [i_0] = ((!(arr_17 [i_5 + 2] [i_5] [i_5 + 3] [i_5 + 2])));
                }
            }
        }
        arr_22 [i_0] = (arr_2 [i_0]);
    }
    var_23 = (min((((!(((var_3 ? var_18 : var_0)))))), var_1));
    #pragma endscop
}
