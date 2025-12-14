/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = -24725;
                    var_22 = ((199 ? 0 : 115));
                    var_23 = (min(var_23, ((((((arr_0 [i_1 + 2]) ? var_4 : (arr_0 [i_1 + 1]))) <= (!1))))));
                }
            }
        }
    }
    var_24 &= (~var_16);
    var_25 = var_13;
    #pragma endscop
}
