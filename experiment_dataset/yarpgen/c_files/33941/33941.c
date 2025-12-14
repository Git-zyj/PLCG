/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (((arr_7 [i_2 - 1] [i_2 - 3] [i_2 - 3]) * ((((arr_7 [i_2 + 3] [i_2 - 1] [i_2 + 2]) / -78)))));
                    arr_9 [i_2] = (((0 ? 11989771585481079020 : 1)));
                    var_21 = (((((arr_4 [i_2] [i_1] [6]) ? (((arr_2 [i_0]) - var_6)) : 65504)) / (arr_5 [i_1])));
                    arr_10 [i_2] [i_2] = ((min(var_1, (arr_2 [i_1]))));
                }
            }
        }
    }
    var_22 = var_2;
    var_23 = (min(var_23, (var_2 ^ 1333637596139483074)));
    #pragma endscop
}
