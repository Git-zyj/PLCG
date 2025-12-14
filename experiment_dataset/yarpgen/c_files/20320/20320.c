/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((3360984055 & (var_3 >= var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = (-114 - 1);
                arr_6 [i_0] [0] &= -var_14;
            }
        }
    }
    var_17 *= (max(var_4, var_1));
    var_18 = (min(var_18, (var_2 >= var_8)));
    #pragma endscop
}
