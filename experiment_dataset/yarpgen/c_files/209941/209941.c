/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (96 >= var_0);
    var_17 = var_9;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_18 = ((80 >> (((((-121 >= -32) ? 106 : (84 - -96))) - 179))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((-((min((min(122, -88)), 127)))));
                    arr_9 [i_0] = ((-(((80 ? 63 : 32)))));
                }
            }
        }
    }
    var_20 = (max(var_13, var_5));
    #pragma endscop
}
