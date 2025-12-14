/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((~(arr_9 [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (((((96 >= (491520 >= 572076339)))) >> (((arr_5 [i_4] [i_4]) - 46570))));
                                var_14 = ((((7369607576164579868 ? (arr_4 [i_3] [i_2] [i_0]) : var_7))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = 3067151901;
                            }
                        }
                    }
                    var_15 = (max(var_15, ((((3912682921183034229 ? ((min(2147483647, -948728743))) : (max(16383, var_8))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            {
                var_16 -= -800798019;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((+(max((max((arr_20 [6] [i_8]), 5182981647865615137)), var_6)))))));
                                var_18 = (((arr_27 [i_5] [i_6]) ? ((((min((arr_24 [i_5] [i_6]), 216)) >= (arr_25 [i_6] [i_6 - 1] [i_6])))) : (~-73586334)));
                                var_19 = (min(14487905321860605519, 53));
                                var_20 = (min(var_20, (0 && 16)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 22;i_12 += 1)
                            {
                                var_21 = (arr_28 [i_12] [i_12] [i_12] [i_12]);
                                arr_42 [i_5] [i_5] [16] [i_6] = var_5;
                                arr_43 [i_5] [i_6] [i_5] [i_5] = var_8;
                            }
                            var_22 = (~(384 != 1333027369));
                            var_23 = ((((max(((((arr_30 [i_5] [i_6 - 1] [15] [i_6] [i_6]) && (arr_29 [7] [i_10] [i_10])))), var_0))) == ((~(arr_20 [i_10] [i_10])))));
                        }
                    }
                }
                var_24 = (arr_40 [i_5] [13] [i_6] [i_6] [14]);
                var_25 = (arr_33 [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
