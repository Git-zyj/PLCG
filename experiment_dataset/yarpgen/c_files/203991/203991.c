/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (((((var_1 | (~165214227)))) ? ((~(~4129753066))) : (((var_2 | var_1) | (~2677374364)))));
                    arr_9 [i_0] [i_1] [i_2] [0] = ((var_18 * (13935522785418191189 >= var_5)));
                    var_21 = (min(var_21, ((((165214227 ? var_8 : var_17))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = ((((!var_13) ? (((min((arr_1 [i_0]), (arr_1 [i_4 + 1]))))) : ((-10562 ? 20925 : 4129753068)))));
                                var_23 *= (~5149193853744283231);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
