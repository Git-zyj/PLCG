/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((~(arr_0 [i_0] [i_0])))) ? ((var_9 ? var_5 : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_11 |= (((((arr_4 [i_1 - 1] [1]) ? var_10 : (arr_4 [i_1 + 3] [8]))) ^ (((arr_4 [i_1 + 1] [1]) + var_7))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [20] [i_0] = (arr_1 [i_0] [i_1 - 1]);
                var_12 *= ((((((arr_0 [i_0] [i_0]) ? (max(var_9, var_7)) : (((var_6 ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (arr_2 [i_0]))))))) ? (arr_6 [i_0] [12] [i_1 + 3] [i_2]) : ((3951933998 ? ((var_6 ? var_3 : var_1)) : var_3))));
            }
            arr_9 [i_0] [16] = ((((var_2 ? (((((arr_5 [i_0] [i_1] [i_1]) + 2147483647)) << (((var_9 + 4071733056029624482) - 22)))) : (arr_7 [i_0] [i_1]))) ^ (arr_6 [i_0] [i_0] [i_1 + 2] [i_1 + 1])));
            arr_10 [i_0] [i_0] = ((((6232118415845840162 / (arr_7 [i_0] [i_1]))) != ((((arr_5 [i_0] [i_1] [i_1 + 1]) ? var_3 : (var_4 == var_4))))));
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = 1;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_13 = var_10;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_23 [i_3] [i_3] [i_3] = (min((arr_6 [i_3] [i_4] [i_4] [i_7]), ((!(((var_0 ? var_1 : (arr_12 [i_3]))))))));
                            arr_24 [i_3] [i_4] [i_3] [i_3] [i_4] [i_7] = (((((3951933998 << (-4 + 21)))) ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_5] [i_6] [i_7]) : ((((max((arr_16 [i_3]), (arr_18 [i_4] [i_5] [i_5] [i_3])))) ? (((((arr_12 [i_3]) <= -4)))) : (arr_19 [i_3])))));
                        }
                    }
                }
            }
        }
        var_14 = (((max((arr_19 [i_3]), (arr_5 [i_3] [i_3] [i_3])))) ? (arr_21 [i_3] [i_3] [23] [i_3] [i_3] [i_3] [i_3]) : ((var_8 ? var_4 : ((2 ? var_0 : var_0)))));
        arr_25 [i_3] = (((-1725008971 == 2147483647) * (!-641894854)));
    }
    var_15 = (((((~(var_9 | var_7)))) ? (~var_9) : (min((max(var_0, var_2)), var_6))));
    #pragma endscop
}
