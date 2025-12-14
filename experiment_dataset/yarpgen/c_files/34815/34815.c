/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((max(var_8, (18588 == 12898963589037733660)))), (min(var_5, (var_8 % var_3))));
    var_18 = var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = (((((1 ? 1 : var_14))) ? (((arr_1 [i_0 - 1]) - (((arr_1 [i_0 - 1]) - 8945740538274099607)))) : (arr_1 [i_0 - 1])));
        var_20 = (min((((~(arr_0 [i_0])))), (((arr_1 [i_0 - 1]) ? 6026262065700516245 : (arr_1 [i_0 - 1])))));
    }
    #pragma endscop
}
