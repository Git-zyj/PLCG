/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!-var_6) | var_11));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((~(arr_1 [i_0]))))));
        var_17 = (!(arr_1 [i_0]));
    }
    var_18 = (((((var_1 ? 15063869578251652594 : (-118 - var_8)))) ? ((max(7660651788904283215, var_13))) : var_0));
    var_19 = 1124273766;
    #pragma endscop
}
