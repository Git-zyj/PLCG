/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_2);
    var_17 = var_0;
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (((var_7 < 2840393947) ? 52966949 : (min((~var_9), ((min(2, 76)))))));
                    var_20 = (!var_5);
                }
            }
        }
    }
    var_21 *= (max((min(((2840393947 ? var_5 : 1896068003)), (((43 ? var_8 : var_14))))), var_4));
    #pragma endscop
}
