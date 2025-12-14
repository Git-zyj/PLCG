/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((((arr_3 [i_0] [i_1]) + (arr_0 [i_0] [i_0])))))));
                arr_5 [i_0] [i_1] &= ((!(arr_2 [i_0])));
                var_22 = (max(var_22, ((((!var_17) / ((65529 & (arr_0 [1] [i_1]))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_23 &= (((arr_9 [i_3 + 1]) > var_9));
                        var_24 |= (-28 ? (arr_11 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_13 [14] [i_3 - 2] [i_3 - 2]));
                    }
                }
            }
        }
        arr_14 [1] &= -1;
        var_25 = (arr_10 [i_2]);
    }
    #pragma endscop
}
