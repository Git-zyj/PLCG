/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 -= ((min(255, 1)));
                var_17 = ((1 | ((1 << (255 - 244)))));
                arr_6 [i_0 + 3] [i_0 + 3] = 27718;
                var_18 = (max(var_18, 27717));
            }
        }
    }
    #pragma endscop
}
