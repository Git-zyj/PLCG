/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = ((((905480578 - -1) - var_4)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (!905480596);

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_12 = (min(var_12, (~13140)));
                    arr_9 [10] &= var_3;
                }

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_13 |= ((~var_2) - (((!189) ^ (max((arr_1 [i_3]), (arr_11 [i_3] [i_3] [i_3] [i_3]))))));
                    var_14 = (min(var_14, ((((-(arr_0 [i_0 + 1] [i_0])))))));
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_15 = var_6;
                    arr_16 [i_0 + 1] [i_0] [i_0] = -var_9;
                    var_16 = 90;
                }
            }
        }
    }
    var_17 = -var_9;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_30 [i_5 + 3] [i_6] [i_6] [i_6] = (-(arr_19 [i_5 - 1]));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_6] [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] = (((arr_24 [i_5 + 1] [i_5 + 1] [i_5 - 1]) ^ (arr_24 [i_5 + 3] [i_5 + 3] [i_5 + 3])));
                            arr_35 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_7] [i_6] = ((~(arr_17 [i_9] [i_8])));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_18 = ((-(arr_31 [i_5 + 1] [i_5 + 1] [i_5])));
                            arr_38 [i_5] [i_6] [i_6 + 1] [i_6] [i_7] [i_7] [i_6] = -1;
                        }
                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            var_19 = 917287705;
                            var_20 = (max(var_20, (arr_17 [i_5] [i_5])));
                            arr_43 [i_6] = (~-35);
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_47 [i_12] [i_6] [i_7] [i_6] [i_5] = arr_17 [i_5] [i_5];
                            var_21 += (arr_42 [i_12] [i_8] [i_6 - 1] [i_6 - 1] [i_5 + 3]);
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_51 [i_6] [i_6] [i_6] [i_6] = (arr_50 [i_5 + 3] [i_6] [i_5] [i_5]);
                        var_22 = (arr_18 [i_5]);
                        arr_52 [i_5] [i_6] [i_7] [i_7] = var_0;
                    }
                    var_23 &= -905480579;
                    var_24 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
