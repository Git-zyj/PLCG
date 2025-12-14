/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(var_14, ((-var_4 ? (min(-7830035074913911082, var_10)) : ((min(24, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [9] [i_1] [i_1] = (min((((((231 ? 24 : 6291456))) ? ((((!(arr_3 [i_1] [i_0]))))) : (min(var_7, (arr_2 [i_1] [i_0]))))), (((min(9, var_15)) & (((~(arr_1 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_19 = (~232);
                    arr_9 [i_0] [i_0 + 1] [i_2] [22] = ((((((((arr_5 [0]) + 2147483647)) >> (((arr_8 [12] [i_1] [i_0]) + 5182044975091246754))))) ? var_2 : ((((arr_5 [i_0]) ? (arr_7 [i_2]) : var_0)))));
                    arr_10 [i_2] = ((-(((arr_5 [i_0]) ? var_3 : 4294967295))));
                }
            }
        }
    }
    #pragma endscop
}
