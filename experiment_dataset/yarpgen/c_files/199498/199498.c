/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(-32757, 7138));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((max((((!((((arr_4 [i_0] [i_1]) ? var_0 : var_2)))))), ((var_4 * (arr_6 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [20] [3] = var_4;
                                arr_14 [i_0] [i_1] = ((+(((arr_1 [0]) ? (arr_5 [i_1 + 1] [i_1] [i_4]) : (((var_6 ? var_8 : var_0)))))));
                            }
                        }
                    }
                    var_12 = ((((((var_3 & var_4) >= (arr_10 [i_1] [1] [i_1])))) != ((((((var_1 ? var_5 : (arr_7 [i_2] [i_1] [i_1] [i_0])))) && var_9)))));
                }
            }
        }
    }
    #pragma endscop
}
