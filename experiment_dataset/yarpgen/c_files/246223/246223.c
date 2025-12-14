/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(((var_14 ? 8074 : var_8)), var_15))) ? (max(var_9, var_6)) : (((min(var_10, var_6))))));
    var_17 = (((max(var_4, var_14))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 32767;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 |= ((~8074) ? (max((arr_3 [i_1]), ((((arr_5 [i_1]) ? (arr_4 [i_1] [i_1]) : var_3))))) : (~8564253488242025130));
        arr_7 [i_1] [i_1] = (((arr_3 [i_1]) ? 4122173814 : (arr_4 [i_1] [i_1])));
        var_20 = (841166010 & 4122173816);
    }
    #pragma endscop
}
