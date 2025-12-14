/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 *= ((((((((var_7 ? var_2 : var_6))) && (((var_11 ? var_1 : var_13)))))) != (((((2576395306634630006 ? 65535 : 10858))) ? var_3 : var_12))));
                    var_21 = var_11;
                    var_22 = (((((max(var_17, var_12)))) ? (((((10858 ? 10858 : var_17))) ? 50 : ((max(-10858, var_2))))) : (1 & -10866)));
                    arr_9 [i_0] [2] [i_0] [i_2] = (0 | 12254);
                }
            }
        }
    }
    var_23 = (max(((max(var_6, var_14))), (((var_17 / var_3) ? var_8 : var_16))));
    var_24 = (max(var_24, (((min(var_5, var_18))))));
    var_25 = (var_11 ^ var_6);
    var_26 = var_9;
    #pragma endscop
}
