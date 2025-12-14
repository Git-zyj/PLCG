/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(664256477, -126))) && var_0));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_21 = (max(var_21, (min((arr_0 [i_0 + 2] [2]), (((((0 ? 2157694301454682690 : 3630710818))) ? (3630710822 << 1) : (arr_1 [6])))))));
        var_22 = (((arr_1 [i_0]) == (min((((!(-32767 - 1)))), (max(3630710811, (arr_0 [i_0] [i_0])))))));
    }
    #pragma endscop
}
