/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 += var_15;
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [0]) * ((-48 ? -57 : (arr_2 [i_0])))));
        arr_4 [i_0] = var_15;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                var_20 = ((!(((var_10 ? var_5 : (arr_5 [i_0] [i_0] [i_0]))))));
                arr_10 [i_2] [i_1] [i_2] [i_2] = var_5;
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_21 = (((-71 ? -8149462758904988738 : -48)));
                            arr_16 [i_2 - 1] [i_2] [i_3 - 2] [i_2 - 1] [i_2] [i_0] = var_0;
                            arr_17 [i_0] [i_2] [i_1] [11] [9] [9] [i_4] = ((!(arr_0 [i_2 + 2])));
                            arr_18 [i_2] [i_1] [i_2] [i_3] [i_4] [i_2 - 1] = ((~(arr_5 [i_0] [i_3] [i_4])));
                        }
                    }
                }
                var_22 *= var_3;
            }
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                arr_21 [i_5] [i_1] [i_5] = (((arr_11 [i_0] [i_0] [i_5 - 1] [i_5] [i_0] [i_0]) ? var_6 : (((arr_6 [i_5]) ? (arr_9 [i_0] [i_0] [i_0] [2]) : (arr_1 [i_5] [i_5])))));
                arr_22 [9] [9] [i_5] = (arr_2 [i_5 + 1]);
                var_23 = ((arr_12 [i_0] [i_0]) ? var_1 : var_1);
                var_24 = (arr_8 [8] [i_1] [i_1] [9]);
            }
            arr_23 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
            var_25 += (arr_0 [i_1]);
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_34 [i_9] = ((~((var_3 ? var_2 : var_5))));
                            arr_35 [i_0] [i_6] [i_7] [i_8] [i_6] = var_11;
                            arr_36 [i_0] [i_6] [i_7] [0] [2] [i_9] = (arr_33 [i_0] [i_6] [0] [i_7] [i_7] [i_6]);
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_26 = (((arr_0 [4]) ? (arr_11 [i_8] [i_8] [i_0] [i_6] [i_0] [i_0]) : (arr_14 [i_10] [i_8] [i_8] [i_6] [i_6] [i_0] [i_0])));
                            arr_39 [i_0] [i_6] = var_5;
                            var_27 = (arr_13 [i_0] [i_6] [i_7] [i_8] [i_7]);
                        }

                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_44 [i_0] [i_6] [i_6] [i_7] [i_8] [i_11] = (((arr_6 [i_0]) / (arr_37 [i_0] [i_0] [i_8] [0])));
                            var_28 = arr_15 [i_0] [i_0] [i_7] [i_8] [i_7] [i_0] [i_7];
                        }
                        var_29 ^= (arr_37 [i_8] [0] [i_7] [i_8]);
                    }
                }
            }
            var_30 = (((arr_26 [i_0]) ? var_3 : (arr_26 [i_6])));
        }
        arr_45 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
    }
    var_31 *= (((var_10 ? (!var_17) : var_3)));
    var_32 = (min((max((~var_11), (~var_12))), ((((((var_18 ? var_0 : var_11))) ? var_18 : var_10)))));
    #pragma endscop
}
