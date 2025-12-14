/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 = ((~(((max((arr_2 [i_0] [i_0]), var_7))))));
        var_22 = var_8;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 = (((min(var_11, -1422908248)) == var_14));
        arr_5 [i_1] = ((((var_7 >> (((arr_3 [i_1 + 1] [i_1 + 1]) + 8)))) != -var_12));
        arr_6 [i_1] = var_11;
        var_24 -= var_8;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_25 = ((-(((var_5 + 2147483647) >> (((((arr_7 [i_2]) + var_0)) - 2779828194229176602))))));
        var_26 = (max(var_26, var_1));
        var_27 = var_19;
    }
    var_28 = var_0;
    var_29 = var_12;
    #pragma endscop
}
