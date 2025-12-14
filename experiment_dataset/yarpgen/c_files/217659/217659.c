/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_1);
    var_15 = ((((-(max(var_10, var_0)))) > var_2));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 += var_12;
        arr_3 [i_0 - 1] = (min(var_0, 78));
        var_17 = ((((min((arr_2 [i_0]), var_13))) ? ((((max(16675514397262173752, 15660961078411596210))) ? ((240 ? 70 : 11643483967723299384)) : (((var_9 ? 91 : var_7))))) : ((min(((min(var_8, (arr_2 [i_0])))), 9953599670818014673)))));
    }
    #pragma endscop
}
