/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -8438861454417783728;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_18 += (((((arr_0 [i_0 - 1] [i_0]) ? 2071145580 : (min(5052785211187794154, 0)))) < (arr_2 [i_0])));
        arr_4 [i_0] = (((arr_0 [i_0 - 1] [i_0 - 2]) ? ((min(var_11, var_1))) : ((max(var_7, (arr_3 [i_0 + 1]))))));
    }
    var_19 = (min(var_19, var_6));
    #pragma endscop
}
