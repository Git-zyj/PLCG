/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (max(var_13, ((max(((max(1663933542993856919, -1))), -var_10)))));
    var_14 = (max(((var_11 ? var_0 : var_7)), (((~((var_2 ? 3 : 1)))))));
    var_15 += ((((((~-592172651) | ((~(-9223372036854775807 - 1)))))) >= 13999152409428256609));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [0] [i_0] = arr_0 [i_0] [i_0];
        var_16 = (max((911207586 - 117), (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
