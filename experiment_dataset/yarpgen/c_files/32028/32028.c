/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~7549983523841080416);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((((max((arr_0 [i_0] [i_0]), var_7))) ? (max(1, var_11)) : (max(var_5, (arr_3 [i_0]))))) < (max(((7549983523841080411 ? 1023 : var_10)), (arr_0 [i_0] [i_0]))));
        var_13 = (min((max((((~(arr_2 [i_0])))), (~10896760549868471177))), (arr_3 [i_0])));
        var_14 = 182;
    }
    var_15 = (min(870275993, var_1));
    var_16 -= (max((((var_6 && (((17645 >> (47891 - 47864))))))), ((-(max(var_4, 10896760549868471200))))));
    #pragma endscop
}
