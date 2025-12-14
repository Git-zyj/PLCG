/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = (!1);
                    var_14 += max((((((var_10 ? var_2 : var_4))) & (max(var_13, var_10)))), (((((max(-61, -294617296))) ? -294617296 : var_0))));
                }
            }
        }
    }
    var_15 = ((!((min((max(var_7, 294617302)), (min(196, var_0)))))));
    #pragma endscop
}
