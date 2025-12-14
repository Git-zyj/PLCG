/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_14 ? (!var_7) : (max(var_8, ((-1950 ? 0 : var_1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (((((arr_5 [i_2 + 1] [i_2 + 1]) ? var_4 : (arr_1 [i_2 + 1] [i_2 + 1]))) * (!140737488355327)));
                    arr_11 [i_0] [i_0] [i_0] = (((((((min((arr_2 [i_0]), (arr_4 [i_0] [i_0])))) ? (max(var_9, var_16)) : var_16))) ? 697586490 : ((max(11506, (arr_0 [i_2 + 1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_14 [i_0] [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] [i_0] = ((578859486 ? (((arr_9 [i_0] [i_0] [i_0]) & var_16)) : 1));
                        var_21 = ((var_5 < (arr_7 [i_0] [i_1 + 2] [i_0])));
                        arr_17 [i_0] [i_0] = var_5;
                    }
                    arr_18 [i_1] = (min((((arr_4 [i_2 + 1] [i_1 + 1]) ? (arr_13 [i_2] [i_2 + 1] [i_2 - 1]) : var_15)), ((((arr_0 [i_1]) ? (arr_13 [i_0] [i_0] [i_0]) : (arr_2 [i_0]))))));
                    var_22 = (max(((!((((arr_0 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : 3959604878))))), (!1)));
                }
            }
        }
    }
    #pragma endscop
}
