/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 ^= (((126 | var_7) * 1));
                var_15 = (min(-var_5, (var_11 || var_3)));
                arr_6 [i_0] [12] &= var_2;
            }
        }
    }
    var_16 &= ((((((~1) ? (var_7 || var_9) : (min(7258187306444340468, var_8))))) ? 1 : (--7258187306444340455)));
    var_17 = var_6;
    #pragma endscop
}
