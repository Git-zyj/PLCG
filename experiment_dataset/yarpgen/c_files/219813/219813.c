/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_14 = ((((arr_0 [i_0] [i_0]) | (arr_5 [i_0 - 2] [i_1 + 1]))));
            var_15 = var_9;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 = (arr_1 [i_2]);
            var_17 |= (max(2486365492, 2486365495));
        }
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            var_18 = (((2486365492 || 70) + (min(var_8, ((((arr_7 [i_0]) ? (arr_8 [i_3] [i_3] [i_0]) : var_1)))))));

            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_19 = (max(var_19, (((var_9 - (max(((((arr_3 [i_5] [i_4] [i_0 - 1]) ? var_13 : (arr_14 [i_0] [i_3])))), (((arr_2 [i_3]) / (arr_9 [i_0] [i_3] [i_3]))))))))));
                    var_20 = ((max((arr_10 [i_3] [3]), (arr_0 [i_3] [i_5]))));
                    var_21 = (arr_0 [i_0] [3]);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = (min(var_22, var_6));
                        var_23 = (arr_14 [i_0] [i_3]);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_24 = (max(-18, ((((max(0, 0)) <= 0)))));
                        var_25 = (max((max((min(var_10, var_9)), (arr_10 [i_3] [i_7]))), (arr_3 [i_0] [i_0] [i_0])));
                    }
                    var_26 = (min(((((max(0, 2486365495)) ^ (arr_12 [i_4 - 3] [i_0])))), var_9));
                }
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    var_27 = (max(var_27, (((((min(var_13, (max((arr_11 [i_3] [i_4] [i_0]), (arr_16 [i_0] [12] [i_0] [12] [i_0] [i_0])))))) & ((((min((arr_16 [i_0] [i_3 - 1] [i_0] [i_8] [i_3 - 1] [i_8]), (arr_10 [i_0] [i_0])))) ? (arr_11 [i_0] [i_3] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))))));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_25 [i_0] [i_3] [i_0 + 2] [i_0 + 2] [i_3] = (arr_14 [i_0] [8]);
                        var_28 = arr_5 [i_0] [i_0];
                        var_29 = (max(var_29, ((min((((max((arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [12]), (arr_14 [4] [4]))))), (max(((var_12 + (arr_12 [i_0] [i_0]))), (4084253588 * 1069547520))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_30 = (((arr_11 [i_3] [i_4] [i_3]) ? var_4 : (arr_9 [i_3] [i_3] [i_3])));
                        var_31 = var_5;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_32 = (arr_18 [i_0] [i_3] [i_4] [i_11]);
                        var_33 = ((arr_6 [i_0] [i_0]) << (((((arr_1 [i_0]) ^ var_2)) + 53718)));
                        arr_32 [i_0] [i_0] [i_4] [i_0] [i_8] [i_3] [i_0] = ((var_3 && (arr_8 [i_0] [i_3 - 2] [i_8])));
                    }
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        var_34 = (-23 | 1688978814168751891);
                        arr_36 [i_0] [i_0] [3] [i_0] [i_8] [i_3] = ((((((max((arr_20 [i_0] [i_3] [i_4] [i_3] [i_4]), (arr_1 [i_4 + 1]))))) + (arr_1 [i_4]))) ^ ((max(var_11, ((min((arr_1 [4]), (arr_16 [i_3] [i_3] [i_3] [i_3] [3] [i_3 - 4]))))))));
                        var_35 &= (((-4927496790838338816 + 28672) % ((((((var_4 > (arr_7 [1]))))) | (arr_27 [i_0 - 2] [i_12])))));
                        var_36 = (((((arr_0 [i_0] [i_0]) ? (arr_1 [i_3]) : ((((arr_31 [i_0] [i_0] [i_4 + 2] [i_8] [i_12]) ? var_10 : (arr_26 [i_0 - 1])))))) + ((((var_0 >= var_5) % (((arr_2 [i_0]) - (arr_26 [i_0]))))))));
                    }
                    var_37 = (min(((max((arr_0 [i_0] [i_0]), (max((arr_20 [i_8] [i_8] [i_4] [i_8] [i_8]), (arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8] [i_8 - 2])))))), (min(((((arr_13 [i_0] [i_3] [i_3] [i_3] [i_3] [i_8]) > (arr_0 [17] [17])))), (arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
                    var_38 = var_13;
                    var_39 = ((var_10 != (arr_4 [i_4] [i_8])));
                }
                var_40 = (arr_0 [i_0] [i_0]);
                var_41 ^= 25;
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_42 *= (((((arr_5 [i_13] [i_15]) << (((arr_27 [i_13] [i_0]) - 4075258307169462828)))) & (1 + 90)));
                            var_43 = var_4;
                            arr_46 [i_0] [i_3] [i_0] [i_14] [i_15] = ((var_11 + (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_44 = var_5;
                            arr_53 [i_0] [i_0] [i_0] [4] [i_17] |= (arr_28 [5] [i_3] [i_3] [5] [5]);
                            var_45 = arr_13 [i_0] [i_3] [i_3] [i_0] [i_16 + 3] [i_0];
                            var_46 = (((arr_40 [i_0] [i_0] [i_3] [i_16] [i_17] [i_17]) ? 134217712 : ((230 ? (arr_41 [i_0] [i_3] [i_0] [i_0]) : 18446744073709551607))));
                        }
                    }
                }
            }
        }
        for (int i_18 = 2; i_18 < 18;i_18 += 1)
        {
            arr_56 [i_0] [i_0] [i_18] = (4084253588 % 18442240474082181120);
            var_47 = (min(((((max((arr_48 [i_0] [i_0] [i_0]), (arr_2 [11])))) | (arr_33 [i_18] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((min(253, ((min(var_13, (arr_8 [i_0] [i_0] [i_18 + 1])))))))));
            arr_57 [i_0 + 2] [i_0 + 2] = ((((((min((arr_10 [i_0] [i_18]), var_2))) << 7)) >> (((arr_52 [i_0] [i_0] [i_0] [i_0] [i_0]) - 3617993312))));
            var_48 = (((arr_49 [i_18] [2] [i_18] [i_18]) ? (arr_34 [i_0] [i_18] [i_18] [i_0] [i_0]) : (min(((var_1 ? var_9 : (arr_31 [i_0] [i_0] [i_0] [2] [i_18]))), (arr_6 [i_0] [i_0])))));
        }
        var_49 = (min(var_49, (((((var_8 << ((((max((arr_23 [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 1]), (arr_41 [i_0] [8] [10] [i_0])))) - 3991)))) << (((max((arr_26 [i_0]), (arr_19 [i_0] [i_0] [i_0 - 1] [i_0]))) - 4294962218)))))));
        var_50 = (max(var_50, (arr_26 [i_0])));
        var_51 *= (min((arr_15 [8] [i_0] [i_0 + 3] [14] [14] [i_0] [i_0]), (((-29 ? 33 : -29)))));
    }
    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
    {
        arr_60 [i_19] &= (min((((min(var_12, (arr_59 [i_19]))))), (((arr_59 [i_19]) % (arr_58 [i_19])))));
        var_52 *= var_1;
        var_53 = (max((((((min((arr_58 [i_19]), (arr_58 [i_19])))) && var_2))), (min((min(-32, 0)), ((var_2 ? var_4 : var_3))))));
        var_54 ^= (max((min((arr_58 [i_19]), (arr_58 [i_19]))), ((((arr_58 [i_19]) == (arr_58 [17]))))));
    }
    for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
    {
        arr_65 [i_20] = var_6;
        arr_66 [7] [i_20] = (max(((min(((((arr_58 [i_20]) ^ (arr_62 [9] [20])))), (min(-91375132270681065, -732792242))))), (min((((arr_58 [i_20]) % (arr_64 [i_20]))), (((var_10 ? (arr_63 [i_20]) : var_3)))))));
        arr_67 [i_20] &= (max((((arr_58 [i_20]) << (var_11 || var_1))), (arr_61 [i_20])));
        var_55 *= (max((0 & 228), (min((var_0 | var_2), (((arr_61 [i_20]) | (arr_58 [i_20])))))));
    }
    var_56 = (max(var_56, ((max((max((var_5 / var_12), (var_3 / var_11))), (((((min(var_5, var_1))) || var_12))))))));
    var_57 -= var_7;
    #pragma endscop
}
