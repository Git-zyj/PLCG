/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 1329406769;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0 + 1])));
        arr_3 [i_0] = ((!1329406769) ^ (((!4294967295) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : 3803702884)));
        var_14 = (min(var_14, ((2965560523 + ((((max(var_7, var_0))) ? (arr_1 [i_0]) : ((3804729513 ? var_8 : 490237782))))))));
    }
    var_15 = max(var_5, (~3227037092));
    var_16 = (-(var_11 & 4097495157));
    #pragma endscop
}
