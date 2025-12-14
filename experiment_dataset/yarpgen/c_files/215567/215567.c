/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_21 ^= ((65355 / ((max((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2]))))));
                var_22 = (((arr_0 [i_1] [i_0]) % (arr_0 [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_15));
                                arr_15 [i_1] = 1;
                                var_24 = (arr_8 [i_1] [i_1] [i_1]);
                                var_25 -= (+-1);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5] = arr_6 [4] [19];
        var_26 = (!(1 | var_5));
        var_27 = (((((~1) + 2147483647)) >> (min(var_11, (arr_16 [i_5] [i_5])))));
        arr_20 [i_5] = ((((1 ? (arr_6 [i_5 + 4] [i_5 + 3]) : var_3)) - 2936335668));
        arr_21 [i_5] [i_5] = (max(((((arr_13 [i_5 + 2]) - (arr_13 [i_5 + 3])))), (min(((((arr_12 [i_5]) ? (arr_3 [2]) : (arr_16 [i_5] [i_5])))), (max(63, var_15))))));
    }
    #pragma endscop
}
