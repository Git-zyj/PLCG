/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((~((min(15, 165))))) < var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (26374 || 108);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = (arr_13 [i_0] [i_0] [i_3]);
                                var_17 += (min(((31998 >> (128 - 121))), (var_5 - var_9)));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, var_9));
                arr_15 [i_0] [i_0] = ((((var_13 & (arr_12 [i_0] [i_0] [i_0 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1]))) < ((max(var_14, (arr_12 [i_0 - 1] [i_0] [i_0 + 1] [i_1] [i_1] [i_1 + 2]))))));
                var_19 = (min(((((arr_2 [i_0 + 2]) < var_12))), var_6));
            }
        }
    }
    #pragma endscop
}
