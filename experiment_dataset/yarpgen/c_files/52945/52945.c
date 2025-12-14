/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 &= (((min(var_12, (arr_7 [i_2 - 1] [i_1 + 1]))) ? ((((arr_7 [i_0] [i_1 + 1]) != (arr_7 [i_1] [i_0])))) : ((min((arr_7 [i_0] [i_1 + 1]), (arr_7 [i_0] [i_2 - 1]))))));
                    var_15 = (min(var_15, ((var_6 >> (((~1) + 13))))));
                    arr_8 [i_0] [i_1] [i_1] = ((((var_2 ? (arr_7 [i_1] [i_0]) : (arr_1 [i_1 + 2])))) ? (min((arr_4 [i_0] [1]), (min(var_2, var_10)))) : (((-1352728018 ? var_2 : -0))));
                    var_16 = (!var_13);
                }
            }
        }
    }
    var_17 = (((min((var_3 - var_4), (var_7 | var_10))) | (var_2 >= var_13)));
    #pragma endscop
}
