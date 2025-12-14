/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3 + 1] = ((max((arr_10 [i_0] [i_0] [i_3 + 1]), (~0))));
                            arr_14 [i_1] [i_1] [i_0] [i_0] [i_1] = (((65528 + 402653184) ? ((var_1 - ((max((arr_4 [i_0] [i_0]), var_5))))) : var_6));
                        }
                    }
                }
                arr_15 [4] [i_1 + 1] = var_4;
            }
        }
    }
    #pragma endscop
}
