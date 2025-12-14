/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += ((var_8 ? ((max(39107, 57344))) : ((-(-32767 - 1)))));
        arr_3 [i_0] = ((((max((arr_1 [i_0] [i_0]), 6678428541573138986))) ? ((((0 * var_0) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? var_10 : 32762))))) : (var_0 - 20)));
        var_12 = var_5;
        var_13 = (min(var_13, var_0));
        arr_4 [i_0] = var_0;
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        arr_8 [i_1] = 27864;
    }
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((min((max((((var_6 ? 203590887 : -107))), -8761525265522501580)), (-32767 - 1))))));
        var_15 = ((((min(((var_9 ? -27865 : 715178653)), 58482))) ? var_3 : 1));
    }
    var_16 = var_3;
    #pragma endscop
}
