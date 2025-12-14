/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = 13;
        arr_3 [i_0] = ((((min((~var_4), (arr_1 [i_0])))) ? ((((arr_0 [i_0] [i_0]) == 212250082584419704))) : 0));
        var_13 = (min((min(-var_7, (15 / -1942625491944351571))), 58142));
        arr_4 [i_0] = ((!(((~((min(0, 1))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (!212250082584419730);
        var_15 = ((var_7 ? (!6234602143830741248) : (arr_0 [10] [i_1])));
    }
    #pragma endscop
}
