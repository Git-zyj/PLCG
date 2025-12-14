/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max((((min(62407, -62)))), 1092442310110298827));
    var_17 = (max(var_4, 62));
    var_18 = ((var_7 ? -var_12 : (((~65510) ^ var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 += (arr_5 [18]);
                var_20 = 62;
                arr_7 [i_0] [i_0] [i_1] = (arr_6 [i_0] [i_1]);
                var_21 = var_3;
            }
        }
    }
    #pragma endscop
}
