/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (arr_13 [i_0] [i_0] [i_0]);
                                var_12 = (arr_10 [i_4] [i_1] [i_4] [i_1] [i_2] [i_1]);
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [14] [i_2] [4] = var_4;
                        var_13 -= (max(((~(((arr_10 [i_5 + 1] [i_2] [i_1] [i_1] [i_1] [i_0]) ? (arr_13 [i_0] [i_0] [i_0]) : 14424071793067916209)))), var_1));
                    }
                    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0] = (arr_18 [6] [i_6 - 1] [i_6 + 1] [i_6 + 1]);
                        arr_21 [i_0] [i_0] [i_0] [i_0] = (max((~var_1), var_1));
                        var_14 = (max(var_14, (((((((min((arr_2 [i_0]), (arr_16 [i_1] [i_6])))) + 2147483647)) >> (((((((((arr_0 [6]) | var_10)) + 2147483647)) << (((arr_10 [4] [i_1] [i_0] [i_0] [2] [i_1]) - 240)))) - 1197760180)))))));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] = ((+(min((arr_8 [i_7 - 1] [i_7 - 1] [i_2] [i_7] [i_1] [i_7 - 2]), var_1))));
                        arr_25 [i_7] [i_0] [i_0] [6] = ((var_7 ? (max((((arr_4 [1] [i_0] [i_2]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_6 [i_0]))), (var_6 | var_9))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    var_15 = (min(var_15, (((((min((max((arr_15 [i_0] [i_2]), var_0)), ((-(arr_3 [i_0] [i_0])))))) ? (max(var_4, var_3)) : ((max(var_10, ((var_10 >> (((arr_6 [15]) + 861428981))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
