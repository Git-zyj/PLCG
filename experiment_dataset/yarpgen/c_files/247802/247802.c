/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_1]);
                var_17 |= (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 |= (max(var_8, (~var_6)));
                            var_19 ^= (max((((min(var_9, var_14)) ? ((((arr_10 [i_1] [i_1] [i_2 - 1] [i_3]) ? var_14 : var_4))) : (arr_9 [i_1] [i_3] [i_3] [i_3] [i_1]))), (arr_7 [i_0 - 1] [i_3 + 1] [i_3 + 1])));
                            var_20 = ((~((-(arr_0 [i_3])))));
                        }
                    }
                }
                var_21 = (((arr_10 [i_1] [i_1] [i_1 + 1] [i_1 - 2]) / (((max((arr_7 [i_0] [i_1 + 3] [i_1 + 1]), (arr_7 [i_1 + 3] [i_1 - 1] [i_1 + 1])))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    var_22 = ((((!(arr_9 [i_6 + 1] [i_6] [0] [i_6 - 1] [i_4]))) ? ((((arr_7 [i_6 + 1] [i_6 + 1] [i_6]) / -var_2))) : (min(((~(arr_13 [i_5]))), (arr_0 [i_6 - 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_23 = (~var_4);
                                var_24 = (arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
        var_25 = (min((arr_21 [i_4] [i_4] [i_4] [i_4] [14]), ((max(1477404064, 1)))));
    }
    var_26 = ((1 ? var_1 : var_6));
    #pragma endscop
}
