/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [14] [i_0] = ((((((min(var_6, 80))) ? (!109) : (max(var_13, 168)))) / (((2035307502 ? (1 != 33550336) : var_14)))));
                arr_6 [i_1] [i_0] = ((!((max(var_10, var_13)))));
                var_17 = (max(var_17, (max((80 % var_3), ((((var_11 ? var_2 : var_5)) & ((max(var_7, var_16)))))))));
            }
        }
    }
    var_18 = -var_14;
    var_19 = ((-(((!1102480381) ? var_6 : ((var_7 ? -16 : var_10))))));
    var_20 = var_2;
    #pragma endscop
}
