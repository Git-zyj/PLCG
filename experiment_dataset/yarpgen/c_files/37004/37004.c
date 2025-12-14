/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((min(var_3, var_4)))), (min(var_8, -32484))));
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((!((min((arr_9 [i_0] [i_1] [i_1 - 3] [i_1]), (arr_9 [i_0] [i_1] [i_1 + 2] [i_1]))))));
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] [i_1] = var_5;
                                arr_13 [i_1] [i_4] = ((((11721598521790272029 ? var_11 : var_7)) < (((((min(var_10, (arr_5 [i_4] [i_1] [i_0])))) ? ((-(arr_7 [i_0] [i_0]))) : (arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1]))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_1] [i_0] = (max((min((arr_2 [i_1]), (arr_2 [i_1]))), (((!(arr_2 [i_1]))))));
                arr_15 [i_1] = ((!((((((var_11 ? (arr_2 [i_1]) : (arr_1 [i_0])))) ? (arr_6 [i_1] [i_1] [i_1 + 2] [i_1]) : (arr_6 [i_1] [i_1] [i_1] [i_1]))))));
                var_15 = ((((min(11721598521790272006, 19340))) || ((max((((arr_5 [i_0] [i_1] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_1)), (arr_4 [i_1 - 3] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
