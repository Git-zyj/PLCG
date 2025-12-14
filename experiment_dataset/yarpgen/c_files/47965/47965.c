/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((var_8 ^ var_2), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 -= var_5;
                arr_6 [i_0] = ((((max((arr_3 [i_0] [i_0 + 1]), 6613937616491681609))) ? (~-4489024823320817389) : (~var_1)));
            }
        }
    }
    var_12 = (min(var_12, var_9));
    var_13 = (min(var_13, (((((((var_6 ? var_0 : var_1))) ? (~112) : ((var_8 ? var_7 : var_3))))))));
    var_14 = (min(var_14, (((var_4 ? 5864818151102986021 : (((var_0 / var_5) - (((var_3 ? var_7 : 197))))))))));
    #pragma endscop
}
