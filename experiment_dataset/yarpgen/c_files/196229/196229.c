/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_5;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 |= -29881;
                var_16 = 3455028496;
                var_17 = (-127 - 1);
                arr_6 [i_0] [19] = (((arr_0 [i_0] [i_1]) || ((max(111, (arr_4 [i_0] [i_1 - 2]))))));
                var_18 = 29880;
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
