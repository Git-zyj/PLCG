/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_14 &= ((-(arr_2 [i_0 + 2])));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] |= (((arr_7 [i_2 + 1] [i_1 - 3] [i_0 - 1] [i_0 - 4]) ? (arr_7 [i_0] [i_1 + 1] [i_2] [i_2 + 1]) : (arr_7 [i_0 - 4] [i_0 - 1] [i_1] [i_2])));
                    var_15 = (min(var_15, -50101));
                    var_16 = ((!(var_1 < var_5)));
                    var_17 &= (((arr_2 [i_2]) ? ((var_4 ? var_9 : var_10)) : var_8));
                }
            }
        }
    }
    var_18 = (max(var_18, ((min(var_10, (var_4 - var_4))))));
    #pragma endscop
}
