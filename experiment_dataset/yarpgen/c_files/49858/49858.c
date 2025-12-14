/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (max(2032045641, (arr_2 [9] [i_0] [i_0])));
                    var_20 = (1 & -2032045633);
                }
            }
        }
    }
    var_21 = (min(var_21, ((1 ? -10708 : -81))));
    var_22 = (1 - 5);
    var_23 |= (((((((min(6, var_8))) ? var_11 : (((max(-96, 203))))))) ? var_0 : 2335978965));
    #pragma endscop
}
