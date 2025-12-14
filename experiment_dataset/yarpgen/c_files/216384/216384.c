/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [14] = ((!(max((((arr_0 [i_0]) && 8)), (((arr_0 [0]) && (arr_0 [i_0])))))));
        var_13 = (!(arr_0 [i_0]));
    }
    var_14 = (min(((max((var_11 || 10567895331629937128), (212 || 31)))), ((var_3 ? (var_4 * var_6) : var_5))));
    #pragma endscop
}
