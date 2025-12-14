/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(3800451051913941294, 853032702)) < var_8))) == (!7680)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = ((-3800451051913941319 && ((min(((var_7 ? var_11 : 3800451051913941305)), ((var_11 ? 174 : var_2)))))));
        var_14 -= min((min((arr_0 [8]), (arr_1 [i_0 - 1]))), ((((arr_1 [i_0]) <= ((159 ? -3800451051913941277 : 177))))));
        var_15 = ((((~((max(1, (arr_1 [i_0]))))))) - ((~(1753 | var_2))));
        var_16 += ((((min(-var_4, ((((arr_1 [i_0]) <= -3800451051913941295)))))) <= (((arr_1 [i_0 + 1]) ? 81 : 167))));
    }
    var_17 = (min(var_17, var_2));
    var_18 = (max(var_18, var_0));
    #pragma endscop
}
