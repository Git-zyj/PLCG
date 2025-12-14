/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [4] [i_2] &= ((19708 ? (arr_6 [18] [i_1 + 1] [i_1 - 1] [i_1]) : (arr_3 [i_1] [6] [i_1])));
                    arr_9 [i_1] = (-((-(arr_2 [i_0] [i_0] [i_0]))));
                }
            }
        }
        var_11 *= (((arr_7 [i_0] [i_0] [16]) >= ((18446744073709551615 ? -1294303054693356070 : (arr_2 [i_0] [i_0] [i_0 - 1])))));
    }
    var_12 = var_7;
    var_13 = ((var_10 >> (!-17926)));
    #pragma endscop
}
