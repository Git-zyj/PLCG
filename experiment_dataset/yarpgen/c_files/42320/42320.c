/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min((7271622703044897826 != 7271622703044897826), -10184));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = (!4294967295);
        var_21 = -14575;
        var_22 += ((-7271622703044897837 - (arr_0 [1] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 *= (arr_5 [i_2] [i_2] [i_1]);
                                var_24 *= (arr_4 [i_1]);
                            }
                        }
                    }
                    var_25 = 0;
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {
                    arr_23 [12] [i_6] [i_7] = ((~((~(7271622703044897842 | 7553421005966263026)))));
                    var_26 = ((!(arr_15 [i_5] [i_5] [11] [i_7] [i_7 - 1])));
                }
            }
        }

        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_27 = (max(620189444, var_4));
                            var_28 = (65 | 0);
                            var_29 = (min(var_29, 47304));
                            var_30 = var_13;
                        }
                    }
                }
            }
            var_31 = (min(((max(1, (arr_35 [i_5 - 2] [8] [i_5 - 2] [8] [8] [i_8 - 2] [3])))), 0));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                arr_46 [4] [12] [7] [i_14] [i_14] [i_15] = 1428679451276440711;
                                var_32 = (min(var_32, ((((((((arr_38 [i_5 + 1]) || (arr_28 [i_5 - 1] [1]))))) | ((1920 ? ((1 ? 1 : 4515187684970187410)) : 3651906344)))))));
                            }
                        }
                    }
                    var_33 *= ((1065295139 && ((((arr_27 [i_12] [1] [i_12] [1]) ? 24 : -1735938264)))));
                    var_34 = var_10;
                }
            }
        }
    }
    var_35 = var_13;
    #pragma endscop
}
