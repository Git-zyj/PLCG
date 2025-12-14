/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = ((-(~var_1)));
        var_20 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((21791 ? 0 : -1782074849));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_21 = (max(var_21, 21791));
            var_22 = ((((min(-21792, (arr_3 [i_1])))) ? ((var_7 ? (arr_3 [i_1]) : -21792)) : 17439));
            var_23 *= ((((max(((min(var_7, var_0))), (((arr_3 [1]) ? (arr_1 [i_0] [i_0]) : -2015194409))))) ? (min(((min(-21786, var_17))), (max(var_3, var_10)))) : (((arr_1 [i_0] [i_1 - 2]) ? ((max(-21791, var_9))) : ((((arr_5 [i_1 - 2] [i_0] [i_0]) != var_11)))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_24 = (min((arr_4 [i_0] [i_2] [i_0]), 0));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((~((21806 ? var_9 : var_6)))))));
                            arr_16 [i_4] [i_0] [i_2] |= ((!(1 >= var_3)));
                            var_26 = (arr_9 [i_0] [i_2] [i_3]);
                        }
                    }
                }
                arr_17 [i_0] [i_2] [i_3] [i_0] = ((-0 + (var_4 >= -2015194393)));
            }
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_27 = ((~(((arr_3 [i_6]) ? (arr_3 [i_6]) : (arr_3 [i_6])))));
                var_28 -= var_4;
                arr_21 [i_6] [i_2] [i_2] = arr_19 [i_2] [i_6] [i_6] [i_0];
                var_29 -= (arr_8 [i_2] [i_2] [i_2] [i_2]);
            }
            var_30 *= ((var_17 ? (arr_1 [i_0] [i_2]) : 0));
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_31 *= (((31 << 7) ? ((min((arr_25 [i_7] [10] [i_9]), ((min((arr_29 [i_7] [i_8] [i_9]), (arr_27 [i_7] [i_8]))))))) : (((!((!(arr_22 [0]))))))));
                        var_32 = (min(var_32, 223));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_33 = (arr_26 [i_9]);
                        arr_33 [i_11 + 1] [i_7] [i_9] [i_7] [i_7] = (~4);
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        var_34 = ((!(((var_4 ? var_3 : (arr_34 [i_8] [i_8 + 3] [i_9] [i_9]))))));
                        var_35 = (((var_13 < var_15) ? (arr_29 [i_12 - 1] [i_9] [i_8 + 1]) : var_10));
                        arr_37 [i_7] = (!-2015194396);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_40 [i_7] [i_7] [i_9] [i_13] = 0;
                        var_36 = (((arr_32 [i_7] [i_7] [i_7]) != (((min(var_4, var_13))))));
                        var_37 = (max(var_37, (arr_35 [i_7] [i_7] [i_9] [i_13] [i_13] [i_9])));
                    }

                    for (int i_14 = 4; i_14 < 12;i_14 += 1)
                    {
                        var_38 = (min(var_38, ((max((((arr_41 [i_9] [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 2]) ? (arr_41 [i_14 + 2] [i_14 - 1] [i_14 + 2] [i_14 - 4] [i_14 - 2] [i_14]) : var_12)), (((-11 < (-32767 - 1)))))))));
                        var_39 = (arr_30 [i_7] [i_8 - 1] [i_9] [i_7]);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_40 += (arr_24 [4]);
                        arr_45 [i_9] [i_7] [i_7] = 4850;
                        var_41 = 2420878379598482092;
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_42 = (min(var_42, (((min(var_16, var_17))))));
                        var_43 *= var_0;
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            arr_56 [i_7] [i_8 + 1] [i_7] [i_9] [i_7] [i_18] [i_18] = -3;
                            var_44 = -2420878379598482092;
                        }
                        for (int i_19 = 2; i_19 < 12;i_19 += 1)
                        {
                            var_45 = (min(var_45, var_3));
                            var_46 ^= 0;
                            var_47 ^= (arr_43 [i_17]);
                        }
                        var_48 = (max(var_48, (arr_26 [i_7])));
                        var_49 -= (((~var_15) < ((var_1 ? (arr_59 [i_7] [i_7] [i_9]) : var_4))));
                        var_50 = (~6);
                    }
                    var_51 *= (((!var_14) > ((max(3, 138)))));
                }
            }
        }
    }
    var_52 = 115;
    #pragma endscop
}
