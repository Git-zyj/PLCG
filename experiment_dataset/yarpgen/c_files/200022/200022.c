/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 += ((max(-5715345175604843284, (arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (min(((!(!var_0))), ((var_6 > (((~(arr_4 [i_0] [i_0] [i_0] [0]))))))))));
                    var_17 |= (arr_0 [11]);
                }
            }
        }
        var_18 = (min(var_18, (((1 * (arr_0 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_19 = (max((((var_11 ? 122 : ((var_4 ? (arr_8 [i_3]) : var_12))))), (6640025075106528125 ^ 2147483647)));
        var_20 += ((((max((arr_7 [i_3] [i_3]), var_0)) * ((((arr_4 [i_3] [i_3] [i_3] [6]) * var_4))))));
        var_21 += var_9;
    }
    var_22 &= (249841277 % 15339);
    #pragma endscop
}
