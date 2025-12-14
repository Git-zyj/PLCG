/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [0] [i_1] [i_0] |= (45826 > 224);
                            arr_15 [i_2] [i_2] |= var_1;
                        }
                    }
                }
                var_15 = (~30720);
            }
        }
    }
    var_16 = (max(var_16, (((var_9 - ((((var_6 ? var_10 : var_9)) - var_0)))))));
    #pragma endscop
}
