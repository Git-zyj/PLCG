/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(var_13, (((-8496284985493752122 ? var_4 : var_6))))), var_13));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (max(-7964373098162284301, -670363993217457436));
        arr_4 [i_0] &= (((((1419126353 ? 221 : -3))) ? (max(-13, (~var_3))) : (((!(!561850441793536))))));
    }
    var_19 &= ((~((~((var_3 ? 208 : var_2))))));
    #pragma endscop
}
