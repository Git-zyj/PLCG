/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((!-32765) ? -1801446492 : 18446744073709551615));
        var_17 = (11602 == -862999160);
        var_18 = (min(var_18, ((((arr_0 [i_0]) ? 5932549901026794261 : (arr_0 [i_0]))))));
        var_19 = (max(var_19, ((((var_8 && var_5) && ((70 && (arr_0 [i_0]))))))));
    }
    var_20 = -862999182;
    #pragma endscop
}
