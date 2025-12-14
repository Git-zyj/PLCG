/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((max(17029100778083094100, var_18)), var_6)) >= (((max(var_17, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = 18446744073709551615;
                    var_22 = ((-1 ? var_19 : (arr_6 [i_0] [i_1])));
                    arr_8 [i_1] [i_1] = (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
