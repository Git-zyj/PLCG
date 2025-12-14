/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_11 ? var_4 : ((2960222957246580377 ? 19666 : 1165072446))));
    var_13 = ((((max(-19692, var_10))) && var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [0] &= (((((((11 - (arr_0 [1] [11])))))) == -11227774430700848589));
        var_14 = (i_0 % 2 == 0) ? ((((19666 || -29113) ? ((((4201505542 + var_3) < ((((var_0 + 2147483647) << (((arr_1 [i_0]) - 56)))))))) : 1))) : ((((19666 || -29113) ? ((((4201505542 + var_3) < ((((var_0 + 2147483647) << (((((arr_1 [i_0]) - 56)) - 179)))))))) : 1)));
    }
    #pragma endscop
}
