/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 |= (min(4095, (((arr_4 [i_1 + 1] [i_1] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_1] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    arr_12 [i_2] [3] [i_2] [1] = (((((arr_6 [i_1 + 1]) ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 + 1]))) - ((((arr_6 [i_1 - 1]) != 164)))));
                }
            }
        }
    }
    #pragma endscop
}
