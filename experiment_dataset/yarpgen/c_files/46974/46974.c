/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((65535 | var_6) ? var_6 : (var_3 > var_7)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [3] [i_1] = ((!(!63)));
                    var_12 |= var_1;
                }
            }
        }
    }
    #pragma endscop
}
