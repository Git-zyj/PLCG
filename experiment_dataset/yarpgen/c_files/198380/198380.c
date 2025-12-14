/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 = ((~((((var_11 >= (arr_2 [i_0]))) ? (arr_2 [i_0]) : (min((arr_0 [i_0] [i_0]), var_3))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = min((arr_2 [i_0]), (arr_3 [i_0]));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_21 = ((((((arr_3 [i_3 - 1]) ? (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_1] [i_0]) ? var_10 : (arr_8 [i_0] [i_1] [i_2] [i_3] [9]))) : (arr_8 [i_0] [1] [i_2] [i_3] [i_2])));
                        var_22 = (((((-(arr_8 [i_0] [i_1] [i_2] [i_2] [i_3])))) ? ((-56 ? (arr_1 [i_0] [i_0]) : (((arr_2 [i_0]) ? var_7 : (arr_8 [i_0] [i_1] [i_2] [i_3 + 1] [i_3]))))) : (arr_8 [i_3 + 1] [i_1] [i_0] [i_3] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_23 = ((((arr_3 [i_0]) ? 102 : 18952)));
                        var_24 = (((arr_2 [i_1]) ? (((arr_2 [i_0]) ^ (arr_2 [i_1]))) : ((-(arr_2 [i_0])))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_25 = (min(49, 18946));
            var_26 = -102;
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_18 [1] = var_8;
        arr_19 [i_6] = (min((!var_8), ((var_10 ? (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
    var_27 = ((var_1 ? ((((var_3 ? var_3 : var_1)) - var_6)) : (var_9 & var_6)));
    #pragma endscop
}
