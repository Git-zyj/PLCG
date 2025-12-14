/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max((39452 * 0), var_7)))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] [19] = ((-(min((((arr_0 [i_0] [13]) ^ (arr_1 [i_0] [3]))), ((((arr_0 [i_0] [i_0]) ? var_15 : var_17)))))));
        var_19 = (((((var_8 == 0) ? var_16 : (arr_0 [i_0 - 1] [i_0 - 2]))) != (0 != 248)));
        var_20 ^= (min(((0 ? (arr_0 [2] [i_0 - 3]) : (((60 ? (arr_2 [2]) : var_1))))), 0));
    }
    var_21 = (0 * -111);
    var_22 = (((var_3 + var_3) && (~var_2)));
    var_23 = var_2;
    #pragma endscop
}
