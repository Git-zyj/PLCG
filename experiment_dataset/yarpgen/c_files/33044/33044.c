/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_5 ^ 12);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : ((-64 ^ (arr_1 [i_0] [2]))))), ((-111 ? (arr_0 [0]) : (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (!var_0)));
                        var_15 ^= -124;
                    }
                }
            }
        }
        var_16 = (max(var_16, ((min((max((arr_4 [i_0] [i_0]), -84)), ((2970234298 ? 1617690790 : (arr_4 [i_0] [i_0]))))))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            var_17 = -123;
            arr_16 [i_5] [i_5] = var_7;
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_18 = (max(var_18, var_9));
                    var_19 ^= ((max(((~(arr_12 [i_4] [i_7]))), (var_2 & 18056))));
                    var_20 = 8241254784306260868;
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_21 ^= ((!((min(1, (arr_23 [i_8 + 2]))))));
        var_22 = ((((arr_21 [i_8 + 2] [i_8 + 2]) ? (arr_21 [i_8 + 2] [i_8 + 1]) : 105)) > (arr_21 [i_8] [i_8]));

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_23 ^= (min(((((max(var_10, 28495))) || ((min(var_12, (arr_26 [i_8] [i_9])))))), (arr_0 [1])));
            arr_27 [i_8] [i_8] [i_8] = (arr_18 [5] [i_8]);
            arr_28 [i_8] [i_8] [i_8 - 1] = var_5;
        }

        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_24 ^= -105;
            var_25 = (-((-(arr_19 [i_10] [i_8] [i_8 + 1]))));
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_26 = (min(var_26, -108));
                            var_27 ^= ((((max((arr_20 [12] [i_11] [i_10] [i_8 + 3]), (min(1, var_12))))) ? ((((1 || (arr_8 [i_8] [i_11] [i_12 - 1] [i_13 + 1] [i_11 - 1] [i_8 - 1]))))) : (min(((-99 ? var_1 : (arr_6 [4] [i_11]))), (arr_33 [i_11] [i_11] [6])))));
                            arr_42 [i_12 - 1] [i_12 - 1] [i_8] [i_12 + 1] [i_12] [i_12] [i_12 + 1] = (((((((arr_40 [6] [10] [i_10] [3] [i_10] [6]) ? var_11 : -78)) > ((((arr_5 [i_8 + 1] [i_10] [i_8 + 1] [i_8]) && -92))))) ? 41 : var_3));
                        }
                    }
                }
            }
            var_28 ^= (arr_31 [2] [i_10]);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {
            var_29 ^= -127;

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_30 = (min(var_30, (arr_26 [1] [i_8])));
                var_31 = (((arr_45 [i_8]) ? (arr_0 [i_15]) : (arr_31 [i_8] [i_8])));
                var_32 = ((~(((var_8 || (arr_22 [i_15] [i_8]))))));
                var_33 = (((!(arr_0 [9]))));
            }
            for (int i_16 = 1; i_16 < 8;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_53 [0] [0] [i_8] [i_17] [5] [i_8] [i_17 + 1] = ((((arr_25 [i_16]) ? 1 : (arr_50 [i_8] [i_16 + 3] [i_8]))));
                            var_34 ^= (((-91 & 4292609814498037568) ? (arr_11 [i_8]) : (((arr_10 [i_18 - 1] [12] [i_8 + 2] [i_14] [12] [i_8 + 2]) ? 1 : 26925))));
                            var_35 ^= (((arr_12 [i_8 + 2] [i_8]) ? var_9 : (arr_12 [i_8 + 2] [i_8])));
                        }
                    }
                }

                for (int i_19 = 3; i_19 < 8;i_19 += 1)
                {
                    arr_57 [i_16] [i_8] [i_8] [i_8] = (arr_0 [i_8 + 3]);

                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_36 = ((!((15633958717488641594 != (arr_17 [i_8] [i_16] [i_16])))));
                        var_37 = (min(var_37, 104));
                    }
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        var_38 ^= ((!(arr_38 [i_19 + 3])));
                        var_39 ^= ((var_12 % (arr_29 [8])));
                        arr_62 [i_8] [i_8 + 1] [i_8] [i_16] [i_16] [i_19] [i_8] = -204;
                    }
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        var_40 ^= (((arr_7 [i_22] [i_22] [0] [i_16] [i_8 + 3]) ? 20 : (arr_7 [12] [i_19] [1] [i_8] [i_8 + 3])));
                        var_41 = (((arr_55 [i_19 + 3] [i_8] [i_22] [7] [i_22] [1]) ? var_7 : 3590612411298378818));
                        arr_66 [i_8] = (((arr_49 [i_8 + 3] [i_8 + 2]) || var_4));
                        var_42 = (!1);
                    }
                    var_43 ^= 160;
                    var_44 = (arr_65 [i_8] [i_14] [i_16] [i_14] [i_16]);

                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        var_45 ^= (1 & 96);
                        var_46 = arr_8 [i_8] [i_8] [i_16] [i_19] [i_19 + 3] [i_8 + 2];
                        arr_70 [i_8] [i_19] [i_16] [i_14] [i_8] = (arr_64 [i_8 - 1] [i_8] [i_16 - 1] [3] [i_16 - 1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 10;i_24 += 1)
            {
                for (int i_25 = 3; i_25 < 7;i_25 += 1)
                {
                    {
                        var_47 ^= ((arr_52 [i_24 - 1] [i_24] [i_8] [i_24] [i_8]) != (arr_52 [i_24 + 1] [i_24] [0] [i_24] [0]));
                        var_48 = ((var_12 ? (arr_20 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24 + 1]) : (arr_36 [i_8])));
                        var_49 = ((arr_4 [1] [i_8]) ^ 18055778261311596295);
                        var_50 = ((((43629 ? (arr_15 [i_14] [i_8]) : (arr_64 [7] [i_8] [i_24] [i_8] [i_8]))) * ((((arr_59 [i_8 + 3] [i_14] [i_8] [5] [i_25]) / (arr_1 [3] [3]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
    {
        var_51 = 60;
        arr_80 [i_26] = (arr_12 [i_26] [i_26]);
    }
    for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
    {
        arr_84 [i_27] = (max((((arr_14 [i_27] [i_27] [i_27]) & ((max((arr_14 [i_27] [i_27] [i_27]), 34203))))), (arr_78 [i_27])));
        var_52 = (arr_78 [i_27]);
        arr_85 [i_27] [i_27] = 31;
        var_53 = (((arr_83 [i_27]) ? (arr_77 [15] [i_27]) : (((min((arr_83 [i_27]), (!var_2)))))));
    }
    var_54 = var_3;
    #pragma endscop
}
