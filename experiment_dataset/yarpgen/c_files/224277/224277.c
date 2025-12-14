/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!-1);
        var_14 -= var_10;
        arr_4 [i_0] = var_3;
        var_15 = (max(var_15, 1));
        arr_5 [i_0] [i_0] = ((var_6 ? ((((arr_2 [i_0]) || (arr_2 [i_0])))) : (((arr_2 [i_0]) ? 13905 : 212))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = ((var_12 ? -1 : (max(15784934349891823881, var_6))));
        arr_8 [i_1] = ((-((((!(arr_6 [i_1]))) ? (arr_6 [i_1]) : var_8))));
        var_17 *= ((45552 ? (!var_3) : ((((((arr_6 [1]) | 32791)) == (((-659 ? (arr_7 [i_1] [i_1]) : 1804109490))))))));
        arr_9 [i_1] [1] &= ((((30 || (arr_6 [8]))) ? 1 : ((1804109491 ? (arr_7 [1] [8]) : (arr_6 [8])))));
    }
    var_18 = ((((!((max(5732526401865880325, 3878951225))))) ? (var_0 || var_4) : ((-((var_12 ? 19996 : var_4))))));
    #pragma endscop
}
