/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 *= (min((min(((((arr_4 [i_0] [i_1 + 4] [i_2 - 2]) - var_2))), (((arr_6 [i_0] [i_0] [i_0]) ? var_10 : (arr_5 [i_0]))))), (max(11923796387599020158, 11923796387599020180))));
                    var_13 = (arr_2 [7] [14]);
                    arr_7 [i_0] [12] [12] = (arr_1 [i_1 + 4] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
