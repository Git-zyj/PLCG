/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_1] = (~11093845694406228705);
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (-(var_6 <= var_12));
                            arr_12 [i_0] [i_0] [i_0] [i_3] = (max(var_11, var_2));
                        }
                    }
                }
                arr_13 [i_1] = 19651;
            }
        }
    }
    var_16 = -2512185375242969102;
    #pragma endscop
}
