/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((((!(~-1314056822)))));
        var_16 = ((((((arr_0 [i_0] [i_0]) != 0))) >> (-92879597 + 92879614)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (max(var_4, (1 * 1314056814)));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                var_18 |= (arr_4 [i_0]);
                var_19 = (min(var_19, (arr_5 [i_2 + 1] [i_2 + 1] [i_1])));
            }
        }
    }
    var_20 -= ((var_1 ? ((((!((min(6334602775281302473, var_7))))))) : var_1));
    var_21 = var_13;
    #pragma endscop
}
