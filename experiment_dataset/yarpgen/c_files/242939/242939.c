/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_8;
    var_11 &= var_9;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 |= (((((~(arr_0 [12])))) ? (max(((~(arr_0 [10]))), (~var_5))) : (min(((var_0 ? -32235 : (arr_1 [4]))), (arr_0 [6])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (max((((!(arr_0 [i_0])))), var_6));
                        var_13 += (-127 - 1);
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
            {
                arr_22 [i_4] [i_4] [0] &= (arr_21 [i_4]);
                var_14 = (min(var_14, (((((min(((!(arr_15 [2]))), ((var_8 < (arr_12 [2])))))) < ((~((max(var_8, var_9))))))))));
            }
            for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_15 ^= var_0;
                var_16 ^= (max(var_2, (((arr_16 [i_4 + 1]) & ((max(var_3, 32704)))))));
            }
            var_17 = (max(var_17, ((((((~(arr_23 [i_4 + 2])))) ? (arr_18 [i_4 + 3]) : ((max(127, (arr_18 [i_4 + 1])))))))));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        arr_33 [i_4] [i_10] |= ((-32740 ? (((arr_26 [i_10]) ? (arr_26 [i_10]) : var_1)) : (arr_26 [i_10])));
                        var_18 |= min(((((arr_20 [i_4] [i_9 + 1] [i_10] [i_9 + 1]) >= (arr_32 [i_8] [i_10] [i_10] [i_10])))), (((var_6 ? -60 : var_0))));
                        var_19 = var_3;

                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            var_20 &= (min((arr_11 [i_9 + 1] [i_11]), (arr_34 [i_9 - 2] [i_4 - 1] [i_4 + 3] [i_4] [i_4])));
                            var_21 |= (min(((-(arr_13 [i_11]))), (((arr_17 [i_4 - 1]) & ((~(arr_32 [i_4] [i_10] [i_10] [i_10])))))));
                            var_22 = (min(var_22, ((max((((arr_20 [i_9 - 2] [i_10] [i_10] [i_4]) ? (arr_20 [i_9 - 1] [i_10] [i_10] [i_4]) : (arr_20 [i_9 - 1] [i_10] [i_10] [i_4]))), (((arr_20 [i_9 - 1] [i_10] [i_10] [i_4]) ? (arr_20 [i_9 - 2] [i_11] [i_11] [i_4 + 2]) : var_3)))))));
                        }
                    }
                }
            }
        }
        var_23 *= ((~(((var_6 + 2147483647) << (((arr_32 [i_4 - 1] [14] [i_4 + 2] [i_4 - 1]) - 25401))))));
    }

    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_24 ^= (((((~(arr_34 [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (max((((arr_25 [i_12] [i_12]) | 117)), ((var_0 ? (arr_24 [i_12] [4]) : (arr_11 [i_12] [20]))))) : var_7));
        var_25 &= (((arr_23 [i_12]) ? 119 : (max((arr_4 [4] [i_12]), ((var_8 ? var_3 : (arr_4 [14] [i_12])))))));
    }
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        var_26 = (min(var_26, ((max((((arr_20 [i_13 + 1] [4] [4] [i_13 + 1]) ? (arr_24 [10] [10]) : (arr_24 [22] [22]))), ((((arr_20 [i_13 + 1] [8] [8] [i_13 + 1]) == 22307))))))));
        var_27 ^= (((~36) || 78));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            var_28 *= (arr_45 [2] [i_15]);
                            var_29 -= ((-(arr_16 [i_14])));
                            var_30 -= ((-(((arr_43 [i_15] [18] [i_15]) & 20342))));
                            var_31 = (min(var_31, (((~(var_1 ^ var_2))))));
                            var_32 ^= (((((arr_21 [i_14]) + 2147483647)) << ((((((var_4 ? (arr_34 [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_20 [i_18] [i_18] [10] [i_18]))) + 59)) - 3))));
                        }
                    }
                }
            }

            for (int i_19 = 1; i_19 < 21;i_19 += 1) /* same iter space */
            {
                var_33 -= -var_6;
                var_34 = (min(var_34, ((((arr_42 [i_19 + 1] [i_15]) < 15231)))));
            }
            for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 1; i_21 < 21;i_21 += 1)
                {
                    var_35 &= (((arr_21 [i_20 - 1]) ^ (arr_21 [i_20 - 1])));
                    var_36 ^= ((((~(arr_13 [4]))) | (arr_53 [i_20 + 1] [12] [i_20 + 1] [i_20] [i_21 + 1])));
                }
                arr_66 [i_14] [i_14] [i_14] [i_14] = (((arr_47 [i_20 + 2] [i_20 - 1] [i_14]) ? var_8 : -84));
                var_37 += arr_13 [2];
            }
            for (int i_22 = 0; i_22 < 25;i_22 += 1)
            {
                var_38 |= (arr_64 [i_14] [i_15] [i_15] [i_22] [i_22] [i_22]);
                var_39 += var_9;
                arr_70 [i_14] = ((-(!var_4)));

                for (int i_23 = 0; i_23 < 25;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 25;i_24 += 1)
                    {
                        var_40 += -var_6;
                        arr_75 [i_23] [i_15] [i_23] [i_23] [i_24] [i_15] [i_14] = (((((var_3 * (arr_62 [i_14] [i_14] [i_23])))) ? var_2 : (arr_19 [i_14] [i_15] [i_24])));
                    }
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        var_41 = (max(var_41, (((-20354 ? (-127 - 1) : (arr_64 [i_14] [i_15] [i_15] [i_22] [i_15] [i_15]))))));
                        var_42 -= arr_68 [i_14];
                        var_43 = (((arr_12 [i_14]) ? (arr_12 [i_14]) : (arr_12 [i_14])));
                        var_44 += (((arr_23 [i_25]) == (((arr_31 [i_25] [i_22] [i_25]) ? -20367 : (-127 - 1)))));
                    }
                    arr_78 [i_14] [i_14] [i_14] [i_14] = arr_45 [i_14] [i_14];
                }
                var_45 = (max(var_45, (arr_46 [i_14] [i_15] [22])));
            }
            var_46 |= ((var_2 ? -127 : (((arr_15 [8]) | var_6))));
            /* LoopNest 3 */
            for (int i_26 = 1; i_26 < 24;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 25;i_27 += 1)
                {
                    for (int i_28 = 1; i_28 < 23;i_28 += 1)
                    {
                        {
                            var_47 += (((arr_42 [i_26 - 1] [i_26 - 1]) >> (((arr_58 [i_27] [i_28 + 1] [i_26 + 1] [i_27]) - 28235))));
                            var_48 = 19759;
                            var_49 ^= (arr_76 [i_28] [i_28] [i_27]);
                            var_50 *= (((arr_23 [i_26 + 1]) == (arr_23 [i_26 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_29 = 4; i_29 < 24;i_29 += 1) /* same iter space */
        {
            var_51 = var_4;
            arr_89 [i_14] = (!-19759);
        }
        for (int i_30 = 4; i_30 < 24;i_30 += 1) /* same iter space */
        {
            arr_92 [8] &= (arr_47 [i_30 - 3] [i_30 - 2] [12]);
            var_52 += (arr_30 [i_30] [i_30] [10] [i_30]);
        }
        var_53 ^= (-var_5 - var_6);
    }
    /* vectorizable */
    for (int i_31 = 4; i_31 < 9;i_31 += 1)
    {
        var_54 = (max(var_54, ((((arr_56 [i_31] [i_31 - 1] [i_31 - 3] [i_31]) ^ (arr_49 [i_31]))))));
        var_55 *= ((var_6 ? (arr_30 [i_31 + 2] [i_31] [i_31] [i_31 - 1]) : (arr_0 [i_31])));
    }
    #pragma endscop
}
