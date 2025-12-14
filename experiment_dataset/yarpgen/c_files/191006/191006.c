/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 &= (!var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = (arr_6 [i_2] [i_3]);
                        arr_11 [i_0] [i_1] = (arr_3 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_17 = (min(905387929, ((3600240507402638036 ? var_3 : 26667))));
                        arr_15 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((-2 & (arr_8 [i_4] [i_4] [i_2] [i_1] [i_0] [i_0])));
                        var_18 = -var_6;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_19 += var_9;
                        var_20 = (arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2]);
                        var_21 -= var_4;

                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_22 -= var_0;
                            arr_22 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = (~((((var_11 ^ var_12) < var_1))));
                            var_23 += 26687;
                            arr_23 [i_5] [i_2] [i_5] &= (((arr_7 [i_2] [i_5] [i_6]) ? 111 : (arr_16 [i_6 + 4] [i_6] [i_5] [i_6 + 2] [i_6 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_24 = (!-6809568532023685372);
                            var_25 = 905387929;
                            arr_27 [i_0] = var_14;
                            arr_28 [i_0] [i_0] [i_0] [i_5] [i_7] = ((((arr_7 [i_0] [i_1] [i_2]) ? (-6809568532023685372 | 1) : (arr_14 [i_7] [i_5] [i_2] [i_2] [i_1] [i_0]))));
                            arr_29 [i_1] [i_5] [i_7] |= (((((((arr_6 [i_2] [i_5]) ? var_2 : (arr_12 [i_0] [i_1] [i_1] [i_0] [i_5] [i_7]))))) && (((~(arr_16 [i_7] [i_5] [i_2] [i_1] [i_0]))))));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_26 *= (((!26654) ? var_1 : ((((arr_25 [i_8] [i_1] [i_5] [i_5] [i_8] [i_1] [i_5]) >= (var_9 + var_11))))));
                            arr_33 [i_5] [i_0] = 32767;
                            var_27 = (28040 | var_14);
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_28 -= (~20125);
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0] [i_5] = (!-905387915);
                            var_29 = var_4;
                        }
                        arr_39 [i_0] [i_1] [i_0] [i_0] = (!var_5);
                    }
                    var_30 -= (((arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) & ((((((arr_0 [i_2]) ? (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_24 [i_0] [i_2])))) ? (((32752 != (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_10))));
                    var_31 = var_13;
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_43 [i_10] = (((((((arr_40 [i_10]) ? (arr_42 [i_10]) : (arr_41 [i_10]))))) ? (arr_41 [i_10]) : var_1));
        var_32 = var_7;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_48 [i_11] [i_11] = ((!(arr_30 [i_11] [i_11] [i_11] [i_11] [i_11])));
        arr_49 [i_11] |= -5032203625060798177;
        arr_50 [i_11] [i_11] = ((!(arr_35 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        arr_51 [i_11] = var_10;
    }
    #pragma endscop
}
