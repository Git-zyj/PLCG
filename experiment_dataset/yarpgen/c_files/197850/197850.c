/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_7;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (var_7 <= 2014468855);
        var_12 = var_0;
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_13 = (max(var_13, (((-(max(((2014468881 ? -92360119701341674 : (arr_2 [1]))), (arr_3 [i_1 - 1]))))))));
        arr_4 [i_1 + 1] = ((~(((arr_1 [i_1 + 1]) ? (arr_3 [i_1 - 1]) : (arr_0 [5] [i_1])))));
    }
    var_14 = ((16203 ? 2014468868 : 92360119701341673));
    var_15 = (max(var_7, (((((var_0 ? 92360119701341686 : var_4))) ? var_7 : (var_6 <= var_6)))));
    #pragma endscop
}
