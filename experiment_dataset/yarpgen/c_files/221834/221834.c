/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_0] |= ((-((min((min((arr_6 [0] [0] [i_2] [i_1]), 11)), (arr_5 [i_0] [i_0] [i_1] [i_0]))))));
                    var_20 = ((((~4777) ? (((arr_3 [i_0] [i_0]) ? 11 : (arr_6 [0] [i_0] [10] [i_2]))) : 0)));
                    arr_8 [i_2] [i_1] = (~((-var_13 | (arr_2 [i_0]))));
                }
            }
        }
    }
    var_21 *= ((min((~var_0), ((var_13 ? 0 : 0)))));
    #pragma endscop
}
