/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((!(((var_10 ? (((1 ? var_7 : var_11))) : (1 | var_5)))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (min((min(1, var_5)), (((!(1 << var_11))))));
        var_16 = (min((arr_2 [i_0]), ((!(arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((1956359919608358949 & ((((arr_0 [i_1]) ? 0 : 1)))));
        var_17 = ((var_10 ? var_2 : ((-(arr_2 [6])))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_18 = (((arr_2 [i_2 - 1]) ? (arr_2 [i_2 - 1]) : 0));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_19 += ((((var_3 ? 1 : var_12))) ? 1 : (!1));
                        var_20 = (arr_13 [i_3 - 1] [1] [i_2] [i_2 - 1]);
                    }
                }
            }
            var_21 = (min(var_21, 1));
            arr_18 [i_2] [i_2] = (arr_1 [i_3 - 1] [i_3 - 1]);
        }
        var_22 = (max(var_22, var_1));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {
                    var_23 = (max(((~(arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7 + 1]))), (((arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7 - 1]) << (((arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7 - 1]) - 798598689))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((((((var_8 ^ ((max(var_1, 1)))))) & (min((arr_8 [i_2 - 1]), 0)))))));
                                var_25 = (max((((-1 ? 0 : (arr_16 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])))), (min(((var_13 ? (arr_23 [i_2 - 1] [i_6] [i_7 - 1] [i_9]) : var_12)), 3160456139376844842))));
                                var_26 = var_0;
                            }
                        }
                    }
                    var_27 = 1;
                }
            }
        }
    }
    var_28 = (max((((max(var_10, var_6)) * var_14)), ((max(0, 0)))));
    #pragma endscop
}
