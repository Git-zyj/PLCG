/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (arr_0 [i_2] [9]);
                    var_15 = (min(var_15, ((max((arr_0 [i_1 + 1] [i_1 + 1]), var_0)))));
                    var_16 = (((((((((arr_5 [9]) ? 0 : (arr_4 [i_2] [i_1] [i_0])))) & var_9))) ? (arr_7 [i_0] [i_1] [i_1 + 1]) : (max((-32767 - 1), ((((arr_7 [i_0] [i_1] [2]) * var_1)))))));
                }
            }
        }
    }
    var_17 |= var_12;
    var_18 = ((16744448 / (1 + var_2)));
    #pragma endscop
}
