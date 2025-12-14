/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_16 = (7965559600413855710 ? 1 : 1);
        var_17 = 18285609872581578554;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= ((-(min(var_8, var_12))));
        var_18 = ((min(var_1, var_14)));

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_19 = 235;

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_20 -= var_9;
                arr_14 [i_1] [i_1] [i_2] [i_3] |= ((+((-((var_8 << (((arr_9 [i_3]) + 123))))))));
                arr_15 [i_1] [i_2] [i_2] = (((((65513 << (94 - 87)))) ? 1 : (!1)));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_21 = var_10;
                arr_19 [i_1 + 2] [1] [i_1] = ((~(arr_3 [i_1 + 3])));
                arr_20 [i_1 + 3] [i_1 + 3] [i_1] [9] |= 536870896;
            }
            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_22 = (max(var_22, 3611266946));
                    var_23 = (~((max(1, var_10))));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    var_24 -= (((min(((var_0 ? var_0 : -1)), var_1)) == ((1939 ? ((55 ? (arr_26 [i_7] [i_7 + 2] [i_5 + 4] [15] [i_2] [i_1]) : -6057579639121750953)) : (arr_24 [i_1] [15] [i_5] [i_7])))));
                    arr_28 [i_1] [i_1] [i_2] [i_2] [1] [i_7] = (min(5898188142591634638, (((var_2 && (arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                }
                var_25 = ((-(arr_12 [i_1 - 1] [i_1] [i_1 - 1])));
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_26 = (min(var_26, (max((arr_32 [i_1 - 1] [i_1] [i_1 + 1] [i_9 - 2]), (((~(arr_32 [i_1 + 2] [i_1] [i_1 + 1] [i_9 - 2]))))))));
                            var_27 -= (((((min(-63, (arr_12 [i_1] [i_1] [i_10])))) << (((var_13 + 40) - 13)))));
                        }
                    }
                }
                var_28 = (max(var_28, ((((~var_10) ^ ((min((arr_12 [i_1 + 3] [i_1 + 1] [i_1 + 3]), (arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))))));
                arr_36 [i_1] [i_2] [i_8] = -374132202;
            }
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {
                        var_29 = (min(var_29, var_4));
                        var_30 = (min(var_30, (~var_8)));
                        var_31 = var_5;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                arr_48 [i_13] = var_7;
                var_32 = (min(var_32, (((-41 ? (arr_29 [i_14 + 4] [i_13 + 1] [i_1]) : var_11)))));
                var_33 = (max(var_33, (arr_23 [i_1])));
                var_34 = ((-(var_5 - 255)));
                arr_49 [i_1] [i_13] [i_13 - 1] [i_14] = -1;
            }
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                var_35 *= var_7;
                var_36 |= (var_14 ? (~var_6) : ((1073741823 ? var_4 : -206001636)));
            }
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        {
                            var_37 = (((arr_54 [i_1 + 1] [i_1 + 1]) >= 5898188142591634638));
                            arr_61 [i_17] [i_17] [i_17] [i_17] [i_18] = ((-(65504 > 3652549825989890483)));
                            var_38 = (arr_44 [i_13 - 1] [i_13 - 1] [i_13 - 1]);
                            var_39 = ((-22562 ? -1410637049 : (-9223372036854775807 - 1)));
                        }
                    }
                }
                var_40 = (-107 < var_4);
                var_41 = var_11;
            }
            arr_62 [i_1] [20] &= var_0;
        }
    }
    var_42 = (min(var_42, var_13));
    var_43 |= var_15;
    #pragma endscop
}
