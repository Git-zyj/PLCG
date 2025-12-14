/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((max((arr_1 [i_0 - 1]), 4294967295)) ^ (((16 & (arr_1 [i_0 - 1]))))));
        var_20 = (min(var_20, ((((min((max(1, var_10)), ((((arr_1 [i_0 + 1]) && 1322993682))))) > (((arr_1 [i_0 - 2]) - (arr_1 [i_0 + 1]))))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [8] [i_1 + 1] |= arr_4 [i_1];
        var_21 = ((((7 > (arr_0 [i_1 - 1] [i_1 - 2]))) ? (((((arr_0 [i_1 - 1] [i_1 - 2]) && -168443631284191924)))) : (((arr_0 [i_1 - 1] [i_1 - 1]) / (arr_0 [i_1 + 1] [i_1 - 1])))));
    }
    var_22 = (min(((var_11 ? (((24 ? var_7 : var_1))) : ((11 ? var_15 : var_8)))), (~245)));
    var_23 = var_1;
    var_24 &= (((245 ? ((21 ? 17 : var_18)) : (max(var_17, 1)))));
    var_25 = ((17 >= 64) ? ((((24850 ? 245 : 42186)) - (4294967286 || 6463))) : 11);
    #pragma endscop
}
