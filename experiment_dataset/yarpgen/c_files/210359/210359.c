/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_3 && var_8) ? ((var_9 ? var_12 : 248)) : ((max(var_7, var_11))))) ^ var_12));
    var_17 = var_5;
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((((~(17806 % 113)))) ? ((max(159, 31))) : 65535));
                arr_5 [i_0] [i_1] [5] = (max(((((arr_4 [5] [i_0] [i_1]) <= ((min(59297, 141)))))), var_8));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_3] = (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]);
                            var_20 = (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]);
                            var_21 = var_5;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
