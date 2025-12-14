/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 |= (((var_3 + var_10) ? (var_15 > var_0) : (!var_13)));
        var_21 = (max(var_21, ((((var_18 & var_11) ? (var_1 > var_6) : (var_11 | var_14))))));
        var_22 = var_15;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 = ((((((((-112 + 2147483647) << (116 - 116)))) || (((var_0 ? var_0 : var_9))))) ? ((-(!var_17))) : (~var_5)));
        arr_8 [i_1] = (!var_0);
    }
    var_24 = (((((var_3 & (!var_5)))) && (1 <= 1)));
    var_25 = (max(var_25, var_7));
    var_26 = (((var_0 * var_18) / var_12));
    var_27 = (((((var_16 < var_3) / var_19)) ^ (((var_4 >= ((var_10 ? var_10 : var_19)))))));
    #pragma endscop
}
