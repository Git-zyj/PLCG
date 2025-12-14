/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((~(arr_2 [i_0] [i_0]))));
                var_19 -= ((-var_17 + (max(7219737083536265700, (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_20 = ((var_2 || ((min(var_2, var_12)))));
    var_21 &= var_2;
    var_22 = (((51744 ? (var_13 ^ 11227006990173285916) : (var_18 <= var_16))));
    var_23 *= (max((min(211, (max(78, 11227006990173285916)))), (var_17 & -13792)));
    #pragma endscop
}
