/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (max((arr_4 [i_0] [i_1] [i_1]), (1 & 1)));
                arr_6 [i_1] [i_1] [i_1] = var_6;
                arr_7 [i_1] = ((((((-var_10 > (1 != var_3))))) >= (((arr_2 [i_1]) | (((max((arr_0 [8]), (arr_0 [i_1])))))))));
                arr_8 [i_0] [i_1] = (((((arr_4 [i_0] [i_1] [i_0]) + (arr_4 [i_1] [i_1] [i_0]))) ^ (min((((arr_4 [i_0] [i_1] [i_0]) / var_6)), (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
