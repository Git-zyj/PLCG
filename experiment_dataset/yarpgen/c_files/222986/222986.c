/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (min(var_16, -270395628));
        var_17 = (min(var_17, ((((((((arr_0 [1]) ? (arr_0 [19]) : var_2))) ? ((var_10 ? var_6 : (arr_1 [i_0] [19]))) : var_13))))));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0] [0]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_3 [1] |= (((arr_0 [i_0]) > (((((arr_1 [i_0] [i_0]) < 127)) ? ((var_1 ^ (arr_1 [i_0] [i_0]))) : (((var_5 + 2147483647) << (((((arr_1 [i_0] [i_0]) + 884596755)) - 3))))))));
    }
    var_18 = ((!((max(64, -6749809071430320070)))));
    #pragma endscop
}
