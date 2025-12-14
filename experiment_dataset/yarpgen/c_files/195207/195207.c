/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_12) - ((var_5 ? ((var_16 ? var_10 : var_8)) : 16))));
    var_21 = var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(((-((min(var_12, 63))))), (arr_2 [i_0])));
        var_23 = (min(var_23, var_6));
        var_24 = ((-(((var_4 || (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_25 = (((~(((arr_0 [i_1]) * (arr_2 [i_1]))))));
        var_26 = (min(var_26, var_9));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_27 = ((-(min((235 | 70), (((arr_4 [i_2] [i_2]) ? 0 : var_13))))));
        var_28 = ((-((101 ? 27 : 164))));
    }
    var_29 = (((168 ? 228 : 73)));
    var_30 = -91;
    #pragma endscop
}
