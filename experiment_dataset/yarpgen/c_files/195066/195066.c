/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = 18615;
            arr_5 [i_0] [i_0] [1] &= (((var_0 ? var_13 : 17482)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 *= var_0;
            var_19 = -17498;
            var_20 = (((61 ? var_16 : (arr_6 [i_0]))));
            var_21 = 1;
        }
        var_22 = (((((((arr_7 [3] [8] [i_0]) || 110)))) - (((arr_6 [i_0]) ? (arr_1 [i_0]) : (arr_7 [i_0] [8] [i_0])))));
    }
    var_23 = (((((((var_1 ? -17481 : -10313))) && (~var_1))) ? (((min(11157, var_10)))) : (((!(!var_10))))));
    var_24 = (max(var_11, (-253 > var_12)));
    #pragma endscop
}
