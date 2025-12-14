/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((var_0 ? -28882 : var_9)) - ((((~var_0) >= ((var_8 ? var_3 : var_6))))));
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_1;
                var_13 = ((((((~var_1) ? (arr_0 [i_0]) : 14942))) ? (max(1, -32767)) : ((var_7 + (!123)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_14 += var_9;
                    arr_9 [21] [i_2] = (14944 ? (arr_5 [i_0] [i_2]) : 55033);
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_15 = min(((((!var_7) || ((min(33111, 55038)))))), (((((var_3 ? (arr_5 [i_1] [i_3]) : var_3))) ? ((0 ? 10490 : 255)) : (min((arr_0 [i_0]), 1)))));
                    arr_13 [i_0] [i_0] [i_3] = (((((var_7 ? ((max(10490, 52536))) : var_7))) | ((~(min(var_0, var_2))))));
                    var_16 = ((arr_5 [i_1] [i_3]) - (arr_8 [i_0]));
                    var_17 = (max(var_17, (((!((!(arr_7 [i_0] [i_1] [i_3] [i_3]))))))));
                }
            }
        }
    }
    #pragma endscop
}
