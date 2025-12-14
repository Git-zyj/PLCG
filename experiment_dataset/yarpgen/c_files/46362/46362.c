/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((-((((~(arr_5 [i_1] [8] [i_1] [0]))))))))));
                    var_13 = (((arr_5 [i_0] [i_1] [i_1] [i_2]) ? (arr_1 [i_0] [i_1]) : ((~((59480 ? 2147483626 : var_3))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_14 = ((var_4 - ((min(var_2, ((min(0, var_11))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_15 ^= (max((((255 + 9) ^ 2147483621)), ((((136 / 1) >= ((~(arr_14 [i_3] [i_3] [16] [i_3] [i_3] [i_3]))))))));
                                var_16 = (arr_5 [i_3] [16] [i_5] [i_4]);
                            }
                        }
                    }
                    var_17 = min(var_0, (arr_12 [i_3] [i_4] [i_4] [i_5]));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_18 *= ((!(0 + 1)));
                                var_19 = (min((arr_7 [i_8]), var_1));
                                var_20 = (max(var_20, (arr_22 [i_8 - 3] [i_8 - 3])));
                            }
                        }
                    }
                }
            }
        }
        var_21 *= (arr_2 [i_3] [i_3] [i_3]);
        var_22 = (max(var_22, ((max(var_4, ((((((arr_19 [i_3] [11] [0] [i_3] [i_3]) ? var_2 : 1))) ? ((min(1, var_4))) : 30)))))));
    }
    #pragma endscop
}
