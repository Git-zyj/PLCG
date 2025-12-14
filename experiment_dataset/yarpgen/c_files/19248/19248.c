/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] |= ((-4 ? 12 : 30));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (((var_5 ? 89 : ((((arr_10 [i_3] [i_1]) || 2))))))));
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((-((((arr_4 [i_0] [i_0]) > var_4)))));
                    }
                }
            }
        }
    }
    var_20 = ((~((-var_9 ? ((0 ? var_10 : var_2)) : (!var_0)))));
    var_21 = (-((((max(3, var_3))) ? var_7 : var_13)));
    #pragma endscop
}
