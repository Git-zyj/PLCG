/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 &= ((var_1 || -217766997) != 99);
    var_19 = var_4;
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 |= 0;
                arr_7 [i_0] [i_0] [i_1] = var_6;
                var_22 = (max(var_22, 13172017168878199873));
                var_23 += var_7;
            }
        }
    }
    #pragma endscop
}
