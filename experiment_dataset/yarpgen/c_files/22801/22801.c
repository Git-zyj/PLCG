/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((var_6 ? -var_10 : ((1565181318856015755 ? var_5 : var_6))))) ? ((max((var_12 > var_0), var_3))) : 1692762912347728619));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 24));
                arr_6 [i_0] [i_1] = (max(((max((arr_0 [i_1] [i_0]), 0))), ((max((var_5 >= var_9), var_11)))));
                var_15 = 32767;
                var_16 = (arr_1 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
