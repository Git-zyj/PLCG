/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 ? var_1 : 19997);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((min((max(-4710651315559873089, 384)), 20001)) <= ((((1 == (arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (max((~-20000), 0));
    }
    var_17 = ((((min(var_9, var_14))) ? ((var_8 | (var_9 - 49152))) : ((((((min(2277238704396716859, 19997))) >= (min(1879048192, 16038346226004586677))))))));
    var_18 -= var_1;
    var_19 -= ((32761 ? 191 : ((~(min(var_2, 16038346226004586692))))));
    #pragma endscop
}
