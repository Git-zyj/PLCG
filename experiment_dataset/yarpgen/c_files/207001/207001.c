/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((((var_15 ? var_3 : var_4)) << (((~var_4) - 1546280195)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [4] [i_1] = ((-((134716072 << (4196285809 - 4196285806)))));
                arr_7 [i_0] [i_1] [8] = 92;
                var_17 += ((((((-var_6 + 2147483647) << ((((var_6 ? var_0 : var_14)) - 31008))))) ? (~var_8) : -var_13));
            }
        }
    }
    var_18 = ((-var_10 - (((var_13 || (((0 ? 277076930199552 : var_6))))))));
    #pragma endscop
}
