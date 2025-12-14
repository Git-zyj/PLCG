/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((!var_2) | 13477849984638174207))) >= (4968894089071377396 - 8149935122841234617));
        var_13 ^= (((var_1 | -7090686428196588585) | (((max((arr_2 [i_0]), (arr_1 [i_0])))))));
        var_14 = (max(var_14, 255));
    }
    var_15 = (max(var_15, (((-32763 ? var_10 : ((min(var_2, var_0))))))));
    #pragma endscop
}
