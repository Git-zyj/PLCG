/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min(var_14, (max((((11598456268254254319 ? (arr_1 [i_0 - 1]) : var_11))), (min(var_11, 1151756258493881606))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_20 = (min(((((((var_0 ? -1151756258493881607 : (arr_5 [i_0 - 1] [i_1] [i_0])))) ? 1151756258493881606 : (max(var_15, var_16))))), ((((max(0, (arr_7 [i_0])))) ? (((var_13 ? 26685 : var_16))) : var_9))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_21 = ((~(arr_8 [i_0 - 1] [i_0 - 1])));
                        var_22 = (arr_0 [i_2 - 1]);
                        var_23 = (((arr_5 [i_0 - 1] [i_1] [i_2 + 2]) ? (arr_5 [i_0 - 1] [8] [i_2 + 2]) : (arr_5 [i_3] [i_2] [i_1])));
                    }
                    arr_10 [i_0 - 1] = (min(var_16, ((-(arr_4 [i_0 - 1] [i_0] [i_1])))));
                }
                arr_11 [i_0] [i_0] [i_0] = (((!(arr_6 [17] [i_0 - 1]))));
                var_24 = arr_7 [i_0];
            }
        }
    }
    var_25 -= ((-(((!(!var_15))))));
    #pragma endscop
}
