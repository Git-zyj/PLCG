/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max((min((((5 ? 47667 : var_11))), (max(17, var_10)))), ((max((min(var_1, var_19)), (!203))))));
    var_21 = (var_7 && var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((var_7 ? 47675 : (((((var_5 - (arr_3 [i_0] [i_1]))) == (arr_0 [i_0] [i_0]))))));
                var_22 = ((17868 * ((((max(var_7, (arr_0 [i_1] [i_0])))) ? (var_13 <= 0) : 1))));
                arr_6 [i_0] [i_0] [i_1] = ((~((min((arr_2 [i_0] [i_0]), 0)))));
            }
        }
    }
    var_23 = ((max(17869, ((min(0, -13665))))));
    var_24 = ((4138517755 ? 497577578 : -1111892039));
    #pragma endscop
}
