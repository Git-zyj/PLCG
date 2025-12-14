/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (min((min((!825698424), 7463)), -12));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] = (((max((arr_0 [i_0]), (arr_0 [i_0 + 1])))) ? (arr_0 [i_0]) : ((max((arr_0 [i_0]), (arr_0 [i_0])))));
                        arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = -33977;
                        var_16 = (arr_6 [i_0] [i_0] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_0 + 1] [i_1] [i_1] [i_4] [i_4] [i_4] = max((arr_14 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0 - 1]), ((((((arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1]) | 1022))) ? (max((arr_9 [i_0] [i_1]), 9645617101227777786)) : (var_0 >= 1765339172))));

                        for (int i_5 = 4; i_5 < 16;i_5 += 1)
                        {
                            var_17 = (arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]);
                            arr_19 [i_0] [i_1] [i_4] [i_4] [i_5 - 4] [i_4] = (min(var_2, -13572));
                        }
                        var_18 = -1765339172;
                        arr_20 [i_0 - 1] [i_1] [i_2] [i_4] = 1765339172;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, ((((arr_3 [i_0 + 1] [i_1] [i_2]) >= (arr_22 [i_1] [i_1] [i_2] [i_2] [1] [i_1]))))));
                        var_20 = (max(var_20, (var_11 * var_4)));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_21 = (max((((arr_25 [i_0] [i_0] [i_0] [i_0]) / (arr_25 [i_0] [i_0] [i_0 + 1] [i_0]))), ((((var_3 ? 179 : (arr_0 [i_0 - 1]))) & -1765339164))));
                        arr_26 [i_0] [i_0] [i_0 - 1] [i_0] &= var_13;
                    }
                    var_22 = (min(var_22, (0 && -1765339167)));
                }
            }
        }
    }
    #pragma endscop
}
