/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_19;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] |= (((((((var_11 ? (arr_5 [i_3] [i_2] [i_1]) : var_18))) ? (!var_18) : -var_18))) ? ((min(((~(arr_5 [i_0] [i_1] [i_2]))), (arr_0 [i_0 + 2])))) : ((((min(var_12, var_14))) ? -var_3 : (((arr_0 [i_0]) ? var_13 : var_5)))));
                            var_21 += var_4;
                            arr_10 [i_1] [i_1] = (max((((!((max((arr_8 [i_1]), var_7)))))), (min(var_18, (arr_3 [i_0 + 3] [i_1 - 1] [i_2 + 1])))));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_1] = (arr_8 [i_1]);
                arr_12 [i_1] [i_1] = (((max((arr_5 [i_1] [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1] [i_1 - 1])))) ? ((var_15 * (arr_5 [i_1] [i_1] [i_1 - 1]))) : ((((!(arr_5 [i_1] [i_1] [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
