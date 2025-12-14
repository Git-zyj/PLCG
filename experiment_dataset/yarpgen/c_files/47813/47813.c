/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = var_12;
                    arr_9 [i_0] [i_0 + 1] [i_0] = (4503599627370495 + (((var_12 >> (((arr_7 [1]) - 8358163335911813924))))));
                    arr_10 [i_0 + 1] = ((var_9 ? ((var_2 ? 39187 : 1)) : var_4));
                    arr_11 [i_2] [i_2] [i_2] [i_2] = (((((-4503599627370496 ? (arr_0 [i_2]) : (arr_3 [20] [10])))) ? (arr_3 [i_0 + 1] [i_1]) : (arr_7 [i_2])));
                    arr_12 [i_0 - 3] [i_0 - 1] [i_2] = (((arr_1 [i_0 - 1]) - (arr_1 [i_0 - 1])));
                }
            }
        }
        arr_13 [i_0] = ((var_3 ? (arr_4 [i_0 - 2]) : (arr_4 [i_0 - 2])));
    }
    var_13 = (((min(-291817959271424891, 4503599627370495))));
    var_14 = var_11;
    var_15 |= var_5;
    #pragma endscop
}
