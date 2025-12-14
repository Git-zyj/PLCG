/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 18446744073709551615;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = ((~((-((-(arr_10 [i_3] [i_3] [i_2] [i_3] [0])))))));
                                var_18 = ((-(min(var_8, var_0))));
                                arr_14 [i_0] [i_0] [2] [i_2] [13] [7] [i_3] = ((var_11 ? -1 : (var_6 || var_6)));
                                var_19 -= (max(220, 37));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_6] = (max((max(((min(var_5, var_8))), var_4)), var_3));
                                var_20 = ((((max(((var_8 ? var_7 : var_12)), var_7))) ? ((((var_9 ? var_4 : var_15)))) : var_10));
                            }
                        }
                    }
                    var_21 = (arr_18 [i_5 + 1] [i_5 + 1]);
                }
                var_22 = arr_0 [i_0] [i_0];
                var_23 = (-var_5 != 0);
            }
        }
    }
    var_24 = (min(var_24, var_6));
    #pragma endscop
}
