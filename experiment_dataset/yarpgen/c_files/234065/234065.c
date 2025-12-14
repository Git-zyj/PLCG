/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (var_17 < -var_10);
                var_19 += (((!(var_17 < var_17))));
                arr_6 [8] &= ((-var_15 >> ((var_17 ? var_14 : var_16))));
                arr_7 [i_0] = (~-var_10);
            }
        }
    }
    var_20 = (~var_6);
    var_21 &= ((~var_16) / var_7);
    var_22 &= (((!var_11) ? var_13 : var_11));
    #pragma endscop
}
