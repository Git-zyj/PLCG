/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (max((~var_9), 2220967309049286498));
    var_15 = (((((var_12 ? var_9 : var_9))) > var_6));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = ((arr_0 [i_0 + 1] [i_0 + 1]) / (arr_2 [i_0 - 1]));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_3] = (min((arr_2 [2]), (var_2 + var_0)));
                        var_17 = (arr_5 [i_1] [i_1]);
                        arr_14 [i_1] [i_1] [i_1] [i_3] = (((((~((min(var_7, 25169)))))) & (((((min((arr_9 [i_0] [i_0]), 172)))) & (((arr_6 [i_1]) ^ 40371))))));
                        arr_15 [i_1] [i_3] [i_3] = ((((((arr_3 [i_0]) ? (arr_9 [i_0 - 1] [i_0 - 1]) : (min((arr_8 [i_1] [i_1]), 12072))))) ? var_3 : ((((-2904499352947290682 ? -1574784700 : 9223372036854775807)) * 0))));
                    }
                }
            }
            arr_16 [i_0] [i_1] [i_1] = ((!((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : -24739)))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_0] [i_1] = (arr_7 [i_4 + 3] [i_4 - 1] [i_1] [i_4 + 3]);
                        arr_23 [i_1] = var_3;
                        arr_24 [i_1] [i_1] = (((((((-(arr_19 [i_5] [i_1] [i_1] [i_0])))) ? 0 : (((((arr_9 [i_4] [i_0]) < (arr_21 [i_4] [i_5]))))))) < var_9));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_18 = (max(1677007540, -32629));
            arr_28 [i_6] [i_6] = (((((((arr_1 [i_0] [i_0 - 1]) < var_6)))) & (max(255, ((var_2 ? var_2 : var_1))))));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_19 = (min((((arr_29 [12] [i_7]) + (arr_29 [10] [i_7]))), 1574784699));
        var_20 = (arr_29 [i_7] [i_7]);
    }
    #pragma endscop
}
