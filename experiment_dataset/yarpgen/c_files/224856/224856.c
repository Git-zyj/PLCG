/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_21 = ((!(((!(arr_0 [i_0] [i_0]))))));
        var_22 = (-((63 ? 0 : 1)));
        arr_2 [i_0] = ((!((!(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_23 += (arr_5 [i_1] [i_1]);
        var_24 = var_12;
        arr_6 [i_1] [i_1] &= ((arr_5 [i_1] [i_1]) / ((~(arr_4 [i_1]))));
        var_25 = var_13;
        var_26 = (arr_0 [i_1] [i_1]);
    }
    var_27 = 17;
    var_28 = (((var_17 + var_14) << (-var_5 - 44)));
    #pragma endscop
}
