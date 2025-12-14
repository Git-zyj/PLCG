/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((var_5 + 2147483647) << (!var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((arr_2 [i_1 + 2] [i_1 + 2] [i_1 - 3]) <= ((max(17089, var_0)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = 17089;
                                var_14 = ((((max((min((arr_9 [i_2 + 1] [i_3]), (arr_2 [i_0] [i_1] [i_2]))), 35458))) ? (((-((var_3 ? 17094 : 48459))))) : (min((arr_2 [i_0] [i_1] [10]), ((max(17102, 113)))))));
                            }
                        }
                    }
                }
                var_15 = ((+(((!(((arr_5 [i_1] [i_0] [i_0]) < var_8)))))));
            }
        }
    }
    #pragma endscop
}
