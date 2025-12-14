/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (max(var_11, ((min((((-(127 | var_1)))), (((4398045986816 / var_7) % var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = var_0;
                arr_5 [0] = ((-(((arr_1 [i_0 - 1] [8]) / ((min(1, var_1)))))));
                arr_6 [i_0] = (((((((-(arr_2 [i_0] [i_1])))) ? var_4 : (max((arr_0 [i_0 - 2] [i_0 - 2]), 7085236073470840906))))) ? (((((-1260683220 ? var_4 : var_6))) / ((var_7 ? (arr_3 [15] [i_0]) : 127)))) : (((236 ? 1 : (!var_9)))));
            }
        }
    }
    #pragma endscop
}
