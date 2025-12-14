/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = ((~(min(var_3, (var_18 != var_9)))));
    var_21 *= 108;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((~((120 >> (-108 + 125))))))));
                                var_23 ^= (107 % -101);
                                var_24 = (var_11 | var_10);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_25 = (arr_6 [i_0 + 2] [i_1 - 2] [i_1 - 1]);
                        var_26 = (arr_1 [i_0 - 1] [3]);
                        var_27 |= ((!(arr_4 [i_0 + 2] [i_1 + 1] [i_1 - 2])));
                        var_28 = (((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1]) - var_5));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_29 = (min((((!(arr_9 [i_0 - 1] [i_0 + 2] [i_1 - 2] [i_1 + 1])))), var_2));
                                var_30 = (arr_18 [i_1] [i_1 - 1] [i_0 + 2] [i_0] [i_1 - 1] [i_7]);
                            }
                        }
                    }
                    var_31 ^= (!(arr_7 [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
