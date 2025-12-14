/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_2, (((((var_12 ? var_2 : var_12))) ? -4479605094532029589 : (((max(225, var_12))))))));
    var_16 = ((!(((var_1 ? var_11 : (var_7 ^ var_13))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 -= ((225 ? (30 / 56) : var_10));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 2] [i_0] [i_0 + 2] = (var_0 - var_14);
                    var_18 ^= ((~(arr_4 [i_0] [i_1])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_19 ^= (((((arr_4 [i_3 - 1] [4]) / (arr_4 [i_3 - 1] [1]))) % (((arr_10 [i_3]) - var_6))));
        arr_14 [i_3] = (((-((max(var_6, 47))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, -47));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_4 - 3] [i_5] [i_4 - 3] [i_3] = (((((max((arr_25 [i_4 + 1] [i_4] [i_3]), (arr_13 [i_4 + 1] [i_4 + 1]))))) + (max((max(0, var_14)), (((5839929811551431835 ? 30 : var_2)))))));
                                var_21 ^= (arr_3 [i_7 - 1] [i_6 + 2]);
                                var_22 = (max(var_22, (((~((30 ? ((var_10 ? 0 : var_11)) : ((min(-125, (arr_18 [i_3] [i_3] [i_5])))))))))));
                                arr_27 [i_3] [i_3] [i_5] [i_6 - 2] [i_7 - 2] [i_7 + 1] [i_3] = ((((min(0, (~247)))) > ((((((arr_1 [i_3]) / (arr_13 [i_3] [i_3])))) ? (((var_9 / (arr_16 [i_3 + 3])))) : ((1770195289 ? 7926766735834865785 : 47))))));
                                var_23 = ((7053 ? (arr_17 [i_3 + 3] [i_7 - 2] [i_5] [i_3]) : (((min(-4479605094532029613, (arr_25 [i_3] [i_3 + 3] [i_3]))) * (((1 / (arr_8 [i_3] [i_3] [i_3]))))))));
                            }
                        }
                    }
                    arr_28 [i_3] [i_4] [i_5] = var_7;
                    arr_29 [i_3] [i_4 - 1] [i_3] = (((((-7926766735834865786 ? (3751670066 / 8) : ((min(var_6, -1770195289)))))) || (((((min(var_12, (arr_6 [i_3])))) ? 370831997 : (~var_7))))));
                }
            }
        }
        arr_30 [i_3] = (max((max(-56, ((var_12 / (arr_23 [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1]))))), 625538650));
    }
    #pragma endscop
}
