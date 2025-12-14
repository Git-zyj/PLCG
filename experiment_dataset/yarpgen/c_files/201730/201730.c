/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((arr_1 [i_0]) ? ((-(arr_2 [i_0] [i_0] [i_1 - 3]))) : -1)))));
                var_11 = (max(var_11, 453757645));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = ((~((max((arr_8 [i_0] [i_1 - 3] [i_0] [3] [i_1] [i_0]), ((((arr_1 [i_1]) >= 60))))))));
                            var_13 = (-1 & -18380);
                        }
                    }
                }
                arr_10 [i_0] = (max(((((arr_4 [i_1 + 1] [i_1] [0] [i_1 - 1]) == (arr_4 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 2])))), (((arr_9 [i_1 - 3] [0] [i_1] [11] [0] [i_1]) ? (arr_4 [3] [i_0] [9] [3]) : (arr_2 [i_1] [12] [i_1])))));
            }
        }
    }
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_15 -= ((~(708213524 + 65535)));
                    var_16 = (~(((arr_14 [i_5]) & (((-521 < (arr_21 [9] [i_5] [13] [11])))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_24 [11] [i_5] [i_6] [i_5] = (~13163448753788396246);
                        var_17 = (min(var_17, (((((13961 ? var_6 : 12710668854545344729)) >= (((var_5 ? (arr_19 [i_4] [i_5]) : var_9))))))));
                        var_18 = (max(var_18, var_7));
                        var_19 = (max(var_19, (arr_22 [i_7])));
                    }
                }
            }
        }
    }
    var_20 += var_3;
    #pragma endscop
}
