/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (((((min(var_14, var_5)))) ? ((min(((var_4 ? var_12 : var_13)), ((-115 ? -92 : -115))))) : (max(((var_2 ? var_6 : var_0)), var_16))));
                    var_19 = (max(var_19, var_2));
                }
            }
        }
    }
    var_20 = (((((var_14 ? (min(var_14, var_0)) : ((min(var_13, var_15)))))) ? ((max(var_0, var_12))) : ((min(((min(var_8, var_11))), (~-1196166795))))));
    var_21 += -1196166777;
    var_22 = var_5;
    #pragma endscop
}
