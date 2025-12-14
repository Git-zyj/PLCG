/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = -var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_16 = (((((var_12 ? -27534 : var_0))) ? (arr_11 [i_0] [i_1] [i_3 - 1] [i_4 - 2]) : 0));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = (((arr_0 [i_3 - 1]) ? (arr_0 [i_3 - 1]) : var_9));
                            var_17 = (((arr_11 [i_3] [i_3 - 1] [2] [i_3]) ? (arr_11 [i_3] [i_3 - 1] [i_3] [i_3]) : (arr_7 [i_3] [i_3 - 1] [i_3] [i_3 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            var_18 = (((arr_5 [i_0] [i_0]) ? ((((arr_15 [3] [8] [i_2] [1] [9] [i_2] [i_1]) != (arr_12 [i_0] [i_0] [i_1] [9] [3] [i_3] [i_5])))) : (arr_1 [i_2] [5])));
                            var_19 = ((~(((!(arr_6 [i_0] [i_0] [i_3 - 1]))))));
                            arr_17 [i_3] = ((~(2632804724 < 73)));
                            var_20 = (arr_12 [8] [8] [8] [i_5] [i_5 + 1] [i_5] [i_5 - 3]);
                        }
                        arr_18 [i_0] [10] [i_0] [i_3] = (((-(((arr_11 [i_0] [1] [i_0] [i_0]) ? 10 : (arr_1 [i_0] [i_0]))))));
                        var_21 = var_7;
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((+((((arr_20 [i_6 - 3]) != (arr_19 [i_6 - 1]))))));
        var_22 = ((!(((((var_1 != (arr_20 [i_6]))) ? (((min((arr_20 [i_6 - 3]), var_9)))) : (min((arr_21 [i_6]), -1696)))))));
        arr_23 [0] [0] = ((var_13 ? var_0 : (((!((min((arr_19 [i_6]), 1662162596))))))));
    }
    var_23 = (-((var_13 % (((var_10 ? 1984 : 1662162572))))));
    var_24 = 1662162567;
    #pragma endscop
}
