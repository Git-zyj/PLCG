/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 -= ((!((max(85, 85)))));
                arr_4 [i_0] [i_0] = (-1868973027 ? (arr_1 [i_0]) : 0);
                arr_5 [i_0] [i_1 + 2] = -0;
            }
        }
    }
    #pragma endscop
}
