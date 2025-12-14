/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 |= (((max(var_0, 121))) ? (((arr_12 [i_1] [i_1] [i_0] [i_3] [i_3]) ? (arr_12 [i_1] [i_1] [i_0] [i_4] [i_4]) : 389580945)) : 213);
                                arr_13 [i_0] [i_3] = (((((-42 > (arr_5 [i_1 + 2] [i_1 - 1] [i_0 + 3])))) > (((var_5 >= (arr_11 [i_3] [i_2 + 1] [i_1 + 1] [i_1 + 2] [i_3]))))));
                            }
                        }
                    }
                }
                var_12 |= ((((min(1, 1)) && (-28617 * var_9))));
                arr_14 [i_1] [i_0] |= 28633;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_13 = ((((min(var_5, -28618))) ? ((min((arr_8 [i_1 - 1]), (arr_8 [i_1 + 1])))) : ((3 ? var_7 : (arr_8 [i_1 - 1])))));
                            var_14 |= (((max((~var_3), var_4))) ? ((((max(1, var_6))) ? 4206205848282139781 : (var_5 & var_4))) : (((~(((arr_15 [i_0] [i_0] [i_0] [i_0]) ? var_7 : 1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
