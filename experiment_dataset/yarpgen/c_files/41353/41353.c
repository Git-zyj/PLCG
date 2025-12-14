/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (!var_5)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_3;
        var_20 = (!var_11);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_3;
        var_21 *= ((-27382 ? 114 : 114));
        arr_7 [i_1] = 114;
    }
    var_22 = (-115 & 110);
    #pragma endscop
}
