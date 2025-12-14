/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((4926574922652027223 ? var_5 : var_1)))));
    var_17 = (((min(((var_14 ? var_15 : -102)), (var_3 + 118))) * var_11));
    var_18 = (((((~0) | var_5))) ? (max((~var_8), var_4)) : (0 || 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 -= 17;
                    var_20 = var_4;
                    var_21 = (max(var_21, var_3));
                    var_22 = 65535;
                }
            }
        }
    }
    #pragma endscop
}
