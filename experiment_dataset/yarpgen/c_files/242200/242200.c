/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = var_13;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_16 += arr_6 [8] [i_1] [i_0 + 1];
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = ((2460811386 < (arr_2 [i_0])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] = (max((arr_2 [i_0 + 1]), var_6));
                            var_18 = (arr_7 [i_2] [i_2] [i_2]);
                            var_19 &= (arr_9 [i_0] [i_1 + 3] [i_2] [0]);
                            var_20 = 26953;
                            var_21 |= var_2;
                        }
                        arr_16 [7] [i_2] [i_2] [i_2] [i_3] [i_2] = ((1 << (-6566748901361558148 + 6566748901361558163)));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] = (!((255 <= (arr_6 [i_2] [i_3] [i_5]))));
                            var_22 = (min(var_22, 4398046511040));
                        }
                        arr_20 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((((-(arr_17 [i_0 - 2] [i_3] [i_3] [4] [i_3] [i_3]))) + (arr_17 [i_0 - 1] [i_0] [i_2] [i_3] [i_3] [i_3])));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] = ((((((arr_22 [i_6 - 1]) % (arr_22 [i_6 - 2])))) <= var_10));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 19;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_35 [i_10] [i_7] [i_8] [i_7] [i_6] = var_11;
                            var_23 ^= ((~(arr_25 [i_7] [i_10])));
                            var_24 -= 11326782300048177456;
                        }
                        for (int i_11 = 4; i_11 < 16;i_11 += 1)
                        {
                            arr_40 [i_7] [2] [i_7] = (arr_32 [i_7]);
                            var_25 = (arr_25 [i_6] [i_6]);
                            arr_41 [i_11] [i_9] [6] [i_9] [i_6] &= var_2;
                        }
                        var_26 = arr_30 [i_6] [17] [i_6];
                        var_27 = 727002151634241694;
                        var_28 -= (min((max(((((arr_37 [i_9] [i_9 - 4] [i_9 - 2] [i_9 - 2] [i_9]) << (93 - 91)))), (((arr_33 [i_6] [i_9] [i_7] [2] [i_9]) | (arr_22 [9]))))), (arr_29 [i_9 - 3] [i_7] [i_8] [i_9])));
                    }
                }
            }
        }
        arr_42 [i_6] [i_6] |= (arr_28 [i_6] [6] [0]);
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_29 |= var_7;
        var_30 -= ((var_9 < (((var_9 == (min(214907462, 26953)))))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    {
                        var_31 = (max(var_31, (((11484 / (max(var_11, (arr_47 [i_12] [i_13] [i_15 - 1]))))))));
                        arr_54 [i_12] [i_13] [7] [i_14] [i_15 - 1] [i_15 + 2] = (arr_48 [i_12] [i_12] [5] [i_15]);
                        var_32 = max((arr_51 [i_15 - 1] [i_15 + 3] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1]), var_0);
                    }
                }
            }
        }
    }
    var_33 = (min(var_33, (((~(max(var_6, 214907447)))))));
    var_34 = var_7;
    #pragma endscop
}
