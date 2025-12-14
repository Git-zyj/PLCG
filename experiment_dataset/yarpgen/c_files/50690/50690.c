/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_10 = ((-(!var_8)));
        arr_3 [i_0 - 1] = (((((65535 >> (5016338683936793587 - 5016338683936793566)))) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (((arr_2 [i_0] [i_0]) ? ((((arr_2 [i_0] [i_0]) >> (var_1 - 54627)))) : (((arr_2 [i_0 + 2] [i_0]) ? 30960 : var_6))))));
    }
    var_11 = (min(var_11, 1));
    #pragma endscop
}
