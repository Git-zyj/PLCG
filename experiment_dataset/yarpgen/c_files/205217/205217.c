/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205217
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
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (max(((-((var_4 - (arr_4 [i_1] [i_1] [i_2]))))), 0));
                    var_11 = (max(var_11, ((min(((min((arr_1 [i_1]), (arr_4 [12] [i_1] [12])))), (((arr_3 [0]) ? (max((arr_3 [16]), var_5)) : (arr_0 [i_0] [i_1]))))))));
                    var_12 = (min(var_12, ((((((arr_0 [i_1] [i_2]) ^ var_9)) | (min((arr_6 [8]), (arr_0 [i_1] [i_2]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_18 [i_3] [i_3] [i_3] [i_5] [i_5] = ((arr_16 [i_6] [i_4] [i_5] [i_5] [i_7]) ? (((max((-51 && 18), (arr_5 [i_5] [i_4 - 1]))))) : (min((((arr_4 [i_5] [i_4] [i_5]) ? var_3 : var_5)), ((-1994422655 ? var_6 : (arr_13 [i_5] [i_4]))))));
                                arr_19 [i_4] [i_6] |= 18446744073709551615;
                                var_13 ^= (max((((-1 ^ 1) & (54549 & 7689))), (((arr_16 [i_3] [i_4 + 1] [i_4] [i_4 + 1] [i_7]) ? 1 : ((max((arr_11 [i_3] [i_4]), -76)))))));
                            }
                        }
                    }
                    var_14 = ((arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_5]) ? 8755258674177809131 : (((min((arr_1 [i_4 + 1]), (arr_5 [i_5] [i_4 - 1]))))));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_15 = var_3;
        var_16 = (max(var_16, ((min(var_9, (arr_21 [i_8]))))));
        var_17 ^= ((((((-4 ? 1 : (arr_3 [20])))))) + (min(((min(-80, -15))), var_7)));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_18 = (min(var_18, ((~(arr_23 [6])))));
        arr_25 [i_9] [i_9] = ((max(var_8, var_7)) + (arr_9 [i_9] [i_9]));
        arr_26 [i_9] [i_9] = ((((((arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_12 [i_9] [i_9] [i_9] [i_9]) : (arr_16 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((max(41, 31)))) : (((((4 ? (arr_22 [i_9]) : var_0))) + var_6))));
    }
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        var_19 ^= -1;
        var_20 -= ((((var_2 / (arr_0 [i_10 + 1] [i_10 + 1]))) != (((max((arr_4 [10] [i_10 - 1] [10]), (arr_5 [14] [14])))))));
    }
    #pragma endscop
}
