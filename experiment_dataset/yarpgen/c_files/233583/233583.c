/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_0 [i_0 + 1] [i_0]) ? var_9 : (arr_1 [i_0 + 4] [i_0 + 4])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = ((!(arr_3 [i_0 + 1])));
            arr_10 [i_0 + 3] [8] |= var_5;
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                var_19 = (arr_11 [i_0 - 1]);
                var_20 = ((!(arr_7 [i_2 - 2])));
            }
            var_21 = (min(var_21, var_5));
            var_22 = (arr_3 [i_2 - 1]);
            var_23 |= (arr_13 [i_0 + 4] [1] [i_0 + 1] [i_2 - 2]);
        }
        for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [8] |= (((arr_5 [i_0 + 1]) ? (arr_5 [i_0 + 2]) : var_12));

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_24 = (arr_11 [i_0 + 3]);
                var_25 = var_2;
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_26 = var_5;
        var_27 = ((!(arr_22 [i_6])));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_8] [i_8] [i_7] [i_6] = (!21184);
                    arr_29 [i_7] = ((!(~0)));
                    var_28 |= (((arr_23 [i_7 + 1]) ^ (arr_23 [i_8])));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_29 = ((32767 | (-9223372036854775807 - 1)));
                        arr_33 [i_6] [i_7] [i_8] = (!-21189);
                        var_30 = ((~(((arr_26 [i_6] [9] [i_8] [i_9]) ? var_3 : (arr_22 [i_7 - 2])))));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_31 = ((var_18 ? 21184 : var_16));
                        var_32 |= (arr_32 [i_8] [i_10]);
                        var_33 = arr_24 [i_6] [i_7 - 2] [i_7 - 2];
                    }
                }
            }
        }
        var_34 = (((((4294967295 ? 62406 : -32767))) ? -9223372036854775794 : 1));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_39 [i_11] [i_11] = (arr_37 [17] [i_11]);

        for (int i_12 = 4; i_12 < 23;i_12 += 1)
        {
            var_35 = (max(var_35, (arr_41 [i_11] [i_12])));
            var_36 = (max(var_36, ((max((min((arr_37 [i_12 - 3] [i_12 + 1]), -5319)), var_11)))));
            var_37 = var_12;
        }

        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    {
                        var_38 = max(-31679, ((max(((((arr_44 [i_11] [i_13] [i_15]) || var_2))), var_14))));
                        var_39 = ((-(arr_46 [20] [i_14 - 2] [i_15 + 1])));
                    }
                }
            }
            var_40 = (max(var_40, ((min((min((!9223372036854775807), ((~(arr_48 [i_11] [i_11] [10] [i_11]))))), ((max((arr_43 [i_11] [i_13]), var_16))))))));
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_41 = (max(var_41, ((((max((((arr_44 [i_11] [i_16] [i_16]) ? 9223372036854775794 : (arr_47 [i_11] [i_11] [i_11] [14] [i_11] [i_11]))), (~var_14))) | 1570288548)))));
            var_42 |= (min((min((arr_36 [i_16]), (arr_40 [i_11] [i_16] [i_16]))), 32761));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 23;i_18 += 1)
                {
                    {
                        arr_58 [i_17] [i_16] [i_17] [i_18] = (!(((3653355203 ? (arr_53 [i_16] [i_18 - 2] [i_18 - 4] [i_18 + 1]) : ((min(-125, (arr_50 [i_11] [i_16] [i_17]))))))));
                        var_43 = (!((max((arr_36 [i_11]), 9223372036854775801))));
                    }
                }
            }
            arr_59 [i_11] [i_11] [i_16] = ((~((~(min((arr_55 [i_16] [18]), var_15))))));
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            var_44 |= (arr_40 [i_11] [i_11] [i_19]);
            var_45 |= (arr_51 [i_11]);
        }
    }
    var_46 = 32757;
    #pragma endscop
}
