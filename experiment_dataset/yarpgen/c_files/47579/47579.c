/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (max(var_15, ((min(((var_6 ? var_11 : var_10)), var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (min((arr_3 [i_2] [i_3] [i_4]), (((arr_3 [i_3] [i_1] [4]) ? (arr_3 [i_4] [i_3] [i_0]) : -1))))));
                                var_17 = 83;
                                var_18 = (min(var_18, 85));
                                var_19 = 28;
                                var_20 &= var_4;
                            }
                        }
                    }
                    var_21 = (((max((((arr_5 [i_0] [i_1] [i_2]) ? -84 : var_9)), ((max((arr_5 [i_2] [i_1] [i_0]), var_3)))))) ? -var_13 : (((arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) ? 12395488958848407446 : var_13)));
                    var_22 = (min(((((!(arr_2 [i_0]))) ? (arr_2 [i_0]) : (arr_9 [i_2] [i_1] [i_2]))), var_13));
                }
                var_23 -= 4;
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = var_10;
        var_25 ^= ((2 ? var_8 : (((arr_15 [i_5] [i_5]) ? (arr_15 [i_5] [i_5]) : var_10))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = -65;
        var_27 = var_0;
        var_28 = (1656 ? 17 : 504);

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_29 -= (arr_17 [i_6]);
            var_30 = (max(var_30, (((-8199 ? (arr_18 [i_6]) : (arr_18 [i_7]))))));
            var_31 = ((12352446505214752838 ? -8417 : (arr_17 [i_7])));
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_32 = (max(var_32, var_5));
            var_33 = arr_21 [i_8];
        }
    }
    for (int i_9 = 1; i_9 < 23;i_9 += 1)
    {
        var_34 = (arr_26 [i_9]);
        var_35 = max(((max(var_2, var_4))), (min(((min((arr_25 [i_9]), -2012549772))), 4)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_36 *= (((arr_26 [10]) ? var_12 : (arr_28 [i_10])));

        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            var_37 = 0;
            var_38 = (((arr_26 [10]) ? (((var_11 ? -1332528521 : var_2))) : 14431962226699265552));
        }

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_39 = var_12;

            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                var_40 = var_0;
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_41 = (max(var_41, var_4));
                            var_42 = ((4597002995947342919 * (arr_37 [i_10] [i_12] [i_14])));
                            var_43 = var_12;
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                var_44 += -13;
                var_45 = (((arr_30 [i_10]) ? (arr_30 [i_10]) : var_1));
                var_46 = -1579;
            }
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_47 = -2018243939;
            /* LoopNest 2 */
            for (int i_18 = 4; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 3; i_19 < 22;i_19 += 1)
                {
                    {
                        var_48 = arr_29 [i_10] [i_18];
                        var_49 -= var_2;
                    }
                }
            }

            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                var_50 = (max(var_50, var_6));
                var_51 = ((~(arr_46 [i_10] [i_10] [i_10] [i_10])));
                var_52 = (min(var_52, var_10));
            }
            for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
            {
                var_53 = var_4;
                var_54 = (~706435166);
            }
            for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
            {
                var_55 = (min(var_55, ((((arr_50 [i_17] [i_10]) && var_3)))));
                var_56 += var_7;

                for (int i_23 = 0; i_23 < 23;i_23 += 1)
                {
                    var_57 -= (arr_54 [17] [i_17] [17] [i_22] [i_22] [i_23]);
                    var_58 = ((1217898281 ? 127 : -709876030));
                    var_59 = ((-(arr_30 [i_10])));
                }
                for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
                {
                    var_60 |= var_10;
                    var_61 = ((!(arr_26 [i_22])));
                }
                for (int i_25 = 0; i_25 < 23;i_25 += 1) /* same iter space */
                {
                    var_62 = (((arr_65 [i_10] [i_10] [i_10] [i_10] [i_10]) ? -110 : 19654));
                    var_63 = ((((((arr_34 [i_10] [i_25]) ? var_9 : 966947288))) ? ((-1004032340 ? var_7 : var_4)) : (arr_35 [i_10] [i_10] [22])));
                    var_64 = (((((var_9 || (arr_60 [i_10] [i_22])))) <= ((var_10 ? var_10 : var_4))));
                    var_65 = var_2;
                }
                var_66 |= arr_38 [16] [6] [i_17] [i_10];
                var_67 = var_2;
            }
            var_68 = (max(var_68, (37 < var_12)));
        }
    }
    #pragma endscop
}
