/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (!var_4);
    var_15 = (max(var_15, var_7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = ((((min((arr_5 [9] [i_2] [i_3]), (arr_5 [i_0] [i_0 - 3] [i_0])))) ? ((-(arr_5 [14] [i_1 - 2] [i_1 - 3]))) : ((~(arr_5 [i_2] [i_2] [i_2])))));
                            arr_9 [i_0] [i_0] [i_0] = (min(((((arr_2 [i_0 - 3] [i_0 - 3]) > var_13))), (min((arr_2 [i_0 - 1] [i_0]), -32749))));
                            var_18 = ((((((arr_6 [i_0] [i_1 - 3] [i_0] [i_3]) ? 1 : (arr_0 [i_0])))) ? (min((arr_6 [i_3] [i_0] [i_0] [i_0 - 1]), (arr_7 [i_0] [i_0 - 3]))) : (min((arr_6 [i_2] [i_1 - 2] [i_0] [i_3]), 252))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
