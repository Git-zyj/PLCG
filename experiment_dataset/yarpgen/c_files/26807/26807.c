/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((min(var_11, var_3)) * ((var_11 ? 15 : var_6)))) * (((~(var_8 < var_11))))));
    var_13 = (((min(((var_9 << (var_1 - 223))), -1146)) ^ ((0 ? 1 : -32760))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((!(min(1, 1))));
                var_15 = ((1 >> (((~-3883355167178490486) - 3883355167178490484))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
