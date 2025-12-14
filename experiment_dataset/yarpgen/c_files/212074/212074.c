/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_12));
    var_21 = var_13;
    var_22 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_4 [i_0] [i_0 + 1] [i_0]);
                arr_6 [i_0] [i_0] = (arr_4 [i_0 - 2] [i_0 + 1] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_23 += (arr_8 [6] [6]);
                arr_12 [i_2] [i_3] [i_2] = 73;
                arr_13 [i_2] [i_2] = (arr_10 [i_2] [i_2] [i_2]);
            }
        }
    }
    #pragma endscop
}
