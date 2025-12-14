/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [1] = ((((arr_1 [i_0 - 1]) << var_3)));

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0 + 1] = (((1 - 1) / 103));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0 + 1] [i_2] [i_2] [i_3 + 1]);
                        arr_15 [i_3 + 1] [24] [i_1] [i_0] |= (((arr_5 [i_0]) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((arr_11 [i_0 + 2] [i_1] [i_2 - 1] [i_3 + 1]) ? (((~(arr_0 [i_2 + 1])))) : 4153495134))));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_15 &= ((((141472162 << (5757670372282994834 - 5757670372282994826))) - (min((min(654959913, (arr_0 [i_2]))), ((((arr_9 [i_0] [i_1] [20] [i_4]) * (arr_0 [i_0]))))))));
                        var_16 = var_3;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0] = (arr_2 [i_5 + 2] [i_5 - 1]);
                        arr_22 [i_0] [22] [22] = (((((-(arr_17 [1] [i_5])))) - (arr_18 [i_0 + 1] [i_0] [i_0 + 1] [1] [i_0] [i_0 + 1])));
                    }
                    for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_17 &= (((4294967295 + 2147483647) << ((((4204724432673517048 - 256) <= (arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0]))))));
                        arr_26 [i_0] [1] [i_2 + 1] [i_6 - 2] = (!(((((((arr_10 [i_0] [i_1] [i_2 + 1] [i_6] [i_2 + 2] [7]) < var_10))) << (((arr_2 [i_2] [i_1]) - 207))))));
                    }
                }
            }
        }
    }
    var_18 = var_9;
    var_19 = ((min((-331153411992561558 / var_9), (max(var_1, var_3)))));
    #pragma endscop
}
