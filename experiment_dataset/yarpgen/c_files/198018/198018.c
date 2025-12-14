/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max((((~((var_1 << (((arr_1 [i_0] [i_0]) + 482896889408850307))))))), ((-((var_4 ? 16821 : 2601822042))))));
        var_13 = (((((var_5 * ((((var_0 == (arr_1 [i_0] [i_0])))))))) || (!3610220528)));
    }
    var_14 = 11419641113757783311;
    var_15 ^= (!(!1));
    #pragma endscop
}
