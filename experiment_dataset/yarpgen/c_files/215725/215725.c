/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((var_14 ? var_11 : 3890)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 -= ((+(((arr_0 [i_2 - 1]) ? -907862190 : (arr_2 [i_1] [i_1] [i_1])))));
                    var_18 = (max(((var_4 ? (arr_5 [1] [i_1] [i_2 - 2] [17]) : (arr_2 [i_1] [4] [i_2 - 2]))), (((arr_0 [i_0]) ? (var_15 <= -263604535432047851) : (arr_3 [i_1] [15])))));
                    arr_7 [i_2] &= 1;
                    arr_8 [i_2] [i_2 + 2] [i_2] [i_2] = 213;
                }
            }
        }
    }
    #pragma endscop
}
