/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;
    var_11 = (min(var_2, (((var_3 >> (var_3 - 885497158))))));
    var_12 = (((max(((max(67, var_9))), ((1 ? var_3 : var_6)))) * ((var_0 * (16442950773111471132 / var_8)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(var_13, ((((arr_2 [i_0] [i_0]) + 96)))));
        arr_3 [i_0] [i_0] = (max(1006632960, ((-(arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 268369920;
        arr_8 [i_1] = 5760;
    }
    var_14 = ((~((~(var_7 ^ 9223372036854775807)))));
    #pragma endscop
}
