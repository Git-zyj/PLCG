/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((474094256 ? 1 : 127)) | (-127 - 1)));
    var_15 = (max(var_13, (((!((min(var_13, var_2))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = ((arr_3 [i_0] [i_0]) ? (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) : (((arr_3 [i_0] [i_0]) ? var_2 : (arr_3 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = ((-var_9 / (~-934627442)));
                        var_18 += (arr_7 [i_0] [2] [i_2] [i_3]);
                    }
                }
            }
        }
        var_19 = -var_6;
        var_20 = max((((arr_4 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))), (min((arr_4 [i_0]), (arr_3 [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_21 = var_9;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_22 = (max((arr_19 [i_5] [i_6] [i_6] [i_6]), (arr_10 [i_8 - 2])));
                                var_23 = (max(((((arr_17 [i_6] [i_5] [i_8 - 1] [i_5]) == (arr_6 [i_8 - 2] [i_8] [i_8] [i_8 - 2])))), var_7));
                                arr_23 [i_4] = ((!(arr_8 [i_4] [i_5] [i_5] [i_7])));
                                var_24 = ((~(((max((arr_9 [i_4] [i_6] [i_4] [i_7]), (arr_15 [i_5] [i_5])))))));
                            }
                        }
                    }
                    var_25 -= ((~(((arr_16 [i_6] [i_6] [i_5] [i_6]) ^ 243))));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_26 &= (max((arr_3 [i_4] [i_4]), ((max(var_4, (arr_16 [i_9] [18] [i_6] [i_9]))))));
                        var_27 = var_9;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_28 = (arr_13 [i_6]);
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_4] [i_5] = ((!(arr_29 [i_4] [i_5] [i_5] [i_6] [i_6] [i_5])));
                    }
                }
            }
        }
        arr_32 [i_4] [i_4] = (max(251, 10184639982857320413));
    }
    var_29 = var_12;
    #pragma endscop
}
