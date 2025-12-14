/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 |= ((var_6 & ((var_0 / ((-1 ? 9223372036854775807 : var_6))))));
    var_16 = (!var_6);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (arr_1 [i_1] [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((((var_1 ? var_13 : var_5)) - (arr_0 [i_0 + 1])));
        }
        arr_7 [i_0] = ((-(arr_3 [i_0 - 2] [i_0 - 3])));
        arr_8 [i_0] = (arr_4 [i_0 + 1] [i_0] [i_0]);
        var_18 = (max(var_18, ((((((8167771926614659990 ? 55769 : var_9))) + 0)))));
    }
    var_19 = (min(var_4, (max((max(var_13, 2275048123032146617)), ((max(var_13, 1)))))));
    #pragma endscop
}
