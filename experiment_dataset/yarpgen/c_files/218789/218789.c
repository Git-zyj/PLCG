/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_8, ((2 ? ((685350848 ? var_4 : var_8)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((min(var_2, (5 - var_9))));
                var_13 = (((arr_4 [i_1] [i_1] [i_0]) >= ((max((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_1] [i_1]))))));
                var_14 = (max(var_14, (((((((arr_1 [i_1]) != (arr_1 [5])))) / (((((arr_1 [i_0]) - 47)) / (((arr_4 [i_0] [i_0] [i_0]) + 29464)))))))));
            }
        }
    }
    #pragma endscop
}
