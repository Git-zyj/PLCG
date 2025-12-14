/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(((((arr_4 [i_0]) <= (~0)))), (arr_4 [i_1 - 1])));
                arr_7 [i_0] = (((2871379254965130193 ? 258048 : 4294709247)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] [i_2] = (5087111388114498359 + -22745);
                var_21 = min(198178516, (((((min((arr_0 [i_2] [i_2]), (arr_3 [i_2])))) >= (var_13 & var_7)))));
                var_22 -= -198178516;
            }
        }
    }
    #pragma endscop
}
