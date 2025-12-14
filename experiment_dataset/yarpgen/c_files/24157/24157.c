/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((2992729402 ? 1 : 0)));
        arr_3 [i_0] = 7323638847644696167;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_11 = (((arr_5 [i_1]) * (3148693237 < 2992729402)));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] = (~var_0);
            arr_10 [i_1] [i_1] = (((arr_7 [i_1] [i_1] [i_1]) && 231296464));
            var_12 = 1;
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_13 += (~2251799809490944);
                            arr_17 [i_1] [i_2 + 2] [i_3 - 1] [i_2 + 2] [i_2 + 2] = var_6;
                            arr_18 [i_1] [i_1] = (30720 ? 32767 : 18444492273900060671);
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] = var_5;
                            var_14 ^= 0;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_26 [i_1] [i_1] [i_1] [i_1] = 255;
                arr_27 [i_7] [i_1] [i_1] = ((~(549755805696 + 27158)));
            }
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                arr_30 [i_1] [i_1] [i_1] = ((-(arr_24 [i_1])));
                var_15 = 1;
            }
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                var_16 = 58710496;
                var_17 = ((((arr_6 [i_6]) && (arr_13 [i_1] [i_6] [i_6] [i_6] [i_6] [i_6]))));
            }

            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_18 += ((279275953455104 <= (arr_23 [i_1] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_19 = (((arr_34 [i_1] [i_12 - 1] [i_1] [i_12 + 1]) / 789425350369870863));
                            var_20 = ((-(arr_38 [i_1] [i_6])));
                        }
                    }
                }
                var_21 ^= (((255 == 1) || 1024));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_46 [i_14] [i_1] [i_1] [i_1] [i_1] = (-(arr_21 [i_1] [i_10] [i_13]));
                            arr_47 [i_1] [i_1] [i_1] [i_1] = var_5;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_22 -= ((!(((2992729402 ? (-32767 - 1) : (arr_5 [i_15]))))));
        var_23 = ((~(arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
        var_24 += 245;
    }
    #pragma endscop
}
