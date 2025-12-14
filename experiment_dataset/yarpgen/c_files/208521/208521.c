/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 *= (~var_1);
        var_11 = (min((((-87 ? 44 : 19))), (arr_1 [i_0])));
    }
    var_12 *= ((!((((max(var_5, var_3))) <= var_6))));
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_3] |= var_9;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_13 *= (max((((var_3 ? var_2 : (arr_8 [21] [21] [10] [15])))), var_8));
                        var_14 *= ((((((((32889 ? var_5 : 1))) ? 1 : (((5315670251006662825 ? 255 : 32)))))) ? ((((((arr_8 [i_3] [1] [9] [10]) ? var_7 : var_1))) ? 8256297835375224255 : ((((arr_7 [i_3] [i_3]) ? var_7 : 0))))) : 32642));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_15 = (max((((((115 ? 9223372036854775807 : 65508))) ? 3278570176878126239 : var_5)), (((!(var_4 || var_9))))));
                        var_16 = (max(var_16, (((2696131432 - ((16 ? 9223372036854775807 : 13)))))));
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [i_3] [i_3] [i_3] |= 1;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_17 = (arr_6 [i_2] [i_2] [i_2]);
                            var_18 = (max(var_18, ((((arr_13 [i_1] [i_2 + 2] [i_6] [i_7]) * (var_1 & 0))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_19 = (min(var_19, ((((+(((arr_24 [i_1] [i_2] [i_1] [i_8] [i_3] [i_1]) ? (arr_22 [i_8] [i_2] [i_8] [4] [i_8]) : var_1))))))));
                        var_20 = (max(((0 ? (var_4 - var_7) : (min((arr_13 [i_1] [i_1 + 1] [i_1] [i_1]), var_9)))), (((((min((arr_8 [i_1] [i_1 - 1] [i_1] [i_1 - 1]), (arr_9 [i_1] [18] [18] [i_2])))) && var_1)))));
                    }
                    arr_28 [i_2] [i_2] [i_2] = ((13 ? 255 : 28));
                }
            }
        }
    }
    #pragma endscop
}
