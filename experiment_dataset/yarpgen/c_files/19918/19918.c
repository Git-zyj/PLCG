/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = var_2;
                var_13 = ((-(((-127 - 1) & 22442))));
            }
        }
    }
    var_14 = ((121 ? (((((32764 ? 32765 : 127))) ? ((var_1 ? var_1 : var_2)) : ((var_9 ? var_1 : var_5)))) : var_10));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_3] [i_4] [i_5 - 1] = (max(((min((arr_1 [i_2 - 1] [i_5 - 1]), (arr_1 [i_2 + 1] [i_5 - 1])))), (min(var_4, var_2))));
                            var_15 = (min(var_5, ((max(var_7, ((var_6 ? 80 : var_1)))))));
                        }
                    }
                }
                var_16 = (((14156215951750326261 ? var_10 : (arr_2 [i_2 - 1] [i_2 - 1]))));
            }
        }
    }
    #pragma endscop
}
