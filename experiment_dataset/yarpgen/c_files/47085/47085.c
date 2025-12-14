/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(-10122, var_0));
                var_14 = (min(var_14, ((max((18370 / 3903068003557587126), var_1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = (max((((arr_6 [i_3 + 3] [i_3]) ? ((var_1 ? var_8 : (arr_6 [i_3 + 2] [i_2]))) : ((max(var_6, var_7))))), ((((max((arr_7 [13] [13]), (arr_12 [i_2])))) & (arr_11 [i_3] [i_3 - 1] [i_3])))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_17 [i_3] [i_3] [i_3] [i_3] = ((-83 / (arr_11 [i_3] [i_4] [i_4])));
                    var_15 = (arr_6 [i_3 - 1] [i_3 + 3]);
                    arr_18 [i_2] &= (arr_7 [i_2] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
