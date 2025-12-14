/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? (((var_12 ? var_1 : var_6))) : ((min(4303749, ((var_13 ? 4290663547 : var_13)))))));
    var_19 = (max((var_15 | var_15), var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    arr_10 [i_0] |= 13565;
                    arr_11 [i_0 - 1] [i_1] [1] [i_2 + 1] = ((-4048915288217428248 ? ((var_2 ? -4048915288217428263 : (arr_2 [i_1 - 3]))) : (max(var_4, 4048915288217428255))));
                }
            }
        }
    }
    #pragma endscop
}
