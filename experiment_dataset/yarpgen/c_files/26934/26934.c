/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_18));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((239218036 ? 239218039 : (arr_0 [i_1 - 1] [i_2 - 1])));
                    arr_11 [i_2] [i_1] [i_0] = (arr_5 [i_1]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_24 [i_4] [1] [i_6] = arr_14 [i_3];

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_22 = ((7996 ? var_8 : -15823));
                            var_23 -= ((var_19 / (~var_11)));
                        }

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_24 = var_4;
                            arr_30 [i_8] = (var_9 || var_4);
                            var_25 ^= (((arr_15 [i_3] [i_4]) ? (arr_15 [i_6] [i_3]) : var_16));
                        }
                    }
                }
            }
        }
        var_26 = var_19;
    }
    #pragma endscop
}
