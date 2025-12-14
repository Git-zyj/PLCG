/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!-2025485090) < (!1)));
    var_14 = var_8;
    var_15 = ((-(((((0 * (-2147483647 - 1))) != (0 < var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((3568743667 < ((((((-(arr_5 [i_0] [i_1] [i_2])))) >= var_7)))));
                    var_16 = (min(var_16, 1));
                }
            }
        }
    }
    #pragma endscop
}
