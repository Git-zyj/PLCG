/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 = ((-((~(arr_0 [i_0] [i_0 - 1])))));
        var_21 = 9223372036854775794;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_22 = (arr_2 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 ^= 0;

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_24 = (max(var_24, ((((~(arr_7 [i_1] [i_1] [i_3])))))));
                var_25 = (arr_4 [i_3] [i_3] [i_3]);
                var_26 = (min((0 | 38045), (((!(arr_8 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2]))))));
            }
            var_27 = (min(((((((0 ? 18446744073709551607 : 0))) || (arr_6 [i_2] [i_1] [6] [6])))), (((~(arr_4 [i_1] [8] [6]))))));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_28 = (!((max((arr_14 [i_2] [i_2] [i_2] [i_2] [4]), (~-13)))));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_29 *= (arr_7 [i_1] [7] [2]);
                        var_30 = (max(var_30, (((((max(((var_8 ? -1 : (arr_2 [i_1] [i_1]))), (0 || var_16)))) ? (arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]) : ((max((arr_16 [i_1 - 2]), (arr_16 [i_1 - 2])))))))));
                        var_31 = ((+(((arr_5 [i_6]) ? var_19 : (arr_5 [i_1])))));
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_32 = var_0;
                    var_33 -= ((((~(arr_10 [i_1 - 1] [i_1] [i_1]))) >= (arr_10 [i_1 - 1] [i_1 - 1] [i_1])));
                }
                var_34 = (~var_12);
            }
            var_35 = (arr_7 [i_2] [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_36 = (((arr_5 [i_1]) || ((var_6 != (arr_11 [i_1] [i_1] [i_8] [i_1])))));
            var_37 = ((~(-32767 - 1)));
            var_38 = ((~(arr_8 [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 - 1])));
            var_39 = (min(var_39, var_8));
        }
        var_40 = max(((max(var_17, 23))), (arr_3 [i_1]));
        var_41 ^= (arr_2 [i_1 - 2] [i_1 - 1]);
        var_42 = ((~(arr_11 [i_1] [12] [i_1] [i_1])));
    }

    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_43 = 13780901519208903168;
        var_44 += (arr_23 [i_9]);
        var_45 = var_13;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_46 = ((((((-1284626303 ? (~1812224292) : var_8)) + 2147483647)) >> (((arr_25 [i_10]) + 1724903052))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    var_47 = ((5489876381561272460 || -739130009) ? 0 : -739129999);
                    var_48 = var_3;

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {

                        for (int i_14 = 3; i_14 < 12;i_14 += 1)
                        {
                            var_49 = var_13;
                            var_50 = 10453;
                        }
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 13;i_15 += 1)
                        {
                            var_51 = var_12;
                            var_52 = (+((((arr_28 [i_10]) >= (arr_30 [i_13])))));
                            var_53 = var_5;
                        }
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            var_54 = 26;
                            var_55 &= (arr_29 [i_10] [i_10] [i_10]);
                            var_56 |= ((-739129999 | (((var_6 && (~var_8))))));
                        }
                        for (int i_17 = 2; i_17 < 14;i_17 += 1)
                        {
                            var_57 = (max(var_57, var_11));
                            var_58 = (max(var_58, 0));
                        }
                        var_59 = var_9;
                        var_60 &= -5489876381561272461;
                    }
                }
            }
        }
        var_61 = (max(1144219322, -1046458671));
        var_62 = 18446744073709551612;
        var_63 *= (max((arr_38 [i_10] [i_10] [i_10] [14] [i_10] [i_10] [i_10]), (((-(arr_25 [i_10]))))));
    }
    #pragma endscop
}
