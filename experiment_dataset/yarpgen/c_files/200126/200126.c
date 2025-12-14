/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~var_3)));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((arr_0 [i_0 - 1]) <= (arr_0 [i_0]))))));
        var_17 = (min(var_17, ((((-(arr_0 [i_0 + 3])))))));
        var_18 = (min(var_18, (((~((((arr_1 [i_0] [i_0]) && var_0))))))));
        var_19 &= var_11;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 *= ((+(max(((max((arr_0 [i_1 + 1]), var_4))), (arr_3 [i_1])))));
        var_21 += ((!(((-(min((arr_4 [i_1 - 1] [18]), (arr_3 [1]))))))));
        var_22 -= (arr_3 [i_1 - 3]);
        var_23 = (max(var_23, (arr_4 [i_1] [i_1])));
    }
    #pragma endscop
}
