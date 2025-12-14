/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_4));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [8] = ((min(1, 1)));
        var_14 = (((arr_1 [i_0]) ? (!12) : ((((var_8 ? 1872552885 : var_4)) ^ var_6))));
        arr_3 [i_0] = ((var_9 + ((max((arr_1 [i_0]), 1)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_15 *= var_1;
        arr_7 [i_1] [i_1 - 2] = (arr_4 [i_1 - 1]);
        var_16 = (((((var_0 ? var_3 : (arr_6 [i_1])))) ? 56604 : ((-(arr_5 [i_1 - 2])))));
        var_17 = ((90315745 >> (((arr_6 [i_1 - 2]) - 2866535834238793968))));
        var_18 = -7300128453908922414;
    }
    #pragma endscop
}
