/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (min(var_10, var_9));
        var_11 = (max(var_11, (arr_1 [i_0])));
        var_12 = (max(var_12, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_2 [i_0] = (-(arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_13 = (((13294 * 7665269868104933567) ? (((arr_5 [i_0] [i_0] [i_2]) & 32767)) : (arr_5 [i_2 + 1] [i_3 + 3] [i_2])));
                        var_14 = (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                        var_15 = (min(var_15, ((((arr_9 [i_2] [i_3] [i_3] [i_0] [i_3]) || (arr_9 [i_1] [i_2] [12] [i_0] [i_2 + 1]))))));
                    }
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_16 ^= ((var_9 ? (arr_13 [i_2 + 1] [i_0] [i_5 + 1] [i_4 - 2]) : 32767));
                            var_17 = (!var_0);
                            var_18 ^= (arr_4 [i_2]);
                            var_19 = 8388604;
                        }
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            var_20 &= (-32758 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_7 [i_6 + 1] [i_1] [i_2]));
                            var_21 = (max(var_21, (arr_13 [i_1] [i_0] [i_4] [i_6])));
                        }
                        arr_18 [i_0] [i_1] [0] [16] [i_0] [i_4] &= var_3;
                        var_22 = (!120);
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_23 = var_8;

                        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_23 [i_8] [i_2] [i_2] [i_2] [i_0] = var_1;
                            var_24 = ((!((((arr_19 [i_7] [i_1] [i_0]) ? 2778125416285739352 : (arr_14 [i_8 + 2] [i_7] [22] [i_0]))))));
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_2] [i_7] [i_9] = ((549755813760 - (arr_21 [i_0] [i_1] [i_1] [i_2 + 1] [1] [i_9 + 2])));
                            var_25 = (max(var_25, var_3));
                            arr_27 [i_0] [i_2] = 1;
                            arr_28 [i_2] [i_2] [i_2] = (arr_24 [i_0] [i_0] [13] [i_2]);
                        }
                        arr_29 [i_2] [3] [i_1] [i_1] [i_0] [i_2] = (1 < var_4);
                        var_26 = (max(var_26, ((((arr_9 [i_0] [i_0] [i_1] [i_0] [i_7]) | (arr_24 [i_0] [6] [i_2] [i_0]))))));
                        arr_30 [i_2] = (arr_13 [i_0] [i_2] [i_0] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_1] [i_2] = (((-(arr_15 [i_0] [i_0] [i_2] [22] [i_2]))));
                        var_27 = (((arr_22 [i_0] [i_0] [i_0] [i_0]) >= (arr_22 [i_10] [i_2 + 1] [i_1] [i_0])));

                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            arr_39 [i_2] [i_1] = (-(arr_3 [i_11 - 1] [i_1] [i_0]));
                            var_28 = (arr_0 [i_0] [i_0]);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_29 = ((~(arr_41 [i_0] [i_1] [i_2] [i_10] [i_1] [i_0] [i_0])));
                            var_30 = ((arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) & (arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_31 = ((var_5 ? (arr_17 [i_13] [i_2] [i_2] [1] [1]) : var_8));
                            var_32 = (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_33 = var_1;
                        }

                        for (int i_14 = 1; i_14 < 21;i_14 += 1)
                        {
                            var_34 = (((arr_20 [i_0] [i_1] [i_0] [i_1]) ? -32758 : (arr_8 [i_2 + 1] [i_2 + 1] [i_10])));
                            var_35 = ((-1 ? (arr_47 [i_10] [i_2] [i_10] [i_2] [i_2 + 1]) : -2147483643));
                            var_36 = (max(var_36, (((230 > (((0 != (arr_35 [i_10] [i_10] [i_2] [i_10] [i_14] [i_0])))))))));
                        }
                    }
                    arr_48 [i_2] [i_1] [10] [i_2] = ((1 + (arr_36 [i_2 + 1] [7] [i_1] [7] [7])));
                    var_37 = (arr_10 [i_2] [i_2] [i_2 + 1] [3] [i_2]);
                    var_38 = (min(var_38, (arr_40 [i_0] [i_1] [i_2 + 1])));
                    var_39 = var_9;
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 10;i_15 += 1)
    {
        var_40 = (min(((-(~var_5))), var_0));
        arr_53 [i_15 - 1] = (!(!32765));
        arr_54 [i_15] = (((((+(min((arr_22 [i_15] [i_15] [i_15 + 1] [i_15]), var_5))))) ? (((min((arr_6 [i_15] [1] [1] [i_15]), (arr_35 [i_15] [i_15] [i_15 - 1] [i_15 + 2] [i_15] [i_15]))))) : (((arr_4 [i_15]) + 2652073547))));
        arr_55 [i_15] = var_7;
    }
    var_41 = -var_3;
    #pragma endscop
}
