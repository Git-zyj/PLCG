/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((var_2 > var_7) ? (~var_0) : var_9)), var_8));
    var_11 = (((~-8415450064146740984) == var_3));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 = (min(var_12, ((((arr_1 [i_0 + 2]) >= ((min((arr_0 [i_0 + 2]), 15))))))));
        var_13 = ((!((((var_5 | 173) ? (((arr_1 [i_0]) ? 65365 : 185)) : (arr_0 [i_0]))))));
    }
    var_14 = ((var_0 ? var_8 : var_4));
    #pragma endscop
}
