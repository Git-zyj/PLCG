/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? var_9 : (((max(1814445418269609943, var_1)) / var_8))));
    var_14 = (min(var_14, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [20] [20] &= (min(-3919719491232314183, 9223372036854775807));
                    var_15 = (max(var_15, ((((arr_0 [i_1 + 2] [i_1 - 2]) ? (102 == 1384411862) : (!2910555434))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_16 -= (--101);
                    var_17 = (max(var_17, ((min((((((arr_2 [i_5] [0] [i_5]) || 154)) ? (((!(arr_2 [1] [i_4] [i_3])))) : var_2)), (arr_9 [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
