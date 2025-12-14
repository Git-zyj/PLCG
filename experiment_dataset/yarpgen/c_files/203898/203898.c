/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((~var_1) - var_2));
    var_13 = var_1;

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] |= var_10;
        var_14 = (min(((max(var_8, var_1))), var_2));
        arr_5 [i_0] = var_11;
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, var_1));
        var_16 = (max(var_16, (((((((!(arr_0 [15] [i_1 - 3]))))) > (arr_2 [i_1 + 1]))))));
    }
    #pragma endscop
}
