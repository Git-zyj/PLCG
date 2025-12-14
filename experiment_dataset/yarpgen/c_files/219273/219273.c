/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!(!0))))) & ((max(960057387, 14078109041011250378))));
    var_20 = (min(var_20, var_1));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(var_21, ((((((min(4398046494720, 16)))) ? ((~((35 << (137438953344 - 137438953330))))) : (~1398322678))))));
        var_22 = (max(var_22, var_14));
        var_23 = (min(var_23, -3318481054014837963));
        arr_4 [i_0] [i_0] = var_13;
    }
    var_24 = var_18;
    var_25 = (min(var_25, var_8));
    #pragma endscop
}
