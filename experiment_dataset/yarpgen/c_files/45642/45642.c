/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((1 && var_9) ? ((max(110, var_0))) : (!0)))) && ((!((max(var_1, var_2)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (18446744073709551615 != 1);
        arr_3 [i_0] = (((~((-2 ? (arr_2 [i_0] [i_0]) : -8)))) != var_7);
        var_12 = ((~(((arr_0 [i_0]) ^ var_9))));
    }
    #pragma endscop
}
