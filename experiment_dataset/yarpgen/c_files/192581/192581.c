/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [9] = ((min(((32752 ? 32767 : -532), (arr_0 [i_0])))));
        var_11 -= (-32745 - 32745);
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_12 -= (arr_7 [i_1] [i_2 - 1]);
            var_13 = -7692;
            var_14 = (min(var_14, (((!((max(((((arr_0 [i_2]) > (arr_5 [i_1] [i_2])))), var_8))))))));
        }
        var_15 = (max(var_15, ((max(((28 ? -7679 : 32735)), (~-var_10))))));
        var_16 -= -11933;
        var_17 = (min(var_17, (!var_0)));
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_18 = arr_11 [i_3] [14];
        arr_12 [i_3] [i_3] = ((((((((arr_0 [0]) ? (-32767 - 1) : 28672))) ? (arr_10 [6] [i_3]) : var_3)) < var_5));
        arr_13 [15] [6] = ((-((min(23993, 32762)))));
    }

    for (int i_4 = 4; i_4 < 14;i_4 += 1)
    {
        arr_16 [13] = (((((arr_15 [i_4 + 1] [i_4 - 1]) && (arr_15 [i_4 - 1] [i_4 - 1]))) ? (((~32765) ? var_8 : ((max((arr_15 [i_4] [6]), var_3))))) : 14134));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_19 -= ((~((min((arr_0 [i_4 + 1]), var_10)))));
                        arr_26 [i_7] [i_5] [i_6] [i_7] = var_10;
                        var_20 = (min(var_20, var_7));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_21 = (max(var_21, ((((-32767 - 1) ? (-32767 - 1) : -30294)))));
        arr_31 [i_8] [8] = arr_28 [19] [i_8];
    }
    for (int i_9 = 4; i_9 < 19;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_22 -= ((var_4 ? var_2 : ((-(arr_36 [9] [i_10])))));
            arr_37 [i_9] [i_9] = ((32762 ? -32762 : 14194));
            arr_38 [i_9] [i_9] = ((var_4 << (((((arr_35 [i_9 - 3] [3]) + 31448)) - 14))));
        }
        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            var_23 -= (min((arr_33 [i_9] [i_9]), (((((arr_29 [i_9]) ? (arr_27 [15] [i_11]) : var_6)) + var_10))));
            var_24 = min((arr_29 [i_9]), (arr_34 [i_9] [11]));
            var_25 = (max(var_25, ((((((var_7 ? (arr_28 [i_11] [i_11 - 1]) : (arr_28 [i_9] [i_11 + 1])))) ? (((arr_28 [9] [i_11 - 2]) % (arr_28 [i_11] [i_11 - 1]))) : (arr_28 [i_9] [i_11 + 1]))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            arr_43 [i_9] = 1;
            arr_44 [i_9] = ((!(arr_34 [i_9] [i_12])));
        }
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                {
                    arr_50 [i_9] [i_13] [i_9] = (((var_8 >= -1346) >= (arr_30 [i_9 - 4])));

                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {
                        var_26 = (min(var_26, (((!(arr_52 [i_15] [11] [i_15 + 1] [3] [i_15 - 1] [i_15]))))));
                        var_27 = (min(var_27, (((((min((arr_27 [12] [i_13]), 21128))) > (arr_28 [i_9] [i_14]))))));
                        var_28 -= (min((((!((!(arr_33 [i_9] [8])))))), ((~(arr_36 [i_9] [i_15 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        arr_55 [i_9] [i_14] = arr_39 [i_9];
                        var_29 = (max(var_29, 32761));
                    }
                    for (int i_17 = 3; i_17 < 19;i_17 += 1)
                    {
                        arr_58 [i_9] [i_9] [i_9] [14] [i_9] = ((-32744 - (arr_40 [i_9] [i_13] [i_9])));
                        var_30 -= 26471;
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_62 [9] [i_9] [i_9] [i_9] = ((-11230 ? -5793 : var_10));
                        arr_63 [i_9] [i_9] [14] [i_18] = arr_61 [i_9] [16] [i_9] [i_9];
                        arr_64 [i_9] [i_13] [i_9] = arr_45 [i_9] [i_9 - 3];
                        var_31 = (max((((!(-32767 - 1)))), (arr_42 [1] [i_9] [i_9 + 1])));
                    }
                    var_32 = (max(var_32, (((-8192 - (-32767 - 1))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        for (int i_23 = 4; i_23 < 9;i_23 += 1)
                        {
                            {
                                var_33 = ((-((-(((arr_20 [6] [i_21] [i_22]) ? (arr_72 [i_22] [i_23]) : var_7))))));
                                var_34 -= arr_18 [i_19] [i_22];
                            }
                        }
                    }
                }
                arr_79 [11] [i_20] = -32718;
                var_35 -= var_10;
            }
        }
    }
    var_36 = ((min(var_10, var_2)));
    #pragma endscop
}
