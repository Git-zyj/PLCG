/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((((arr_1 [i_0 + 1] [12]) ? (arr_1 [i_0 - 1] [6]) : (arr_3 [i_0 - 2]))) % 8)))));
                    var_18 = var_10;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    var_19 ^= ((!(arr_13 [i_3] [8])));
                    arr_18 [i_3] = ((~((((min((arr_16 [i_3] [i_3] [i_5]), 12))) ? -1 : (~57)))));
                    arr_19 [i_3] [i_5] = (~var_7);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            {
                var_20 -= (min((((arr_24 [i_6] [i_6] [i_7 + 1]) ? (arr_24 [i_6] [i_6 - 2] [i_6 - 1]) : (arr_21 [i_6 - 1]))), (((arr_23 [i_7]) ? ((-(arr_21 [10]))) : (((var_9 ? var_12 : var_15)))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_21 *= (max(-8132026698613230873, (arr_21 [9])));
                            arr_30 [i_6 - 1] [16] [i_6] [i_6 - 1] &= ((((arr_29 [i_6 + 1] [3] [3] [i_9] [i_6 + 1] [i_6 + 1]) * var_0)));
                            var_22 -= (var_13 == var_1);
                            var_23 = ((var_15 ? ((3383004477 ? -16 : 911962818)) : (((((min((arr_24 [i_6 - 3] [1] [i_6 - 3]), var_9))) ? 16 : ((max(18, var_14))))))));
                        }
                    }
                }
                arr_31 [i_7] = (((((((var_6 ? (arr_26 [i_7]) : -8132026698613230873)) | (((var_11 ? 31475 : var_15)))))) ? (arr_27 [i_6 - 3] [i_7 + 3] [i_7]) : (((((var_0 >> (((-127 - 1) + 147))))) ? -14 : (max(var_1, var_16))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_38 [i_7] = ((var_12 ? ((((min((arr_24 [i_6] [i_6] [i_6]), var_13))) ? (958945790 || 911962819) : (arr_21 [i_6]))) : (((((var_5 + 3383004489) > (arr_25 [i_6] [7])))))));
                            var_24 = (arr_28 [i_6 - 1] [i_6] [8] [i_6 - 1] [i_6]);
                            arr_39 [i_7] [i_10] [i_7 + 1] [i_7] = (((((((var_13 ? (arr_24 [i_7] [i_10] [i_7]) : var_12))) ? (arr_28 [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 1]) : (max(var_2, var_10)))) | (((((max(var_1, var_13))) << ((3336021528 ? 1 : 20)))))));
                            var_25 -= (((((((min((arr_29 [i_6] [i_6] [i_6] [i_10] [i_6] [i_11]), var_8))) ? ((-(arr_34 [i_10]))) : ((max(-8, 1)))))) ? -1 : ((((var_5 != (arr_33 [6] [i_10] [6]))) ? (((arr_23 [2]) ? (arr_28 [i_6] [i_7] [i_6] [11] [i_7]) : 1)) : ((min((arr_27 [i_10] [i_10] [i_10]), 192)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
