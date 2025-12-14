/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 *= (((var_15 ? 19157 : (min(2213837504, 2081129792)))));
                    var_20 = (max(var_20, var_0));
                }
            }
        }
    }
    var_21 *= var_17;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = ((((((16615306427967640255 == 15704231855747700404) | var_1))) ? (var_14 | var_11) : ((-(((((arr_1 [i_3] [i_3]) + 2147483647)) >> var_15))))));
        var_23 = (!2147483647);
        arr_12 [10] [i_3] &= (arr_7 [1] [i_3] [i_3] [16]);
        var_24 = (((((arr_10 [i_3]) - (arr_8 [17]))) * var_8));
    }
    var_25 |= (-1 ? 18446744073709551615 : ((max(var_3, var_18))));
    var_26 = (((var_0 ^ var_10) + var_6));
    #pragma endscop
}
