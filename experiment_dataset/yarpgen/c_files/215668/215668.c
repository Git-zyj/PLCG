/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = 2721987828;
                    arr_7 [i_0] [i_1] [i_1] = ((!(((max(1, var_2))))));
                }
            }
        }
    }
    var_21 = var_11;
    var_22 = (((max(0, ((max(0, var_15))))) << ((((((((-2147483647 - 1) ? var_11 : var_11))) ? (~var_2) : var_12)) + 1146660802))));
    var_23 = (max(var_23, var_17));
    #pragma endscop
}
