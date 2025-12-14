/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, ((((((min(var_12, var_0))) ? (((arr_0 [i_0]) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0]) : (arr_4 [i_1]))) : var_7))))));
                        arr_12 [i_3] [i_0] [i_0] = ((((!(arr_2 [i_2] [i_3]))) ? (((arr_8 [i_0]) ? (arr_8 [i_0]) : (arr_8 [i_0]))) : (arr_7 [i_0] [i_0] [i_2])));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_18 = (min(var_18, ((((arr_11 [i_0] [i_4] [6] [i_5]) ? (arr_6 [i_5] [i_4]) : (arr_11 [i_0] [i_4] [i_5] [i_5]))))));
                var_19 *= (((arr_14 [i_0] [i_5]) ? (arr_14 [i_0] [i_5]) : var_0));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_30 [1] [i_4] [i_6] [8] [i_0] = var_9;
                            var_20 = (((arr_11 [i_7 - 1] [i_7 - 2] [i_7] [i_0]) ? (!var_12) : var_3));
                            arr_31 [i_0] [i_0] [i_6] [1] [i_8 + 2] [i_8 + 2] = var_2;
                            arr_32 [i_0] [i_4] [i_4] [i_6] [15] [i_0] [7] = (arr_28 [i_8] [i_0] [i_7] [i_0] [i_7 - 2]);
                            var_21 = ((var_9 ? (!var_1) : (((!(arr_5 [i_0] [17]))))));
                        }
                    }
                }
                var_22 = (min(var_22, var_15));
            }
            var_23 = (((arr_24 [i_0] [i_0] [13]) ? (arr_24 [i_0] [i_4] [i_4]) : var_4));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_24 = (arr_3 [i_9] [i_0]);
            var_25 = (max((min((arr_2 [i_9] [i_0]), (arr_4 [i_0]))), (max((arr_2 [i_9] [i_9]), var_13))));
        }
        var_26 = min((arr_20 [i_0]), ((min((arr_29 [i_0] [9] [i_0] [i_0] [i_0] [i_0]), ((max((arr_14 [i_0] [i_0]), (arr_4 [i_0]))))))));
        arr_35 [i_0] = var_11;
    }
    var_27 = (min(var_27, (!var_4)));
    var_28 = var_14;
    #pragma endscop
}
