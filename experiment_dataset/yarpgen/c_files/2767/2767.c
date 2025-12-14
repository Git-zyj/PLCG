/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((189 ? -5 : var_8))));
    var_20 = (min(var_4, (!var_16)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 *= 940888956;
                var_22 = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_23 = (~((((min(69, 0))) ? (((arr_0 [i_1] [i_2]) ? var_15 : var_15)) : ((var_1 ? (arr_8 [i_1] [i_1] [i_2] [i_3 - 2]) : (arr_8 [i_1] [i_2] [i_2] [i_3]))))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_24 = (~5);
                                var_25 = (arr_13 [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 1] [i_2]);
                            }
                            var_26 = ((var_4 ? var_14 : (min(var_15, (min((arr_12 [1] [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]), 7))))));
                            var_27 += (max((arr_4 [i_2 + 1] [i_1] [i_0]), 9223372036854775807));
                            var_28 = (min(940888929, (((-5628069401545651566 ? -80 : 18446744073709551607)))));
                        }
                    }
                }
                var_29 = 6811520074536008827;
            }
        }
    }

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_30 = 940888956;
        var_31 = var_14;
    }
    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {
        var_32 = (((((var_8 ? var_12 : ((4983479831135392299 ? (arr_17 [i_6] [i_6 - 4]) : (arr_17 [i_6] [i_6 - 3])))))) ? (((((var_15 ? 0 : (arr_17 [i_6] [i_6]))) < (((((arr_18 [i_6]) <= (arr_19 [i_6])))))))) : ((-var_5 << (((arr_19 [i_6 - 4]) - 8032218584647835639))))));
        var_33 = (min((!4983479831135392299), (max((arr_19 [i_6]), 3235860679))));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_34 |= var_0;
                    var_35 = (~1);
                }
                var_36 = ((57 != ((((80 ? 1589000382 : 69)) ^ -49))));
                var_37 |= 1;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_38 = ((~((((arr_31 [i_11 + 1] [i_10 + 3] [i_6] [i_6]) >= var_7)))));
                            var_39 = (~(126 | var_5));
                            var_40 = ((48 ? (((-4983479831135392293 ? 1 : -1742217241))) : (arr_31 [i_6 + 1] [12] [i_6] [i_6 + 1])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_41 = var_11;
                            var_42 = var_2;
                        }
                    }
                }
            }
            var_43 = (min(var_43, (((((65535 ^ (arr_39 [13] [i_6] [8] [i_6]))) << (((((arr_39 [i_6] [i_6] [i_7] [i_7]) & (arr_39 [i_7] [i_7] [i_7] [i_7]))) - 106792221)))))));
        }
        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {

            for (int i_16 = 3; i_16 < 18;i_16 += 1)
            {
                var_44 = (min(((((arr_26 [i_6] [i_16 + 2] [i_15]) >= (arr_26 [i_6] [i_16 + 2] [i_15])))), (arr_26 [6] [i_16 + 1] [i_15])));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_45 = 948044853;
                            var_46 = (arr_34 [i_15]);
                        }
                    }
                }
            }
            var_47 = var_13;
            var_48 = (-638961161 & 0);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_49 = ((((174 ? (arr_44 [i_6 + 2] [i_19] [i_6 + 2]) : -818618069)) | var_11));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    {
                        var_50 &= ((-(arr_54 [i_6] [i_6])));
                        var_51 *= (((1 & 196) ? 1 : -335270026));
                        var_52 = ((189 ? 3767104876 : (arr_36 [i_6 - 1] [10])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    {
                        var_53 = var_8;
                        var_54 = (((arr_21 [17]) % 1));
                        var_55 += 1349750236;
                        var_56 = 4294967295;
                    }
                }
            }
        }
        var_57 = (min(var_57, (((((((max(var_4, (arr_54 [8] [i_6])))) ? (((var_12 ? var_12 : 2016957968))) : (arr_51 [i_6] [i_6] [16])))) ? ((((((((arr_61 [i_6] [i_6] [i_6] [i_6]) > 3296717315538543503)))) > (max(255, -3217204849369264535))))) : ((-4300294576032097594 ? var_13 : (arr_38 [i_6 - 2] [i_6] [i_6] [i_6])))))));
    }
    #pragma endscop
}
