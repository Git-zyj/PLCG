/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-91 ? ((4714511944140268801 ? (32768 < 13732232129569282818) : var_2)) : ((min((max(2894918178915636132, 16383)), -30398)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((3164 ? -2886963759448171687 : -275671541))) ? (((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 1]))) : (arr_1 [i_0] [i_0 + 2])));
        var_19 = ((~((((arr_2 [i_0]) <= var_10)))));
        arr_4 [i_0 + 1] [19] = (((((-(arr_2 [i_0 + 1])))) ? ((((!var_5) ? ((((arr_1 [i_0] [i_0 + 1]) & 954520059))) : var_6))) : (6467461016119011102 + 13732232129569282818)));
    }
    #pragma endscop
}
