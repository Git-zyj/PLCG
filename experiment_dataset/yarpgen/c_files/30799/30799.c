/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] = ((164 ? 6462568444113570278 : 63));
                            arr_10 [i_0 - 1] [i_1 - 1] [i_0] [i_3 - 2] [i_3 + 3] = (max((((arr_7 [i_0 + 1] [i_2 + 3] [i_2 - 1]) ? (((arr_4 [i_0] [i_3 - 3]) ? var_7 : (arr_6 [i_0 + 1] [i_1 - 1] [i_2 - 1]))) : (arr_7 [i_3 - 3] [i_2 - 3] [i_1 - 1]))), ((max(var_5, (arr_3 [i_2 - 3] [i_0]))))));
                            arr_11 [i_0 - 3] [i_2] [i_0 - 1] [i_0 - 2] [i_0 - 1] = (((arr_4 [i_2] [i_3 + 4]) ? (((((((arr_5 [i_0 - 2] [i_1 + 1] [i_2 - 3] [i_3 + 2]) ? var_14 : var_1))) ? var_3 : ((var_11 ? var_2 : var_3))))) : (min((((arr_3 [i_0 - 1] [i_2]) ? (arr_4 [i_2] [i_1 + 1]) : (arr_6 [i_0 - 3] [i_1 + 1] [i_2 - 1]))), (min((arr_0 [i_0 - 1]), (arr_4 [i_2] [i_2])))))));
                        }
                    }
                }
                arr_12 [2] |= (max((((((var_6 ? var_10 : var_8))) ? ((min(var_9, (arr_1 [i_0 - 1] [i_0 + 1])))) : (arr_4 [6] [i_1 - 1]))), ((((((var_0 ? (arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_1 + 1]) : (arr_4 [10] [10])))) ? (arr_1 [i_1 - 1] [i_0 - 2]) : var_4)))));
            }
        }
    }
    var_15 = ((var_4 ? var_12 : var_3));
    #pragma endscop
}
