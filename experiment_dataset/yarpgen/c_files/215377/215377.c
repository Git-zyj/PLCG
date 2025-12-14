/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(var_16, var_12)))) && (((max(var_16, 1306416483)) == var_0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 ^= var_4;
                var_20 = (arr_5 [i_0] [i_0] [10]);
                var_21 = (max(((var_3 ? (arr_3 [i_1 - 1] [i_1 - 1]) : var_12)), 35));
            }
        }
    }
    var_22 = (max(((-1431116205 ? var_7 : (129 >= 8647))), (((var_4 ? var_16 : 1639286472773248054)))));
    var_23 = ((min((var_1 >= var_13), -1761604537)));
    #pragma endscop
}
