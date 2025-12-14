/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max((((((max(78, var_4))) && -var_9))), ((var_2 >> (var_9 - 17139))))))));
    var_16 = var_6;
    var_17 = (~(((var_2 >= var_2) ? 5240058470660490282 : var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) / 31174));
        arr_3 [22] = 11874;
    }
    var_18 = (min(var_18, (((max(((var_12 ? var_8 : var_4)), (((var_3 ? var_1 : -28))))) ^ (max(((var_9 ? var_3 : var_13)), var_8))))));
    #pragma endscop
}
