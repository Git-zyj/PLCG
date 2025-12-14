/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (0 + var_10);
    var_20 += ((!((((var_3 ^ 53) * (max(4996583803737443370, (-127 - 1))))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_21 = (max(((var_16 ? var_2 : (arr_0 [i_0] [i_0]))), ((max(var_8, -32765)))));
        var_22 += (((((((((var_4 ? 4294967295 : var_5))) >= -27)))) % -4294967288));
        arr_3 [i_0] = (max((((37 == 32765) ? (arr_1 [i_0]) : 53)), (7 != var_13)));
    }
    #pragma endscop
}
