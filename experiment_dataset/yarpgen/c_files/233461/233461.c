/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_6 ? var_10 : var_4))) ? (((var_5 ? (var_6 - var_9) : var_11))) : -32748));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] |= (!32748);
        var_13 = (min((((((-(arr_0 [i_0] [i_0])))) ? (min(var_3, (arr_0 [i_0] [i_0]))) : -var_1)), var_6));
        arr_3 [14] [i_0] = ((!((var_7 < (((max(var_2, var_10))))))));
        arr_4 [i_0] = 8089305048040252751;
    }
    var_14 = ((((min(((var_10 ? var_0 : var_9)), var_6))) ? (((-(max(-32758, -8089305048040252745))))) : ((((max(var_0, var_5))) ? ((var_2 ? var_7 : var_0)) : (((66 ? -32759 : -8089305048040252751)))))));
    #pragma endscop
}
