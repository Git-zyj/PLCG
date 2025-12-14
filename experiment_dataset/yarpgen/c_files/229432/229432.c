/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_2 ? 1 : var_14)))) ? var_2 : var_10));
    var_19 = (min(var_3, (((((var_3 ? 32768 : 254))) ? (min(var_5, var_13)) : var_3))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 = ((((min(-var_0, var_5))) ? (var_10 >= var_7) : ((+(((arr_1 [i_0]) + (arr_1 [i_0])))))));
        var_21 = (((((~(min(1, (arr_0 [i_0])))))) ? ((((min(var_16, -1700399174))) ? var_9 : (~15715307798634999615))) : var_3));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_22 = ((+(min((min((arr_2 [i_0 + 1] [17] [1]), var_5)), (((var_10 * (arr_3 [20] [i_0] [i_1]))))))));
            var_23 = (min(((((~var_8) ? ((min(56655, var_3))) : (~var_17)))), ((~(min(var_5, var_14))))));
            var_24 = 1;
            arr_6 [i_0] = ((var_3 + (((18446744073709551615 || var_0) ? var_8 : (min(1, 288230376151711744))))));

            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2 - 3] = (1 != -32757);
                var_25 = min((((arr_8 [i_2 - 3] [i_2] [i_2] [i_0 + 1]) ? (arr_0 [i_0]) : 854915760)), (arr_5 [i_0 + 1] [i_1 - 1] [i_2]));
                arr_10 [i_0] [i_0] [i_0] [i_2] = (arr_4 [i_0] [i_1]);
                var_26 = ((((43196 * (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1])))) ? var_2 : (((((arr_7 [i_1] [i_1] [i_1] [i_1 - 1]) * (arr_4 [i_0 - 1] [18]))))));
                var_27 = (min((((!(arr_2 [11] [1] [i_2 + 2])))), var_0));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_28 = ((var_5 | ((((-21559 - 2114283262) - ((var_14 * (arr_7 [4] [i_1 + 1] [i_3] [i_3]))))))));
                arr_13 [i_0] [19] [i_0] = ((!((((min(854915760, 1)) / (arr_11 [i_0] [i_0] [i_1 - 1] [i_1 - 1]))))));
            }
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_22 [i_0] = var_15;
                        var_29 = arr_16 [i_0 + 1] [i_0 + 1];
                    }
                }
            }

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_25 [i_0] [i_4] [i_0] [i_0] = (min(var_16, ((!(var_11 || 0)))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_30 = (~var_11);
                            arr_32 [i_0] [20] [i_7] [i_8] [i_8] = (arr_21 [i_0]);
                            arr_33 [i_0] [i_0] [i_7] [21] [i_0] [21] [21] = (((((min((arr_26 [i_0] [i_0]), var_0)) << (((((arr_14 [7]) - 43196)) + 43250))))) ? var_4 : var_13);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                var_31 = -var_6;
                var_32 = (arr_30 [i_0] [15] [15] [i_4] [6] [i_4] [17]);
            }
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            var_33 = ((arr_24 [i_12] [20] [20] [i_11]) ? (arr_21 [16]) : (100 - 52));
            var_34 = (arr_36 [10]);
            arr_44 [i_12] = ((29093 / ((169 - (arr_23 [i_11] [19] [i_12 + 3] [i_12])))));
        }
        arr_45 [i_11] [i_11] = 21527;
    }
    var_35 = ((min((min(var_7, var_8), (((var_6 << (((-295044047531671627 + 295044047531671647) - 19)))))))));

    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        arr_50 [7] = var_2;
        var_36 = (min(var_3, (min(2731436275074552001, (((1 ? 1 : 1)))))));
    }
    #pragma endscop
}
