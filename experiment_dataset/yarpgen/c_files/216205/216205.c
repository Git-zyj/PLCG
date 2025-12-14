/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (((((var_6 ? (min(var_7, var_6)) : var_8))) ? ((var_10 ? var_0 : var_3)) : (max(var_6, ((var_0 ? var_3 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] &= (6917529027641081856 > 0);

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_15 ^= (arr_0 [1]);
                                var_16 |= (((-26315 && 15173587999209856013) > (var_1 || var_1)));
                                var_17 = (arr_10 [i_2] [7] [i_0] [i_2] [i_2]);
                                var_18 &= (((arr_4 [i_0] [i_2] [i_4 + 4]) | ((((arr_3 [i_0]) ? var_3 : (arr_8 [i_0] [1] [14]))))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_19 = ((-26328 < (((65031 >= var_6) ? (arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5]) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_5] [i_3])))));
                                var_20 = (((max((min((arr_6 [i_0] [i_1] [i_0] [i_3]), -1)), (arr_6 [15] [i_3 + 1] [i_0] [i_3]))) >= (620247790200297504 && 26314)));
                            }
                        }
                    }
                }
                var_21 = (((var_6 * (((var_3 <= (arr_6 [i_0] [i_1] [i_0] [1])))))));
            }
        }
    }
    #pragma endscop
}
