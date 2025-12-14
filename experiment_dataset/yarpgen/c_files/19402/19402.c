/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 255;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (29574367 | 5);
        var_14 = ((var_10 / (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (min(var_15, (0 > 0)));
        var_16 = ((((min(32905, ((18 ? 20 : 5860))))) ? ((((arr_4 [i_1]) ? 0 : 0))) : ((-(max((arr_4 [6]), 26439))))));
        var_17 += ((min((arr_4 [i_1]), (arr_5 [i_1]))));
        arr_6 [i_1] = var_0;
    }
    #pragma endscop
}
