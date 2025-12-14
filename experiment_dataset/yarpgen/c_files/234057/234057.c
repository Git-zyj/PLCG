/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_2 ? (((var_6 != var_8) ? 134005168 : var_6)) : 2586037480));
    var_12 = (((((-10313 ? 20216 : var_0))) ? 1 : (((!var_9) ? var_7 : var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0] [i_0])));
        arr_2 [5] [11] = ((~(arr_1 [i_0])));
        var_14 = ((var_10 % 134005168) | var_2);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= ((262143 ? var_4 : (arr_4 [6])));
        arr_6 [i_1] [8] |= ((-((62 ? -20217 : -20217))));
        arr_7 [i_1] |= ((var_8 & (arr_3 [19])));
        var_15 = 2586037493;
    }
    #pragma endscop
}
