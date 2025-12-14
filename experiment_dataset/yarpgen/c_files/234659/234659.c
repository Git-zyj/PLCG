/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((!var_6), (((var_5 + var_2) && var_2))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((max(var_2, var_6))));
        var_12 = (max((arr_1 [i_0]), ((((((var_8 ? -4563688408855480108 : 1))) && ((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))));
    }
    #pragma endscop
}
