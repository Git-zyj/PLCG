/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((-((((arr_0 [i_0]) == (arr_0 [i_0]))))));
        var_20 *= (((((((arr_1 [i_0] [i_0]) ? 13660 : (arr_1 [i_0] [i_0]))) < (var_7 == var_4))) ? ((37857 ? (((arr_1 [i_0] [i_0]) ? var_14 : (arr_0 [i_0]))) : 65535)) : 40606));
        var_21 -= (min((max(65534, (arr_0 [i_0]))), ((var_1 | (var_10 + 40594)))));
        arr_4 [i_0] [i_0] = (((((var_3 & (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
