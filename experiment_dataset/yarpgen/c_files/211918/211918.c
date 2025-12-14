/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(((var_14 ? var_12 : var_13)), var_12))) ? (((max(var_9, var_0)) + var_7)) : var_7));
    var_17 |= ((((((var_1 ? var_12 : var_1)) | var_4))) ? ((var_7 ? (var_5 || var_4) : ((max(var_2, var_7))))) : var_15);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(17591649173504, 16467507861460834971))) ? (min((max(var_10, var_1)), (arr_1 [i_0]))) : ((~((var_10 % (arr_2 [i_0] [i_0])))))));
        var_18 = (((arr_1 [i_0]) * (max((arr_0 [15]), (((arr_2 [1] [i_0]) * (arr_1 [i_0])))))));
    }
    var_19 &= (min((((~(21342 >= 450811444)))), var_6));
    #pragma endscop
}
