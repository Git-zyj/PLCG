/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((((var_6 / var_4) ? 255 : -var_10)) & ((-((var_4 ? 233 : var_9))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((max(12, var_4)))) ? (max((max(var_2, 3128084911)), (max((arr_0 [i_0] [i_0]), 10)))) : ((-((var_5 ? 3875361765 : 3875361757))))));
        var_14 += (!17);
    }
    var_15 = ((!((max(-var_2, 3849983876)))));
    var_16 = ((((var_10 || (((var_1 ? var_2 : 3875361757))))) ? ((var_10 ? (var_5 % var_7) : (!var_9))) : (max((80 / 10687433011189009659), (419605523 / var_1)))));
    #pragma endscop
}
