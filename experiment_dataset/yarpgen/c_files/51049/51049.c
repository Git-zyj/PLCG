/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = (((244 ? 244 : 1777467725)));
                    var_21 = (((((~(arr_7 [i_0 - 1] [5] [i_0] [i_0 + 1])))) ? ((78 % (arr_7 [i_0 + 1] [i_1] [i_0] [i_0 + 1]))) : 21));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((max((((arr_1 [i_0] [9]) ? 1 : var_8)), -250)))));
                                var_23 = (((((1777467725 ? var_7 : (arr_0 [i_0])))) ^ var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((min(var_1, var_2)))));
    #pragma endscop
}
