/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(((var_1 ? var_9 : var_4)), ((var_0 ? var_11 : 146))))) ? ((((1 >> (var_10 - 107))))) : var_4);
    var_14 = ((((max(var_11, var_12))) | (var_6 <= var_7)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, (((+((min((arr_3 [i_0 + 1]), (arr_3 [i_0 - 2])))))))));
        var_16 = ((min((151 & 165), (arr_0 [i_0]))));
    }
    #pragma endscop
}
