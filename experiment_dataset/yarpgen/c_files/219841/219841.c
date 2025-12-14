/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0 + 1] &= (((6418955266542577782 ? (arr_2 [13]) : 57753927)));
        arr_4 [i_0] [0] = (((arr_1 [i_0 + 1]) ? 12027788807166973834 : ((57753927 ? var_8 : 2060155934971457785))));
    }
    var_16 &= ((6418955266542577782 ? (min(((65504 ? 0 : 70)), (((-42 ? -65520 : var_15))))) : ((max(var_6, var_0)))));
    var_17 = (max(var_17, ((min(var_6, var_0)))));
    var_18 = var_6;
    #pragma endscop
}
