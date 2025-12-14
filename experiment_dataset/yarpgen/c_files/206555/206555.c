/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_1] = min(103, 152);
                                arr_15 [i_1] [i_3] [i_3] = (max(110, 152));
                                var_12 ^= (((152 ? -103 : 162)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_18 [6] [i_2 - 1] [6] = (max(103, 96));

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] &= (((((~var_3) / (min(var_8, (arr_21 [i_6 + 2] [i_6 + 1] [i_6 + 2] [1] [i_6] [21])))))) ? 154 : (((var_11 >= ((~(arr_10 [i_0])))))));
                            var_13 = var_7;
                        }
                        var_14 = ((95 ? 103 : ((103 ? 96 : 98))));
                        var_15 |= (arr_20 [i_2]);
                    }
                    var_16 = (max(var_16, (161 >= 141)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] = (max(((153 ? 168 : 88)), (((arr_10 [i_0]) & var_7))));
                                var_17 = ((~(136 * 102)));
                                arr_30 [i_0] [i_1] [i_2] [i_7] [i_8] |= (arr_25 [i_0] [i_8] [i_2 + 1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_18 -= 102;
        var_19 = ((159 * (((arr_2 [i_9] [i_9]) + ((max((arr_0 [1]), var_7)))))));
    }
    var_20 = 152;
    var_21 = (min(((((88 % 103) > var_9))), var_6));
    var_22 = (142 || 87);
    #pragma endscop
}
