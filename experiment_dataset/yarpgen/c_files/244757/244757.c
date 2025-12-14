/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (((max(-31743, var_13)) + var_12));
                    arr_7 [3] [i_0] = var_16;
                }
            }
        }
    }
    var_20 *= var_0;
    var_21 = -13187;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {
                    var_22 = (~38);
                    arr_15 [i_3] [i_3] [i_3] = (((((var_3 ? var_17 : var_6))) && ((min(var_6, 1)))));
                }
            }
        }
    }
    #pragma endscop
}
