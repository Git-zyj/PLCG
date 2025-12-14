/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_14;
        arr_3 [i_0] [i_0] = 3468;
        var_17 = (max(var_17, ((min(var_12, (((arr_1 [i_0] [i_0 - 3]) ? -5709618423715911033 : (((arr_0 [1]) >> (var_0 - 82))))))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = max(var_3, ((max((arr_5 [i_1]), var_11))));
        arr_8 [i_1] = (arr_5 [i_1 - 3]);
        var_18 -= (max((min(2439118639, (arr_4 [i_1 - 2]))), (((-3527681021897359797 || (arr_5 [i_1 - 3]))))));
        arr_9 [i_1 - 2] [6] = (arr_6 [i_1 - 2]);
        var_19 = (max(var_19, ((max((arr_6 [i_1 - 2]), (arr_5 [i_1 - 1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_3] = (max((((arr_15 [i_3] [i_3]) ^ var_2)), 210));
                var_20 ^= (((var_10 < var_6) * ((var_11 / (arr_14 [i_2])))));
            }
        }
    }
    var_21 = (min(var_21, var_10));
    #pragma endscop
}
