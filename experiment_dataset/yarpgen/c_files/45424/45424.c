/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 -= var_12;
                var_20 = ((((max(var_4, (((arr_3 [i_1] [i_0]) ? var_3 : var_0))))) ? 30451 : (arr_4 [i_0] [i_0] [7])));
                var_21 = ((-(min((((var_2 > (arr_0 [i_0])))), -var_6))));
            }
        }
    }
    var_22 = var_4;
    var_23 = var_0;
    #pragma endscop
}
