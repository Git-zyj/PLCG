/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = ((((max((min(27743, var_4)), 70))) ? var_8 : -710941006165027123));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (((((min((arr_4 [i_0] [i_2] [i_3]), var_2)) / 710941006165027122)) + (((-((4294967273 + (arr_0 [i_3]))))))));
                            var_14 -= (var_5 >= var_2);
                            var_15 = 21;
                            arr_9 [i_0] [i_1] [i_2] [i_3] = 1702167712549388182;
                            var_16 = ((((((arr_1 [i_3 + 1]) ? (arr_0 [i_0]) : ((((arr_1 [i_2]) && 20)))))) ^ (max((max((arr_5 [i_3] [i_2] [i_1] [i_0]), 4294967275)), (((22 ? 78 : -114)))))));
                        }
                    }
                }
                var_17 = (min((arr_5 [i_0] [i_0] [i_1] [0]), (((arr_2 [8] [i_1] [i_0]) / 4095))));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_14 [i_0] [2] = (((((((arr_10 [i_0] [i_4] [i_4]) - 7864)) + ((var_2 ? var_4 : (arr_1 [i_4]))))) + -109));
                    arr_15 [i_0] [i_1] [i_4] [i_1] = ((((var_1 | -8699361271801763199) & ((var_5 ? var_1 : (arr_6 [i_0] [i_0] [i_4]))))));
                    var_18 = (((arr_12 [i_0] [i_0] [i_0] [1]) ^ ((((max((arr_7 [i_1] [i_4]), var_8))) ? ((var_4 ? -7000691910502904128 : var_4)) : -688134210000564855))));
                }
            }
        }
    }
    #pragma endscop
}
