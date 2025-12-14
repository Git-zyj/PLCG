/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = ((((var_10 <= (arr_2 [i_1]))) ? ((max(-94, 109))) : (arr_1 [i_0])));
            var_17 = (arr_2 [i_0]);
            var_18 = (((arr_3 [i_0] [i_0]) ? ((max(((min(331, -119))), (arr_1 [i_1])))) : ((((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))) ? (arr_5 [i_0]) : ((min(93, (arr_0 [i_0] [i_1]))))))));
            var_19 = (((-(max(-6573861727601022449, -95)))) >= (((var_2 ? (!var_11) : (arr_2 [i_0])))));

            for (int i_2 = 4; i_2 < 7;i_2 += 1) /* same iter space */
            {
                arr_10 [i_1] [i_1] [i_1] = var_3;
                var_20 = (((((arr_9 [i_2 - 2] [i_2 - 4] [i_2 - 3]) - (var_8 - -18))) + (arr_3 [i_0] [i_0])));
            }
            for (int i_3 = 4; i_3 < 7;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_0] [i_1] [i_0] = ((-15940340246752595867 <= ((min((arr_9 [i_3 + 3] [i_1] [i_3 - 2]), var_6)))));
                var_21 = ((((arr_7 [i_3 + 2] [i_3] [i_3 - 3] [i_3 + 2]) == (arr_7 [i_1] [i_1] [i_3 - 3] [i_3 + 1]))));
                var_22 = (((min(((min((arr_4 [i_0] [i_0]), var_7))), (min(var_2, (arr_9 [i_0] [i_1] [i_3 + 2]))))) <= 21957));
                var_23 = (min(-1872812911, ((min(0, 116)))));
                var_24 = (((((arr_6 [i_0] [i_0] [i_0] [i_3 + 3]) ? (arr_6 [i_0] [i_1] [i_1] [i_3 + 3]) : (arr_6 [i_0] [i_0] [i_3 + 2] [i_3 + 3]))) >= ((min((arr_6 [i_3 - 1] [i_3] [i_3 - 4] [i_0]), (arr_6 [i_3 - 1] [i_3 - 4] [i_3 - 4] [i_0]))))));
            }
            for (int i_4 = 4; i_4 < 7;i_4 += 1) /* same iter space */
            {
                var_25 = (arr_17 [i_4] [i_1] [i_0]);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_26 = (min(((var_5 ? 1 : -1962898125)), (((-1962898125 / var_6) ? (((arr_11 [i_0] [i_4] [i_5]) ? (arr_11 [i_5] [i_1] [i_0]) : var_11)) : ((-1087780772 / (arr_11 [i_0] [i_0] [i_5])))))));
                    var_27 = (max((((arr_12 [i_4] [i_4 + 1] [i_4 - 4]) & (min(-394370015, 14)))), (((((arr_7 [i_4 - 3] [i_4 - 3] [i_0] [i_0]) < 32374)) ? (((arr_1 [i_0]) + var_11)) : 53068))));
                    arr_21 [i_0] [i_5] = (max(-103, 12469));
                }
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_26 [i_0] [i_1] [i_1] = ((((((min(var_2, 1)) - (arr_5 [i_0])))) ? var_5 : ((((arr_2 [i_0]) == (arr_8 [i_0] [i_0] [i_6]))))));
                var_28 = (arr_2 [i_6]);
            }
        }
        var_29 = min((arr_12 [i_0] [i_0] [i_0]), (min(1, (arr_17 [i_0] [i_0] [i_0]))));
        var_30 = ((min(((max(1, (arr_13 [i_0] [i_0] [i_0] [i_0])))), (max(92, var_14)))) <= (max((min(394370042, 8302039108205132532)), (arr_14 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [i_7] [i_7] [i_8] [i_9] [i_10] = (1 * -26833);
                                var_31 = ((~(arr_29 [i_9] [i_9])));
                            }
                        }
                    }
                    var_32 = (max((min((arr_2 [i_7]), (arr_2 [i_0]))), (arr_27 [i_7] [i_7] [i_0])));
                    var_33 = var_13;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_34 = var_9;
        arr_42 [i_11] = ((~(arr_41 [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 24;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_35 = arr_38 [i_15 + 3] [i_13 + 1];
                                var_36 = (+-14626446156124092875);
                                arr_52 [i_15 + 1] = (arr_43 [i_13 - 2] [i_13 + 1] [i_13 - 4]);
                                var_37 = ((var_9 ? ((1962898108 % (arr_50 [i_11] [i_11] [i_11] [i_11] [i_11]))) : var_1));
                            }
                        }
                    }
                    var_38 = (arr_48 [i_13 + 1] [i_13] [i_13 - 3] [i_13] [i_13 - 3]);
                }
            }
        }
        var_39 = var_1;
    }
    var_40 = var_15;
    var_41 = 84;
    #pragma endscop
}
