/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_13, ((~(max(var_15, 6626460577211935124))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((98 | (arr_1 [i_0]))) <= 130));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [15] [i_0] [i_1 + 2] [i_1] [11] [i_3] = ((((((arr_8 [i_2 - 1] [i_1] [i_2] [i_3] [i_2]) ? (arr_3 [i_0]) : var_11))) ? (((-(arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_2])))) : (max((arr_1 [i_0]), (arr_8 [i_0] [1] [i_2] [i_3 + 1] [i_3 - 1])))));
                            arr_11 [i_3] [i_2] [1] [i_0] = (arr_8 [i_0] [15] [i_1] [7] [i_3]);
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = (arr_0 [1]);
                        }
                    }
                }
            }
        }
    }
    var_17 = var_15;
    #pragma endscop
}
