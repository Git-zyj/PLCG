/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((((1632630986 < (max(14417110408266545806, 31))))), ((((698842943 ? var_5 : -1)) % ((var_11 ? 1795870845 : -110315815)))));
    var_19 = ((((max(var_16, (~var_16)))) * (((-698842949 ? var_7 : var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) ? -1404819653463769326 : (arr_1 [i_0])));
        arr_4 [i_0] = 29793;
    }
    #pragma endscop
}
