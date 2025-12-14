/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 22639));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_18 = (max(((min(var_2, 127))), ((var_15 ? var_0 : var_7))));
        var_19 = ((~((~(!3892078531436651844)))));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        arr_7 [6] [i_1] = (var_16 ^ var_9);
        var_20 = ((min(-34295167, (-127 - 1))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = var_11;
        arr_11 [i_2] = (max((max(var_9, ((var_9 ? 127 : var_13)))), ((-122 ? 30005 : 127))));
        var_21 = (max((27473 | -26), (min(8441049674259931307, 0))));
        var_22 = (min(var_22, (~122)));
        arr_12 [i_2] = (max(((min(var_10, 122))), var_3));
    }
    #pragma endscop
}
