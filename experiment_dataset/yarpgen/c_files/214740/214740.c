/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (arr_0 [i_0] [i_0]);
                    var_17 -= (((-var_6 ? (arr_0 [i_0] [i_0]) : ((var_2 >> (var_3 + 59))))));
                    var_18 = 255;
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
