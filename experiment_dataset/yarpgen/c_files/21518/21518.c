/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = ((((var_10 && (!var_0))) ? var_3 : (min(var_1, var_2))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_18 = (((arr_2 [3]) ^ 1442634086));
        arr_4 [i_0] = ((((((min(var_6, var_7))) ? 1 : ((-1442634086 ? -8707604798368894536 : 7203592459759185105))))) ? ((var_11 | (-3 | 4693119830676817273))) : ((max(-8707604798368894519, 49572))));
    }
    #pragma endscop
}
