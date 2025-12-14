/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((-4294967283 ? var_15 : 1042140657))) ? ((min(28672, 858))) : 1042140628));
    var_17 = var_3;
    var_18 = ((var_7 ? ((-((var_10 ? var_15 : var_10)))) : var_11));
    var_19 = (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(((1 ? ((var_8 ? var_6 : var_8)) : var_3)), var_0));
                var_21 = (max((((1810205059 & (-535647542 || var_5)))), 8170452687074758388));
                var_22 = ((((min(-8170452687074758409, var_5))) ^ ((min(((max(-858, 113))), ((var_5 ? var_9 : -1042140658)))))));
            }
        }
    }
    #pragma endscop
}
