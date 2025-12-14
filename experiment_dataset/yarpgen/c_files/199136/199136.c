/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((!(!var_0)))), 7803));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 / (~-7803)));
        arr_3 [i_0] = ((((-7804 ? -7803 : 497343148))) ? (arr_0 [i_0]) : (var_3 == var_13));
        arr_4 [i_0] [i_0] = ((-(min(235, var_10))));
        var_18 ^= (((((221 <= ((max(var_2, var_7)))))) + (arr_0 [i_0])));
        var_19 *= 9;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 &= ((~(max((max((arr_6 [i_1]), (arr_13 [1] [12]))), ((min(var_1, var_4)))))));
                    var_21 = (max((arr_6 [i_3]), var_1));
                }
            }
        }
    }
    var_22 ^= 246;
    #pragma endscop
}
