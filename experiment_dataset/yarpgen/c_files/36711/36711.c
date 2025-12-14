/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 |= (min((min(((var_6 ? var_5 : 17700052582202511656)), (!16672243833644606871))), (((15202 ? var_4 : var_11)))));
    var_14 = (min(var_11, (var_8 / var_8)));
    var_15 = 50333;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 |= (min(0, ((var_8 ? 10 : 3480941751733973316))));
        var_17 = ((50333 ? -1627835475 : 30));
    }
    #pragma endscop
}
